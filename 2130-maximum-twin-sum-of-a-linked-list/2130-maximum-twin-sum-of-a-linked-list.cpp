class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *prev=NULL;
        while(slow){
            ListNode *temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        int mx=0;
        while(prev){
            int val=prev->val+head->val;
            prev=prev->next; head=head->next;
            mx=max(mx,val);
        }
        return mx;
    }
};