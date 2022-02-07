/*
    53. Maximum Subarray

    Given an integer array nums, 
    find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

    A subarray is a contiguous part of an array.

    This solution is applied using Kadane's algorithm.
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<nums.size(); i++) {
        currSum += nums[i];

        if( maxSum < currSum )
            maxSum = currSum;
        if( currSum < 0 );
            currSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> nums;
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int num;
    cout << "Enter array elements : " << endl;
    for(int i=0; i<size; i++) {
        cin >> num;
        nums.push_back(num);
    }

    int maxSum = maxSubArray(nums);
    cout << "Max subarray sum : " << maxSum << endl;

    return 0;
}