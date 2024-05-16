#include<bits/stdc++.h>
using namespace std;

//finds the ultimate parent of a given vertex
int findUPar(int node,vector<int> &parent){  //important to pass parent by reference
    if(parent[node] == node){
        return node;
    }
    return parent[node] = findUPar(parent[node],parent); //path compression is happening here because we are storing function ka ans in the parent[node] each time
}

void unionByRank(int u, int v, vector<int> &parent,vector<int> &rank){ //important to pass parent and rank by reference
    int ulp_u = findUPar(u, parent);
    int ulp_v = findUPar(v, parent);
    if(ulp_u == ulp_v){
        return; //cycle is being formed so we will not attach them
    }
    if(rank[ulp_u] < rank[ulp_v]){
        parent[ulp_u] = ulp_v; //no need to update the rank of ulp_v because it will remain same as smaller rank is being attached to the larger rank
    }
    else if(rank[ulp_u] > rank[ulp_v]){
        parent[ulp_v] = ulp_u; //no need to update the rank of ulp_u because it will remain same as smaller rank is being attached to the larger rank
    }
    else { 
        parent[ulp_v] = ulp_u;
        rank[ulp_u]++; //if both the ranks are same then we can attach any of them to the other but the rank of the parent will increase by 1
    }

}

int main(){
    int n, m;
    cout << "Enter the number of nodes and the number of edges" << endl;
    cin >> n >> m;
    cout << "Enter the edges u,v with their respective weights" << endl;
    
    // Note that we can also use the adjacency list to store the graph and then make the edges vector from the adjacency list
    // There will be duplicate edges in the edges vector as bidirectional graph but no problem as our algo will take care of it
    // Creating an edges vector - (wt,u,v) 
    vector<pair<int,pair<int,int>>> edges;
    for(int i = 0;i<m;i++){
        int u,v,wt;
        cin >> u >> v >> wt;
        edges.push_back({wt,{u,v}});
    }

    sort(edges.begin(),edges.end()); //Sorted all the edges according to the wt

    vector<int> rank(n+1,0); // if nodes are 1 indexed
    vector<int> parent(n+1);
    for(int i = 0;i<parent.size();i++){
        parent[i] = i; //initially all the nodes are the parent of themselves
    }
    int sum = 0;
    vector<pair<int,int>> MST;
    for(auto it:edges){
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;

        if(findUPar(u,parent) != findUPar(v,parent)){ //if the parent of u and v are not same then they are not in the same component so we can add them to the MST
            sum = sum + wt;
            MST.push_back({u,v});
            unionByRank(u,v,parent,rank);
        }
    }
    
    cout <<"The minimum cost of MST is: "<< sum << endl;
    cout << "The edges of the MST are: " ;
    for(auto it:MST){
        cout << it.first << "-" << it.second << " | ";
    }
    



    return 0;
}