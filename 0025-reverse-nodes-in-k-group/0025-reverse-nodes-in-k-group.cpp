class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int count=0;

        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL){
            head->next = reverseKGroup(next,k);
        }
        return prev;
    }
};