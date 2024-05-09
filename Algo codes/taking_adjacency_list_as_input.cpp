#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*  Graph
            1
          /   \
         2     6
        / \   / \
       3   4 7   9
          /   \
         5-----8
    */

    // Input n , m ie the no of nodes and m is the no.of edges
    // m inputs of u,v that are the edges u-v

    int n,m;
    cout << "Enter the no of nodes and no of edges" << endl;
    cin >> n >> m;
    vector<int> adj[n+1]; //as the nodes are 1 indexed
    cout << "Enter all the edges" << endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //Display the adjacency list
    for(int i=0;i<n+1;i++){
        cout << i << "-";
        for(int j=0;j<adj[i].size();j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}