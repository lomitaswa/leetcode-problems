/*
    1470. Shuffle the Array

    Given the array nums consisting of 2n elements in the form,
    [x1,x2,...,xn,y1,y2,...,yn].

    Return the array in the form,
    [x1,y1,x2,y2,...,xn,yn].

*/

#include<bits/stdc++.h>
using namespace std;

void shuffle(vector<int>& nums, int n) {
    for(int i=2*n-1; i>0; i--) {
        int k = i;
        do {
            if(k%2==1)
                k = k/2 + n;
            else 
                k = k/2;
        }while(k>i);
        swap(nums[i], nums[k]);
    }
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

    int key;
    cout << "Enter starting point of 2nd array : ";
    cin >> key;

    shuffle(nums, key);

    for(int i=0; i<size; i++)
        cout << nums[i] << " ";
    cout << endl;
    
    return 0;
}