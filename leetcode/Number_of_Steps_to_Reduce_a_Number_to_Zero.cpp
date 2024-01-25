#include<iostream>
using namespace std;

class Solution {
public:
    Solution(){
        return;
    }
    int numberOfSteps(int num) {
        int steps = 0;
        while(num != 0){
            if(num == 1){
                num--;
                steps++;
            }else if(num % 2 == 1){
                num--;
                steps++;
            }else if(num%2 == 0){
                steps++;
                num /= 2;
            }

        }
        return steps;
    }
};

int main(){
    Solution solution = Solution();
    cout << solution.numberOfSteps(14);
}
