/*
    217. Contains Duplicate

    Given an integer array nums, 
    return true if any value appears at least twice in the array, 
    and return false if every element is distinct.
*/

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size()-1; i++)
        if(nums[i] == nums[i+1])
            return true;
    
    return false;
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

    cout << "Do the array contains duplicate elements : " << containsDuplicate(nums) << endl;

    return 0;
}