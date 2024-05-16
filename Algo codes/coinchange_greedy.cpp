#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4; //no of denominations
    vector<int> deno= {1,2,25,40};
    int amt = 50;

    sort(deno.begin(),deno.end(),greater<int> ());
    vector<int> ans;
    while(amt > 0){
        for(int i = 0;i<n;i++){
            if(deno[i] <= amt){
                amt = amt - deno[i];
                ans.push_back(deno[i]);
                break;
            }
        }
    }
    
    for(auto it:ans){
        cout << it << " ";
    }
    cout <<endl;


    return 0;
}