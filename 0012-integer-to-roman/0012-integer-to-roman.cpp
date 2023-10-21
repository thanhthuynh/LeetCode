class Solution {
public:
    string intToRoman(int num) {
        string ans="";
       while(num>0) {
           if(num>=1 && num<=3) {
               string cur = "I";
               ans = ans + cur;
               num = num - 1;
               
           }
        else if(num==4){
            string cur = "IV";
               ans = ans + cur;
               num = num - 4;
        }
           else if(num>=5 && num<=8) {
               string cur = "V";
               ans = ans + cur;
               num = num - 5;
           }
        else if(num==9){
            string cur = "IX";
               ans = ans + cur;
               num = num - 9;
        }
           else if(num>=10 && num<=39) {
               string cur = "X";
               ans = ans + cur;
               num = num - 10;
           }
        else if(num>=40 && num<50){
            string cur = "XL";
               ans = ans + cur;
               num = num - 40;
        }
           else if(num>=50 && num<=89) {
               string cur = "L";
               ans = ans + cur;
               num = num - 50;
           }
        else if(num>=90 && num<100){
            string cur = "XC";
               ans = ans + cur;
               num = num - 90;
        }
           else if(num>99 && num<400) {
               string cur = "C";
               ans = ans + cur;
               num = num - 100;
           }
        else if(num>=400 && num<500){
            string cur = "CD";
               ans = ans + cur;
               num = num - 400;
        }
           else if(num>=500 && num<900){
               string cur = "D";
               ans = ans + cur;
               num = num - 500;
           }

           else if(num>=900 && num<1000){
               string cur = "CM";
               ans = ans + cur;
               num = num - 900;
           }

           else{
              string curr = "M";
              ans = ans + curr;
              num = num - 1000;
           }
       }

       return ans;
    }
};