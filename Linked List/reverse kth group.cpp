class Solution{
public:
    Node*reversell(Nde* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* nexttemp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexttemp;
        }
        return prev;
    }
    Node* getkthnode(Node* temp, int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    Node* kthreversed(Node* head, int k){
        Node* temp=head;
        Node* prevlast=NULL;
        while(temp!=NULL){
            Node* kthnode=getkthnode(temp,k);
            if(kthnode==NULL){
                if(pervlast){
                    preeevlast->next=temp;
                }
                break;
            }
            Node* nextnode=kthnode->next;
            kthnode->next=NULL;
            reversell(temp);
            if(temp==head){
                head=kthnode;
            }
            else{
                prevlast->next=kthnode;
            }
            prevlast=temp;
            temp=nextnode;
        }
        return head;
    }
};