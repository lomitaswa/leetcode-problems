/*
    88. Merge Sorted Array

    You are given two integer arrays nums1 and nums2, 
    sorted in non-decreasing order, 
    and two integers m and n, 
    representing the number of elements in nums1 and nums2 respectively.

    Merge nums1 and nums2 into a single array sorted in non-decreasing order.

    The final sorted array should not be returned by the function, 
    but instead be stored inside the array nums1. 
    To accommodate this, 
    nums1 has a length of m + n, 
    where the first m elements denote the elements that should be merged, 
    and the last n elements are set to 0 and should be ignored. 
    nums2 has a length of n.

*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        
        while(i>=0 and j>=0) {
            if(nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while(i>=0) {
            nums1[k--] = nums1[i--];
        }
        while(j>=0) {
            nums1[k--] = nums2[j--];
        }
    }

int main() {
    int m,n;
    vector<int> nums1;
    vector<int> nums2;

    cout << "Enter nums1 array size : ";
    cin >> m;
    cout << "Enter nums2 array size : ";
    cin >> n;

    int num;

    cout << "Enter nums1 array elements : ";
    for(int i=0; i<m+n; i++) {
        cin >> num;
        nums1.push_back(num);
    }

    cout << "Enter nums2 array elements : ";
    for(int i=0; i<n; i++) {
        cin >> num;
        nums2.push_back(num);
    }

    merge(nums1, m, nums2, n);

    cout << "After the merge : " << endl;
    for(int num: nums1)
        cout << num << " ";
    cout << endl;

    return 0;
}