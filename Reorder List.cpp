   /*
   Example 1:

Input:
LinkedList: 1->2->3
Output: 1 3 2
Explanation:
Here n=3, so the correct
order is A0→A2→A1
Example 2:


Input:
Explanation: 1->7->3->4
Output: 1 4 7 3
Explanation:
Here n=4, so the correct
order is A0→A3→A1→A2
   
   */

class Solution{ 
    
public:
Node* find_mid(Node* root){
        Node* slow=root;
        Node* fast=root;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }    
    
    
    Node* reverse(Node* root){
        Node* curr=root;
        Node* next=NULL;
        Node* prev=NULL;
        
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(Node* head) {
        // Your code here
         Node* mid=find_mid(head);
        Node* nextHead=mid->next;
        mid->next=NULL;
        nextHead=reverse(nextHead);
        
        Node* node=head;
        while(node && nextHead){
            Node* nextNode=node->next;
            Node* nextNode1=nextHead->next;
            node->next=nextHead;
            nextHead->next=nextNode;
            node=nextNode;
            nextHead=nextNode1;
        }
    }
};
