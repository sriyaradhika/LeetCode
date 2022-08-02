/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* temp){
        ListNode* pre=NULL;
        ListNode* nex=NULL;
        while(temp!=NULL){
            nex=temp->next;
            temp->next=pre;
            pre=temp;
            temp=nex;
            
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        if(head->next->next==NULL){
            if(head->val!=head->next->val){
                return false;
            }
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dummy=head;
        while(slow!=NULL){
            if(dummy->val!=slow->val)
                return false;
            dummy=dummy->next;
            slow=slow->next;
        }
        return true;
    }

};