/*
    1. Two Sum

    Given an array of integers nums and an integer target, 
    return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, 
    and you may not use the same element twice.

    You can return the answer in any order.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if((target - nums[i]) == nums[j])
                return {i, j};
        }
    }
    return {};
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

    int target;
    cout << "Enter target : ";
    cin >> target;

    vector<int> result = twoSum(nums, target);
    
    cout << "[";
    for(int element: result)
        cout << element << " ";
    cout << "]" << endl;

    return 0;
}