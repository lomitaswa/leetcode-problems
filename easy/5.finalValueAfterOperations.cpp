/*
    2011. Final Value of Variable After Performing Operations

    There is a programming language with only four operations and one variable X:

    > ++X and X++ increments the value of the variable X by 1.
    > --X and X-- decrements the value of the variable X by 1.

    Initially, the value of X is 0.
    Given an array of strings operations containing a list of operations, 
    return the final value of X after performing all the operations.
*/


#include<bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for(auto operation: operations)
        operation[1] == '+' ? x++ : x--;
    return x;
}

int main() {
    vector<string> operations;
    int size;
    cout << "Enter number of operations : ";
    cin >> size;

    string s;

    for(int i=0; i<size; i++) {
        cin >> s;
        operations.push_back(s);
    }
    int value = finalValueAfterOperations(operations);

    cout << "Value of X is " << value << endl;

    return 0;
}