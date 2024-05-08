#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool can_place(int k, int i, vector<int> X)
{
    for (int j = 1; j <= k - 1; j++)
    {
        if ((X[j] == i) || (abs(X[j] - i) == abs(j - k)))
        {
            return false;
        }
    }
    return true;
}

void NQueens(int k, int n, vector<int> X)
{
    for (int i = 1; i <= n; i++)
    {
        if (can_place(k, i, X))
        {
            X[k] = i;
            if (k == n)
            {
                print_array(X);
            }
            else
            {
                NQueens(k + 1, n, X);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter no.of queens" << endl;
    cin >> n;
    vector<int> X(n + 1, 0); // X of size n+1 and all initialised to zero.
    NQueens(1, n, X);
    return 0;
}