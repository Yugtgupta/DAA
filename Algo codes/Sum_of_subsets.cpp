#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> X)
{
    for (int i = 0; i < X.size(); i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}

void sum_of_subsets(int curr_sum, int k, int rem, vector<int> w, vector<int> X, int M)
{
    X[k] = 1;
    if (curr_sum + w[k] == M)
    {
        print_array(X);
    }
    if (curr_sum + w[k] + w[k + 1] <= M)
    {
        sum_of_subsets(curr_sum + w[k], k + 1, rem - w[k], w, X, M);
    }
    if (curr_sum + w[k + 1] <= M && curr_sum + rem - w[k] >= M)
    {
        X[k] = 0;
        sum_of_subsets(curr_sum, k + 1, rem - w[k], w, X, M);
    }
}

int main()
{
    cout << "Enter the total sum" << endl;
    int M, n;
    cin >> M;
    cout << "Enter the no of weights" << endl;
    cin >> n;
    vector<int> w(n);
    vector<int> X(n);
    int curr_sum = 0;
    int rem = 0;
    cout << "Enter the weights" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        rem += w[i];
    }
    sum_of_subsets(curr_sum, 0, rem, w, X, M);

    return 0;
}