/*
    1920. Build Array from Permutation

    Given a zero-based permutation nums (0-indexed), 
    build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

    A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).    
*/

#include<iostream>
#include<vector>
using namespace std;

void buildArray(vector<int>& nums, int size) {
    for(int i=0; i<size; i++)
        nums[i] = nums[i]+(size*(nums[nums[i]]%size));
    for(int i=0; i<size; i++)
        nums[i] /= size;
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

    buildArray(nums, n);
    
    for(int i=0; i<n; i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}