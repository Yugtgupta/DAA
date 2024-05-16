#include<bits/stdc++.h>
using namespace std;

void LCS(string S,string T,int m, int n){
    vector<vector<int>> table(m+1,vector<int>(n+1)); //table of m+1, n+1 bana rahe hai like 0,1 knapsack but unlike coin change
    for(int i = 0;i<= m;i++){
        for(int j=0;j <=n;j++){
            if(i == 0 || j == 0){
                table[i][j] = 0;
            }
            else{
                if(S[i-1] == T[j-1]){
                    table[i][j] = 1 + table[i-1][j-1];
                }
                else{
                    table[i][j] = max(table[i-1][j], table[i][j-1]);
                }
            }
        }
    }

    for(int i = 0;i<=m;i++){
        for(auto it:table[i]){
            cout << it << " ";
        }
        cout << endl;
    }

    cout << "The longest common substring is: " << table[m][n] <<endl;

    
}

int main(){
    string S = "havana";
    string T = "savannah";
    int m = S.length(); 
    int n = T.length(); 
    LCS(S,T,m,n);

}