#include<bits/stdc++.h>
using namespace std;
//sets is basically maps ka sirf keys ka set
//only unique elements
//ie duplicate nahi hota and stored in a sorted manner
//has same funcs as maps

void print_set(set<string> s){
    for(auto it:s){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("xyz");
    s.insert("bro");
    print_set(s);
    auto it = s.find("bro"); //s.find() is the only way to check if it exists or not and returns an iterator
    if(it == s.end()){
        cout << "No such value present";
    }
    else{
        cout << *it << endl;
    }

    s.erase(it); // or s.erase("bro")
    print_set(s);
    

    return 0;
}