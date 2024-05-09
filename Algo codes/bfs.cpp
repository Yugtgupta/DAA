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

void BFS(int start, int visited[], vector<int> adj[])
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while (!q.empty())
    {
        int popped = q.front();
        q.pop();
        cout << popped << " ";
        for (int i = 0; i < adj[popped].size(); i++)
        {
            int neighbour = adj[popped][i];
            if (visited[neighbour] == 0)
            {
                q.push(neighbour);
                visited[neighbour] = 1;
            }
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
    BFS(6, visited, adj);
    return 0;
}