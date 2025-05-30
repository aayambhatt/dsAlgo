#include<iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high){

            //sort 0
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            //sort 1
            else if (nums[mid]==1){
                mid++;
            }
            //sort 2
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        
    }
};

int main()
{
 return 0;
}