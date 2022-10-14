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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return nullptr;
   int nods=0;
   ListNode *q,*p = head;
   while(p)
   {
    nods++;
    p=p->next;
   }
   p=head;
   q=nullptr;
   nods = (nods/2);
   
   while(nods--)
   {
    q=p;
    p=p->next;
   }
   
   q->next = p->next;

   return head;
    }
};