#include<bits/stdc++.h>
using namespace std;
//windows of size of P is used in T where window slides by one each time there is not a match found but j starts from zero always
void stringMatching(string T, string P){ 
    int n = T.length();
    int m = P.length();
    for(int i = 0;i<=n-m;i++){ //i<=n-m because if i is greater than n-m then there will be no window of size m left
        int j; 
        for(j= 0;j<m;j++){
            if(T[i+j] == P[j]){ //we use i+j because we want to just shift the pointer to the next element of T without shifting the window
                continue;
            }
            else{
                break; //if there is a mismatch then we break the loop and slide the window by one
            }
        }
        if(j == m){
            cout << "The pattern was found at index: " << i << endl; //if j becomes equal to m then we have found the pattern
        }
    }
}
   


int main(){
    string T = "aabaacaadaabaaba";
    string P = "aaba";
    stringMatching(T,P);
    return 0;
}