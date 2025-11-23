#inlcude<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Noed(int val): data(val),next(nullptr) {}
};
typedef Node ListNode;
class Solution{
public:
    bool searchelement(ListNode* head,int key){
        ListNode* temp=head;
        while(tmep!=nullptr){
            if(temp->data==key){
                return true;
                temp=temp->next;
            }
        }
        return false;
    }
};