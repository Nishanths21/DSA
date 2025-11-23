class Node{
public:
    int data1;
    Node* next;
    Node* prev;
    Node(int data): data1(data),next(NULL),prev(NULL) {}
};
Node* reverseDLL(Node* head){
    Node* prev=NULL;
    Node* current=head;
    if(head==NUll || head->next==NULL){
        return head;
    }
    while(current!=NULL){
        prev=current->prev;
        current->prev=current->next;
        current->next=prev;
        current=current->prev;
    }
    return prev->prev;
};