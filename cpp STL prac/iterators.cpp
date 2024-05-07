#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> :: iterator it;
    for(it = v.begin(); it!=v.end();it++){  //always use it++ and not it =it+1 as dono different hota hai..
        cout << (*it) << " ";    
    }
    cout << endl;

    for(auto it : v ){
        cout << it << " ";
    }
    cout <<endl;

    vector<pair<int,int>> vp = {{1,10}, {2,20}, {3,30}};  // besst wayy only remember the auto it method as usme no need to specify the dtype
    for(auto it:vp){
        cout << it.first << " " << it.second << " ";
    }
    cout << endl;

    return 0;
}