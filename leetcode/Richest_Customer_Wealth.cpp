#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    Solution(){
        return;
    }

    int maximumWealth(vector<vector<int>>& accounts){
        int temp, max;
        max = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            temp = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                temp += accounts[i][j];
            }
            if(temp > max){
                max = temp;
            }
        }
        return max;
    }
};

int main(){
    Solution solution = Solution();
    vector<vector<int>> accounts;
    accounts = {{1,5},{7,3},{3,5}};
    cout << solution.maximumWealth(accounts);
    return 0;
}
