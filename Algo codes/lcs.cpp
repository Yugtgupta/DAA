#include<bits/stdc++.h>
using namespace std;

int LCS(string S,string T,int m, int n){
    if(m == 0 || n == 0){ //base case ie if any of the strings are empty then the answer is 0
        return 0; 
    }
    if(S[m-1] == T[n-1]){
        return 1+ LCS(S,T,m-1,n-1); //if the last characters are same then we add 1 to the answer and move to the previous characters
    }
    else{
        return max(LCS(S,T,m-1,n),LCS(S,T,m,n-1)); //if the last characters are not same then we move to the previous characters of both the strings and take the maximum of the two
    }
    
    
}

int main(){
    string S = "havana";
    string T = "savannah";
    int m = S.length(); 
    int n = T.length(); 
    int ans = LCS(S,T,m,n);
    cout << "The longest common substring is: " << ans <<endl;

}