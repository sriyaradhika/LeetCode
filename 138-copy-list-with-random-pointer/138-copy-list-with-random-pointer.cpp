/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node* it=head;
        while(it!=NULL){
            Node* nextit=it->next;
            Node* newNode=new Node(it->val);
            newNode->next=it->next;
            it->next=newNode;
            it=nextit;
        }
        Node* newit=head->next;
        Node* newhead=head->next;
        it=head;
        while(it!=NULL){
            if(it->random!=NULL){
                newit->random=it->random->next;
            }
            it=newit->next;
            if(it!=NULL)
                newit=it->next;
        }
        it=head;
        newit=head->next;
        while(it!=NULL){
            it->next=newit->next;
            it=it->next;
            if(it!=NULL){
                newit->next=it->next;
                newit=it->next;
            }
        }
        
        return newhead;
    }
};