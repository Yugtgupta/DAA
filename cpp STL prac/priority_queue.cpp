#include<bits/stdc++.h>
using namespace std;
// priority queue places the greatest element at the top by default and when popped gives the top element(ie.greatest)--(max-heap implementation)
// methods of priority queue- push(),pop(),top(),size(),empty()
// for making a min-heap use syntax priority_queue <int, vector<int>, greater<int>> pq; 
//                                  priotity _queue <datatype, vector<data type>, greater<datatype>> pq; 
// instead of the greater<int> we can also use a comparator function however we have to create a class and pass the class as the argument
// the second argument is  the type of internal container used to store these elements. std::priority_queue is not a container in itself but a container adopter. It wraps other containers. In this example, we’re using a vector, but you could choose a different container that supports front(), push_back(), and pop_back() methods. 


// class Compare { // comparator function syntax.. However try avoiding this
// public:
//     bool operator()(int below, int above){
//         return below>above; 
//     }
// };



int main(){
    int n=6;
    int arr[] = {10,4,6,20,18,1};
    // priority_queue<int> pq;
    // for(int i=0;i<n;i++){
    //     pq.push(arr[i]);
    // }
    // for(int i=0;i<n;i++){ // prints the array is descending order
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // implementing min-heap ie reversing the functionality of the priority queue
    // priority_queue<int,vector<int>,greater<int>> pq;
    // for(int i=0;i<n;i++){
    //     pq.push(arr[i]);
    // }
    // for(int i=0;i<n;i++){ // prints the array is ascending order
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // //Same using cmp function - implementing min-heap ie reversing the functionality of the priority queue
    // priority_queue<int,vector<int>,Compare> pq;
    // for(int i=0;i<n;i++){
    //     pq.push(arr[i]);
    // }
    // for(int i=0;i<n;i++){ // prints the array is ascending order
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    //min-heap for a priority queue containing data of pair<int,int>
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({ 50, 11 });
    pq.push({ 20, 41 });
    pq.push({ 10, 21 });
    pq.push({ 3, 1 });
    pq.push({ 30, 2 });
    pq.push({ 1, 1 });
    pq.push({ 15, 2 });
    pq.push({ 2, 20 });

    for(int i = 0; i < 8;i++){
        cout << pq.top().first << " ";
        pq.pop();
    }

    return 0;
}