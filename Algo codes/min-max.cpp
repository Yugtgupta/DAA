#include<bits/stdc++.h>
using namespace std;

pair<int,int> minmax(vector<int> v, int low,int high){
    if(low == high){
        return {v[low],v[high]};
    }
    int mid = (low+high)/2;
    pair<int,int> result;
    pair<int,int> left = minmax(v,low,mid);
    pair<int,int> right = minmax(v,mid+1,high);
    result.first = min(left.first,right.first);
    result.second = max(left.second,right.second);
    return result;
}

int main(){
    vector<int> v = {5,3,9,1,2,4,6};
    pair<int,int> ans = minmax(v,0,6);
    cout << ans.first << endl;
    cout << ans.second << endl;


    return 0;
}