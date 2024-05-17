#include<bits/stdc++.h>
using namespace std;

struct job{
    int id;
    int time1;
    int time2;
};

bool cmp(job j1,job j2){
    return min(j1.time1,j1.time2) < min(j2.time1,j2.time2);
}

int main(){

    vector<job> schedules = {{1,10,6},{2,6,12},{3,8,9},{4,8,10},{5,12,5}};
    sort(schedules.begin(),schedules.end(),cmp);
    vector<int> left;
    vector<int> right;
    for(int i=0;i<schedules.size();i++){
        if(schedules[i].time1 < schedules[i].time2){
            left.push_back(schedules[i].id);
        }
        else{
            right.push_back(schedules[i].id);
        }
    }
    
    reverse(right.begin(),right.end());
    for(auto it:right){
        left.push_back(it);
    }

    for(auto it:left){
        cout<< it << " ";
    }
    cout << endl;

    return 0;
}