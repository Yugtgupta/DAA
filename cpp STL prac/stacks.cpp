#include<bits/stdc++.h>
using namespace std;
//stacks ops -push(),pop(),top(),size(),empty()


int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout <<"size: " << st.size() <<endl;
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}