/*
    1929. Concatenation of Array

    Given an integer array nums of length n, 
    you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
    Specifically, ans is the concatenation of two nums arrays.
    Return the array ans.

*/

#include<bits/stdc++.h>
using namespace std;

void getConcatenation(vector<int>& nums, int n) {
    for(int i=0; i<n; i++) {
        nums.push_back(nums[i]);
    }
}

int main() {
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> nums;
    int num;

    for(int i=0; i<n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    getConcatenation(nums, n);

    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}