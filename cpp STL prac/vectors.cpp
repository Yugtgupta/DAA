#include <bits/stdc++.h>
using namespace std;

void printVec(vector<string> v){
    for(int i =0;i<v.size();i++){
        cout << v[i] << " ";
        cout << v.size() << "--" << " ";
    }
    cout << endl;
}

void printVec(vector<int> v){
    for(int i =0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}



int main(){
    vector<int> v; // Dyanmic sized array and uses push_back() and pop_back() funcs.. Initially size = 0.
    vector<string> v1(3,"yug"); //Vector of initial size 3 with values yug.
    printVec(v1);
    v1.push_back("Okay");
    printVec(v1);
    v1.pop_back();  
    printVec(v1);

    vector<int> v_sada;
    int n;
    cout << "Enter size\n";
    cin >> n;
    for(int i = 0;i < n;i++){
        cout << "Enter the "<< i+1 <<" element\n";
        int x;
        cin >> x;
        v_sada.push_back(x);
        cout << "Size of vector: "<< v_sada.size() << endl;
        printVec(v_sada); 

    }

    return 0;
}