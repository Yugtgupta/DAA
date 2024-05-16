#include<bits/stdc++.h>
using namespace std;

void bellmanford(int start,vector<pair<int,pair<int,int>>> edges,int n){
    int infi = 1e9;
    vector<int> dist(n+1,infi); //as nodes are 1 indexed
    dist[start] = 0;
    for(int i=0;i<n-1;i++){ //have to relax n-1 no of times
        for(auto it:edges){
            int u = it.first;
            int v = it.second.first;
            int wt = it.second.second;
            if(dist[u] + wt < dist[v]){
                dist[v] = dist[u] + wt;
            } 
        }
    }

    for(int i=1;i<=n;i++){
        cout << dist[i] << " ";
    }
    cout <<endl;

    for(auto it:edges){
        int u = it.first;
        int v = it.second.first;
        int wt = it.second.second;
        if(dist[u] + wt < dist[v]){
            cout << "Graph contains a negative weight cycle" << endl;
            break;
        } 
    }
}

int main(){
    int n,m;
    cout << "Enter the no of nodes and edges" <<endl;
    cin >> n >> m;
    vector<pair<int,pair<int,int>>> edges(m);
    cout << "Enter the edges as u,v,wt" <<endl;
    for(int i =0;i<m;i++){
        cin >> edges[i].first >> edges[i].second.first >> edges[i].second.second; //saved as u,v,wt
    }
    bellmanford(1,edges,n);
    
    return 0;
}