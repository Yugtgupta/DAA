#include<bits/stdc++.h>
using namespace std;
//coin change me we make (no of deno) X (amt+1) ka array and if j >= deno[i] we use wahi row ka value ie 1 + table[i,j-deno[i]] ..
// Knapsack is very similar bas isme profits store karte hai hum and differences are-
// The table is of (no of weights + 1)  X (capacity + 1) ie cap+1  and if j >= weights[i] then uske upar ke row ka value we take ie P[i] + table[i-1,j-weights[i]] 
// care has to be taken now coz profits ya weight ko access karte time as row ka diff hai soo i-1 se access karne ka for table ka ith..
void knapsack(vector<int> profit, vector<int> weights,int cap){
    vector<vector<int>> table(weights.size()+1,vector<int>(cap+1));
    for(int i = 0; i<= weights.size();i++){
        for(int j = 0; j <= cap ; j++){
            if(i == 0 || j == 0){
                table[i][j] = 0;
            }
            else if(j < weights[i-1]){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = max(profit[i-1] + table[i-1][j-weights[i-1]], table[i-1][j]);
            }
        }
    }

    for(int i = 0;i<=weights.size();i++){
        for(int j = 0;j<=cap;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int cap = 8;
    vector<int> profit = {1,2,5,6};
    vector<int> weights = {2,3,4,5}; //take sorted by weights

    knapsack(profit,weights,cap); 



    return 0;
}