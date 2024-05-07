#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> p;
    // pair<int, string> p1;
    // p = make_pair(1, 2); //or
    // p1 = {1, "yug"};
    // cout << p.first << " " << p.second << endl;
    // cout << p1.first << " " << p1.second << endl;
    // Main application-
    int a[] = {1, 2, 3}; // if we want to link the two arrays and avoid making same changes to both the arrays to keep two elements linked at all times
    int b[] = {4, 5, 6}; // We use a pair and make an array of pairs..

    pair<int, int> p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};

    cout << p_array[0].first << endl;
    cout << p_array[0].second << endl;
    cout << p_array[1].first << endl;
    cout << p_array[1].second << endl;

    // OR

    for(int i=0;i<3;i++){
        cout << "Pair number: " << i << endl;
        cout <<"First: " << p_array[i].first << " Second: " << p_array[i].second << endl;
    }
    
    cout << "\n\n\n";

    //Swap karne pe full pair swap hote hai, and no need to maintain the relationship explicitly
    swap(p_array[0], p_array[2]);

    for(int i=0;i<3;i++){
        cout << "Pair number: " << i << endl;
        cout <<"First: " << p_array[i].first << " Second: " << p_array[i].second << endl;
    }

    return 0;
}