#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int maxElement = *max_element(candies.begin(), candies.end());

    for(auto candy: candies)
        ( candy+extraCandies < maxElement ) ? result.push_back(false) : result.push_back(true);

    return result;
}

int main() {
    vector<int> candies;
    int size;
    cout << "Enter number of kids : ";
    cin >> size;

    int candy;
    for(int i=0; i<size; i++) {
        cout << "Enter candy for " << i+1 << "th kid : ";
        cin >> candy;
        candies.push_back(candy);
    }

    int extraCandies;
    cout << "\nEnter number of extra candies : ";
    cin >> extraCandies;

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for(auto res: result)
        cout << res << " ";
    cout << endl;

    return 0;
}