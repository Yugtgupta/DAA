#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector<pair<int,int>> pv;
    // pv.push_back({1,4});
    // //OR
    // vector<pair<int,int>> pv1 = {{1,4},{2,5},{3,6}};
    // printVec(pv1);

    // vector<pair<int,int>> pv2;
    // int n;
    // cout << "Enter size\n";
    // cin >> n;
    // for(int i = 0;i < n;i++){
    //     cout << "Enter the "<< i+1 <<" pair\n";
    //     int x, y;
    //     cin >> x >> y;
    //     pv2.push_back({x,y});
    //     cout << "Size of vector: "<< pv2.size() << endl;
    //     printVec(pv2);

    // }

    // //Array of vectors     1 2
    // //                     3 4 5 6
    // //                     7 8 9
    // int N;
    // cout << "Enter size of the array\n";
    // cin >> N;
    // vector<int> v[N]; // Array of vectors
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // cout << v[0][1];
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }

    // Vector of vectors // 1 2 3
                        //  4 5
                        //  6 7 8 9
    // vector<vector<int>> vv;
    // int N;
    // cout << "ENter size of vector" << endl; // bahar ka vector
    // cin >> N;
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cout << "enter the size of " << i << "vector" << endl;
    //     cin >> n;
    //     vector<int> temp; //Pehle ek temp vector ka independantly input le lenge and then woh chota andar waala vector humlog bahar waale vector me push back karenge..
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     vv.push_back(temp); //basiaclly vv is a vector of vectors and humlog vv me ek pura vector push back karenge
    // }

    // for(int i=0; i<N;i++){
    //     printVec(vv[i]);
    // }

    // initialising a vector of vectors with a custom size..
    //Number of columns
	int num_col = 3;

	// Number of rows
	int num_row = 4;

	// Initializing a single row
	vector<int> row(num_col, 0);

	// Initializing the 2-D vector
	// vector<vector<int>> v(num_row, row) ;
    // ORR
    vector<vector<int>> v (num_row, vector<int>(num_col,0));

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}		

    return 0;
}