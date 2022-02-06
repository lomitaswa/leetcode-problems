#include<bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int countJewelsInStones = 0;

    for(auto jewel: jewels) {
        for(auto stone: stones) {
            if(jewel == stone) 
                countJewelsInStones++;
        }
    }
    return countJewelsInStones;
}

int main() {
    string jewels;
    string stones;

    cout << "Enter Jewels : ";
    getline(cin, jewels);
    cout << "Enter Stones : ";
    getline(cin, stones);

    int countJewelsInStones = numJewelsInStones(jewels, stones);

    cout << "Jewels in Stones count : " << countJewelsInStones << endl;

    return 0;
}