/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* s=head;
        ListNode* f=head;
        s=s->next;
        f=f->next->next;
        while(f!=NULL && f->next!=NULL){
             if(f==s){
                break;
            }
            s=s->next;
            f=f->next->next;
        }
        if(f!=s){
            return NULL;
        }
        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;
    }
};