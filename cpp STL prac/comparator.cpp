#include<bits/stdc++.h>
using namespace std;
//compararator fucntion(of type bool) is basically passed as the third argument to sort(, , cmp) function to define how to sort the values
//how to write a cmp function-?
// joh chahiye waise return kardo.. 
//Example if want to sort in ascending order matlab first wala element should be less than second soo --- write return a<b


//Solving as pair ke first element ko ascending order me.. and if same hai 1st element do pairs ka then sort in descending order of second element..
bool cmp(pair<int,int> a, pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    else{
        return a.second>b.second;
    }
}

//cmp for an array to sort in descending order
// bool cmp(int a, int b){
//     return a>b;
// }    


int main(){
    int n;
    cin >> n;
    
    //Sorting for vectors
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it: v){
        cout << it.first << "-" << it.second  << "|" ;
    }
    cout << endl;

   
    return 0;
}

// Input
// 6
// 4 3
// 5 5
// 5 3
// 25 6
// 8 9 
// 8 5 
