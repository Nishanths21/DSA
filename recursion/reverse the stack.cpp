class Solution{
public:
    void insertatbottom(stack<int>& st,int val){
        if(st.empty()){
            st.pop();
            return;
        }
        int topval=st.top();
        st.pop();
        insertatbottom(st,topval);
        st.push(val);
    }
    void reversethestack(stack<int>& st){
        if(st.empty()) return;
        int topval=st.top();
        st.pop();
        reversethestack(st);
        insertatbottom(st,topval);
    }
}