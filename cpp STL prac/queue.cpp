#include<bits/stdc++.h>
using namespace std;
//queue ops -push(),pop(),front(),back(),size(),empty()


int main(){
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout <<"size: " << q.size() <<endl;
    cout <<"front: " << q.front() <<endl;
    cout <<"back: " << q.back() <<endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}