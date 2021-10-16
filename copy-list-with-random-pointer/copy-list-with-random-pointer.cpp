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
        
        if(head == NULL)
            return head;
   
        
        Node * temp = head;
        Node * front = head;
        while(temp)
        {
            front = temp->next;
            Node * newNode = new Node(temp->val);
            temp ->next = newNode;
            newNode->next = front;
            temp = front;
        }
        
        temp = head;
        while(temp)
        {
           if(temp->random)
               temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        
        Node * dummy = new Node(0);
        Node * tra = dummy;
        front = head;
        temp = head;
        while(temp)
        {
            front = front->next->next;
            tra->next = temp->next;
            tra = tra->next;
            temp->next = front;
            temp = front;
        }
        return dummy->next;
        
    }
};