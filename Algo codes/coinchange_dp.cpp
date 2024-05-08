#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> denominations = {1, 5, 6, 10}; // take in sorted order or sort later..
    int A;
    cout << "enter total amt" << endl;
    cin >> A;
    vector<vector<int>> table(denominations.size(), vector<int>(A + 1, 0)); // Basically a vector of vectors toh no of rows normally pass kiya and as column ek vector daal diyaa
    for (int i = 0; i < denominations.size(); i++)
    {
        for (int j = 0; j <= A; j++)
        {
            if (j == 0)
            {
                table[i][0] = 0;
            }
            else if (j < denominations[i])
            {
                table[i][j] = table[i - 1][j];
            }
            else
            {
                if (i == 0)
                {
                    table[i][j] = 1 + table[i][j - denominations[i]];
                }
                else
                {
                    table[i][j] = min(table[i - 1][j], 1 + table[i][j - denominations[i]]);
                }
            }
        }
    }

    for (int i = 0; i < denominations.size(); i++)
    { // visualizing the table
        for (int j = 0; j <= A; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Ans is: " << table[denominations.size() - 1][A];

    return 0;
}