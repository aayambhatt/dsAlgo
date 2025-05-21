#include<iostream>
using namespace std;

int maximumSum(vector<int> nums, int k){
    int maxSum = INT_MIN;
    int n = nums.size();
    
    for(int i = 0; i <= n - k; i++){
        int sum = 0;
        for(int j = i; j < i + k; j++){
            sum = sum + nums[j];
        }
        maxSum = max(maxSum, sum);
    }
    
    return maxSum;
}


int main()
{
 return 0;
}