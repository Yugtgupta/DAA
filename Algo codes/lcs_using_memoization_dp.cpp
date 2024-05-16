#include<bits/stdc++.h>
using namespace std;

int LCS(string S,string T,int m, int n, vector<vector<int>> memo){
    int result;
    if(m == 0 || n == 0){ //base case ie if any of the strings are empty then the answer is 0
        return 0; 
    }
    if(memo[m][n] != -1){ //if the value is already calculated then we return the value from the memoization table
        return memo[m][n]; 
    }
    if(S[m-1] == T[n-1]){
        result = 1+ LCS(S,T,m-1,n-1, memo); //if the last characters are same then we add 1 to the answer and move to the previous characters
    }
    else{
        result = max(LCS(S,T,m-1,n, memo),LCS(S,T,m,n-1, memo)); //if the last characters are not same then we move to the previous characters of both the strings and take the maximum of the two
    }
    memo[m][n] = result; //storing the result in the memoization table
    return result;
    
}

int main(){
    string S = "havana"; 
    string T = "savannah";
    int m = S.length(); 
    int n = T.length();
    vector<vector<int>> memo(m+1,vector<int>(n+1,-1)); //initializing the memoization table with -1 
    int ans = LCS(S,T,m,n,memo);
    cout << "The longest common substring is: " << ans <<endl;

}