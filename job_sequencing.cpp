#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> jobnum = {1, 2, 3, 4, 5, 6, 7};
    vector<int> profit = {3, 5, 20, 18, 2, 7, 30};
    vector<int> deadline = {1, 3, 4, 3, 2, 1, 2};

    for (int i = 0; i < profit.size(); i++)
    { // Sorting all the three arrays
        for (int j = i + 1; j < profit.size(); j++)
        {
            if (profit[i] < profit[j])
            {
                int temp_prof = profit[j];
                profit[j] = profit[i];
                profit[i] = temp_prof;

                int temp_job = jobnum[j];
                jobnum[j] = jobnum[i];
                jobnum[i] = temp_job;

                int temp_deadline = deadline[j];
                deadline[j] = deadline[i];
                deadline[i] = temp_deadline;
            }
        }
    }

    //Main logic
    int dmax = 4;
    int total_profit = 0;
    vector<int> ans(dmax, -1); //ans vector
    for (int i = 0; i < profit.size(); i++)
    {
        int j = deadline[i] - 1;
        while (j >= 0)
        {
            if (ans[j] == -1)
            {
                ans[j] = jobnum[i];
                total_profit += profit[i];
                break;
            }
            j--;
        }
    }
    cout << total_profit << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}