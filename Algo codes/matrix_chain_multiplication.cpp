#include <bits/stdc++.h>
using namespace std;

int matrixChainMultiplication(vector<int>& dimensions) {
    int n = dimensions.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int l = 2; l < n; l++) { // l of the chain
        for (int i = 1; i < n - l + 1; i++) { // start of the chain
            int j = i + l - 1; // end of the chain
            dp[i][j] = INT_MAX; // initialize with maximum value because we are going to minimize it
            for (int k = i; k < j; k++) { // partition point
                int cost = dp[i][k] + dp[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[1][n - 1];
}

int main() {
    vector<int> dimensions = {2,3,5,4,7};
    cout << "Minimum number of multiplications: " << matrixChainMultiplication(dimensions) << endl;
    return 0;
}
