#include<bits/stdc++.h>
#include<stdexcept>
using namespace std;
class ArrayStack(){
private:
    vector<int> stack;
public:
    ArrayStack(){

    }
    void push(int num){
        stack.push_back(num);
    }
    int pop(){
        int num=top();
        stack.pop_back();
        return num;
    }
    int size(){
        return stack.size();
    }
    bool isEmpty(){
        return stack.size()==0;
    }
    int top(){
        if(stack.size()==0) throw out_of_range("it is empty");
        stack.back();
    }
};
