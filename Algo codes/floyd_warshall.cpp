#include<bits/stdc++.h>
using namespace std;

void FloydWarshall(int mat[4][4],int path[4][4]){

    for(int k =0;k < 4;k++){
        for(int i = 0;i < 4;i++){
            for(int j=0;j<4;j++){
                if(mat[i][k] + mat[k][j] < mat[i][j]){
                    mat[i][j] = mat[i][k] + mat[k][j];
                    path[i][j] = k+1;
                }
            }
        }
    }


    //printing the cost matrix
    cout << "The cost matrix is: " << endl;
    for(int i =0 ;i < 4;i++){
        for(int j=0;j < 4;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout <<endl;
 
    //printing the path matrix
    cout << "The path matrix is: " << endl;
    for(int i =0 ;i < 4;i++){
        for(int j=0;j < 4;j++){
            cout << path[i][j] << " ";
        }
        cout << endl;
    }


}

int main(){
    int infinity = 1e9; //way to declare 10^9
    int mat[4][4] = {{0,3,infinity,7},
                     {8,0,2,infinity},
                     {5,infinity,0,1},
                     {2,infinity,infinity,0}};

    int path[4][4] = {{0,1,0,1},
                     {2,0,2,0},
                     {3,0,0,3},
                     {4,0,0,0}};
    
    FloydWarshall(mat,path);

    return 0;
}