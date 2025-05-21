#include<iostream>
using namespace std;

int maximumSum(vector<int> nums, int k){
    int n = nums.size();
    int sum =0;

    // sum of first k elements 
    for(int i = 0 ; i<k ; i++){
        sum = sum + nums[i];
    }

    int maxSum = sum;

    // slide the window
    for(int i = k ; i<n ; i++){
        sum = sum - nums[i-k] + nums[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;

}

int main()
{
 return 0;
}