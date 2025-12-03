class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1,Node* prev1,Node* next1){
        data=data1;
        next=next1;
        prev=prev1;
    }
};
class Solution{
public:
    Node* deletenode(Node* head){
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            Node* nextnode=temp->next;
            while(nextnode!=NULL && nextnode->data=temp->data){
                Node* duplicates=nextnode;
                nextnode=nextnode->next;
                delete duplicates;
            }
            temp=nextnode;
            if(nextnode){
                nextnode->prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};