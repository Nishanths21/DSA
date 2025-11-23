class Solution{
public:
    int data;
    Node* next;
    /*NOde(int data1,next1){
        data=data1;
        next=next1;
    }*/
    Node(int data){
        data=data1;
        next=nullptr;
    }
};
typedef Node ListNode;
class Solution{
public:
    int countlen(ListNode* head){
        int count=0;
        Node* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
};