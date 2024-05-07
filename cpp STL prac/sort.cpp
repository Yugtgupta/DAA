#include<bits/stdc++.h>
using namespace std;
//sort() method takes two arguments ie 
// 1st arg- the address of the element from where the sorting has to be started
// 2nd arg -the NEXT address of the element where the sorting has to be finished
// So in case of arrays arguments are sort(arr,arr+n), where arr is the name of the array and n is the size of the arrray
// arr itself is an address pointing to arr[0] and humko n-1 tak sort karna hai so next address is arr + n
// for vectors we do v.begin() and v.end()

int main(){
    int n;
    cin >> n;
    // int arr[] = {22,1,44,33,2};
    // // sort(arr,arr+n);
    // sort(arr+1,arr + 4); // sorts only those beechke elements ie ans is -22 1 33 44 2 as sorted from index 1 to index 3(included) as arr+4-1 tak..
    // for(int i=0;i<n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // //Sorting for vectors
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin >> v[i];
    // }
    // sort(v.begin()+2,v.end());
    // for(auto it: v){
    //     cout << it << " ";
    // }
    // cout << endl;

    // Sorting for pairs
    pair<int,string> p_arr[n];
    p_arr[0] = {5,"yug"};
    p_arr[1] = {4,"saniyaa"};
    p_arr[2] = {3, "vedica"};
    p_arr[3] = {1, "vinit"};
    p_arr[4] = {2,"ruchit"};

    sort(p_arr+2,p_arr +n);
    for(int i = 0;i<n;i++){
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
    return 0;
}