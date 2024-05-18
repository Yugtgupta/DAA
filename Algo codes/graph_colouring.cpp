#include <bits/stdc++.h>
using namespace std;

int isSafe(int i,vector<int>&colour,int n,vector<int>adj[]){
    for(auto it:adj[n]){
        if(colour[it]==i)return 0;
    }
    return 1;
}
int graphcolour(int n,vector<int>adj[],int m,int N,vector<int>&colour){
    if(n==N)return 1;
    for(int i=1;i<=m;i++){
        if(isSafe(i,colour,n,adj)){
            colour[n]=i;
            if(graphcolour(n+1,adj,m,N,colour))return 1;
            colour[n]=0;
        }
    }
    return 0;
}
int main(){
   int V,E;
   cin>>V>>E;
   vector<int>adj[V];
   while(E--){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   vector<int>colour(V,0);
   if(graphcolour(0,adj,2,V,colour))cout<<"Yes\n";
   else cout<<"No\n";
}