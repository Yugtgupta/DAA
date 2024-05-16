#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    if(a.second.second != b.second.second){
        return a.second.second < b.second.second;
    }
    else{
        return a.first < b.first;
    }
}

void activitySelection(vector<pair<int,pair<int,int>>> activities){
    vector<int> ans;
    for(int i=0;i<activities.size();i++){
        if(i==0){
            ans.push_back(activities[i].first);
        }
        else{
            int prev_activity_selected= ans.back();
            int prev_finish_time;
            for(auto it:activities){
                if(it.first == prev_activity_selected) {
                    prev_finish_time = it.second.second;
                    break;
                }
            }
            int current_activity = activities[i].first;
            int current_start_time = activities[i].second.first;
            if(current_start_time >= prev_finish_time){
                ans.push_back(current_activity);
            }
        }
    }

    cout << "Total activities that can be performed: " << ans.size() << endl;
    cout << "Activities must be performed it this order" << endl;
    for(auto it: ans){
        cout << it << "->";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the no of activities" <<endl;
    cin >> n;
    vector<pair<int,pair<int,int>>> activities(n); //{activity number,{start time, finish time}}
    cout << "Enter the activity start time and finish time" << endl;
    for(int i = 0;i<activities.size();i++){
        activities[i].first = i+1;
        cin >> activities[i].second.first >> activities[i].second.second;
    }
    sort(activities.begin(),activities.end(),cmp);

    // for(auto it : activities){ //to view the sorted vector
    //     cout << it.first << "," << it.second.first << "," << it.second.second << " | ";
    // }

    activitySelection(activities);


    return 0;
}