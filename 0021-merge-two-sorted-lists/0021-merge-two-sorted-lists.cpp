class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        ListNode* head = nullptr;
        ListNode** lastPtrRef = &head;

        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                *lastPtrRef = list1;
                list1 = list1->next;
            } else {
                *lastPtrRef = list2;
                list2 = list2->next;
            }
            lastPtrRef = &((*lastPtrRef)->next);
        }

        if (list1 != nullptr) {
            *lastPtrRef = list1;
        } else {
            *lastPtrRef = list2;
        }

        return head;
    }
};