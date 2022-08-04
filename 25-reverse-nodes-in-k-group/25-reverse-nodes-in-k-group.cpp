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
    int len(ListNode* a){
        int length=0;
        while(a!=NULL){
            length++;
            a=a->next;
        }
        return length;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* a=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        int l=len(a);
        ListNode* prev=dummy;
        ListNode* cur;
        ListNode* nex;
        while(l>=k){
           cur= prev->next;
           nex=cur->next;
            for(int i=1;i<k;i++){
                cur->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=cur->next;
            }
            prev=cur;
            l-=k;
        }
        return dummy->next;
    }
};