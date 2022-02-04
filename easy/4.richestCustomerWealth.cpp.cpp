/*
    1672. Richest Customer Wealth

    You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
    Return the wealth that the richest customer has.

    A customer's wealth is the amount of money they have in all their bank accounts. 
    The richest customer is the customer that has the maximum wealth.
*/

#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    int customers = accounts.size();
    int bankAccounts = accounts[0].size();
    
    for(int i=0; i<customers; i++) {
        int currentWealth = 0;
        for(int j=0; j<bankAccounts; j++) {
            currentWealth += accounts[i][j];
        }
        if(maxWealth < currentWealth)
            maxWealth = currentWealth;
    }
    return maxWealth;
}

int main() {
    vector<vector<int>> accounts;
    int maxWealth;
    int row, col, num;
    cout << "Enter number of customers : ";
    cin >> row;
    cout << "Enter number of banks the customer has : ";
    cin >> col;


    for(int i=0; i<row; i++) {
        vector<int> temp;
        for(int j=0; j<col; j++) {
            cin >> num;
            temp.push_back(num);
        }
        accounts.push_back(temp);
    }
    
    maxWealth = maximumWealth(accounts);
    cout << "Maximum Wealth is : " << maxWealth << endl;

    return 0;
}