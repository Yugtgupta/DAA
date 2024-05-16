#include<bits/stdc++.h>
using namespace std;

void dijsktra(int start,vector<int> distance, vector<pair<int, int>> adj[]){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //(dist,node)
    distance[start] = 0;
    pq.push({distance[start],start});
    while(!pq.empty()){
        int popped_node = pq.top().second;
        int popped_dist = distance[popped_node];
        pq.pop();
        for(int i = 0;i < adj[popped_node].size();i++){
            int neighbour_dist = adj[popped_node][i].first;
            int neighbour_node = adj[popped_node][i].second;
            if(popped_dist + neighbour_dist < distance[neighbour_node]){
                distance[neighbour_node] = popped_dist + neighbour_dist;
                pq.push({distance[neighbour_node],neighbour_node});
            }
        }
    }

    for(int i = 0;i < distance.size();i++){
        cout << start << "-" << i << " = " << distance[i] << endl;  
    }

}

int main(){
    int n = 6;
    //hardcoded adjacency  list
    vector<pair<int, int>> adj[n];
    adj[0] = {{4,1}, {4,2}}; //saved as dist,node
    adj[1] = {{4,0}, {2,2}};
    adj[2] = {{4,0}, {2,1}, {3,3}, {6,5}, {1,4}};
    adj[3] = {{3,2}, {2,5}};
    adj[4] = {{1,2}, {3,5}};
    adj[5] = {{2,3}, {6,2}, {3,4}};
    int start = 0;
    vector<int> distance(n,INT_MAX); //vector hi declare karo rather than array
    dijsktra(start,distance,adj); // start,number of nodes and adj list

    return 0;
}