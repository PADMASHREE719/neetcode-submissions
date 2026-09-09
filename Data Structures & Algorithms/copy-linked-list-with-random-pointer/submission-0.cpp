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
        unordered_map<Node*,Node*> m;
        if(head==NULL){
            return NULL;
        }

        Node* newHead = new Node(head->val);
        m[head]=newHead;

        Node* oldptr=head->next;
        Node* newptr=newHead;

        while(oldptr!=NULL){
            Node* copyNode = new Node(oldptr->val);
            m[oldptr]=copyNode;
            newptr->next=copyNode;

            newptr=newptr->next;
            oldptr=oldptr->next;
        }

        oldptr=head,newptr=newHead;

        while(oldptr!=NULL){
            newptr->random = m[oldptr->random];
            newptr=newptr->next;
            oldptr=oldptr->next;
        }
        return newHead;

        
    }
};
