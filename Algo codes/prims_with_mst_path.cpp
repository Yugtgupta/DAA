#include<bits/stdc++.h>
using namespace std;

void Prims(int start,int visited[], vector<pair<int,int>> adj[]){
    
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    int sum = 0;
    vector<pair<int,int>> MST;
    pq.push({0,{start,-1}});
    while(!pq.empty()){ 
        int popped_node = pq.top().second.first;
        int popped_parent = pq.top().second.second;
        int popped_wt = pq.top().first;
        pq.pop();
        // cout << popped_node;
        if(visited[popped_node] == 0){
            sum = sum + popped_wt;
            if(popped_parent != -1){
                MST.push_back({popped_parent,popped_node});
            }
            visited[popped_node] = 1;
            for(int i = 0;i<adj[popped_node].size();i++){
                int neighbour_node = adj[popped_node][i].second;
                int neighbour_wt = adj[popped_node][i].first;
                if(visited[neighbour_node] == 0){
                    pq.push({neighbour_wt,{neighbour_node,popped_node}});
                }
            }
        }
    }

    cout << "The cost of MST is: " << sum << endl;
    cout << "And the edges of the MST are: ";
    for(auto it:MST){
        cout << it.first << "-" << it.second << "|";
    }
    cout << endl;
}

int main(){
    int n,m;
    cout << "Enter the number of vertices and the number of edges " << endl;
    cin >> n >> m;
    cout << "Enter the edges u,v with their respective weights" << endl;
    vector<pair<int,int>> adj[n+1];
    for(int i = 0;i < m;i++){
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({wt,v}); //saved as wt,node
        adj[v].push_back({wt,u});
    }
    int visited[n+1] = {0};
    Prims(1,visited,adj);
    
    return 0;
}