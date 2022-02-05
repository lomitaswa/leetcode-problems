/*
    1512. Number of Good Pairs

    Given an array of integers nums, return the number of good pairs.
    A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/

#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int goodPairs = 0;
    int length = nums.size();

    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if(nums[i] == nums[j]) 
                goodPairs++;
        }
    }
    return goodPairs;
}

int main() {
    vector<int> nums;
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int num;
    for(int i=0; i<size; i++) {
        cin >> num;
        nums.push_back(num);
    }

    int goodPairs = numIdenticalPairs(nums);

    cout << "Number of good pairs : " << goodPairs << endl;

    return 0;
}