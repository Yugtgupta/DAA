#include <bits/stdc++.h>
using namespace std;

/*  Graph
            1
          /   \
         2     6
        / \   / \
       3   4 7   9
          /   \
         5-----8
    */

void DFS(int start, int visited[], vector<int> adj[])
{
    visited[start] = 1;
    cout << start << " ";
    for(auto it: adj[start]){
        if(visited[it] == 0){
            DFS(it,visited,adj);
        }
    }
}

int main()
{
    // hardcoded the adjacency list
    int n = 9; // no of nodes
    vector<int> adj[n + 1];
    adj[1] = {2, 6};
    adj[2] = {1, 3, 4};
    adj[3] = {2};
    adj[4] = {2, 5};
    adj[5] = {4, 8};
    adj[6] = {1, 7, 9};
    adj[7] = {6, 8};
    adj[8] = {5};
    adj[9] = {6};

    int visited[n + 1] = {0};
    DFS(6,visited,adj);
    
    return 0;
}