#include <bits/stdc++.h>
using namespace std;

void print_arr(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int cmp(pair<int, float> a, pair<int, float> b)
{
    return a.second > b.second;
}

int main()
{
    int n; // size of array
    int M; // size of ks
    cout << "no of blocks" << endl;
    cin >> n;
    cout << "size of ks" << endl;
    cin >> M;
    pair<int, int> pw[n]; // pair of profit, weight of a block
    for (int i = 0; i < n; i++)
    {
        cin >> pw[i].first >> pw[i].second;
    }
    pair<int, float> p_by_w[n]; //pair of index, p/w of block
    for (int i = 0; i < n; i++)
    {
        p_by_w[i].first = i;
        p_by_w[i].second = (float)pw[i].first / pw[i].second;
    }
    sort(p_by_w, p_by_w + n, cmp); // sorted acc p/w
    float profit = 0;
    int cap = M;
    float X[n] = {0.0};
    for (int i = 0; i < n; i++)
    {
        if (pw[p_by_w[i].first].second < cap)
        {
            X[p_by_w[i].first] = 1;
            cap = cap - pw[p_by_w[i].first].second;
            profit = profit + pw[p_by_w[i].first].first;
        }
        else
        {
            X[p_by_w[i].first] =  (float)cap/(pw[p_by_w[i].first].second);
            profit = profit + pw[p_by_w[i].first].first * X[p_by_w[i].first];
            cap = 0;
        }
    }

    cout << "profit is: " << profit << endl;
    cout << "The final ans is: ";
    print_arr(X,n);

    return 0;
}