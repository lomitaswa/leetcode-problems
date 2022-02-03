/*
    1480. Running Sum of 1d Array
    
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
    Return the running sum of nums.
*/
#include<bits/stdc++.h>
using namespace std;

void runningSum(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++)
        nums[i] += nums[i-1];
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int num;

    for(int i=0; i<n; i++){
        cin >> num;
        nums.push_back(num);
    }

    runningSum(nums);

    for(int i=0; i<nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;    
}