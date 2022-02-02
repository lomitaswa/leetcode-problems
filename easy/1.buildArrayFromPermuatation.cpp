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