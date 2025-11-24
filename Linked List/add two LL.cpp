#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    ListNode* addtwonum(ListNOde* l1, ListNode* l2){
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=carry;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            int digit=sum%10;
            ListNode* newNode=new ListNode(digit);
            temp->next=newNode;
            temp=temp->next;
        }
        listNode* result=dummy->next;
        delete dummy;
        return result;
    }
};