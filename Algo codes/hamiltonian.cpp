#include <bits/stdc++.h>
using namespace std;

const int V=5;

int isSafe(int k,int mat[V][V],vector<int>&path,int pos){
    if(mat[path[pos-1]][k]==0)return 0;
    for(int i=0;i<pos;i++){
        if(path[i]==k)return 0;
    }
    return 1;
}
void hamilton(int pos,int mat[V][V],vector<int>&path){
    if(pos==V){
        if(mat[path[pos-1]][path[0]]==1){
            for(int i=0;i<V;i++)cout<<path[i]<<" ";
            cout<<"0";
            cout<<"\n";
        }
        return; 
    }
    for(int k=0;k<V;k++){ 
        if(isSafe(k,mat,path,pos)){ //if it is safe to put number k at pos in path
            path[pos]=k;
            hamilton(pos+1,mat,path);
            path[pos]=-1; //backtrack to previous position and try another number k
        }
    }
}
int main(){
    int mat[V][V]={ {0, 1, 1, 0, 1},
                    {1, 0, 1, 1, 1},
                    {1, 1, 0, 1, 0},
                    {0, 1, 1, 0, 1},
                    {1, 1, 0, 1, 0}};

   vector<int>path(V,-1);
   path[0]=0;
   hamilton(1,mat,path);
}