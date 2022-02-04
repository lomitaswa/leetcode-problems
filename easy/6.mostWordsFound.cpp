/*
    2114. Maximum Number of Words Found in Sentences

    A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
    You are given an array of strings sentences, where each sentences[i] represents a single sentence.
    Return the maximum number of words that appear in a single sentence.

    This solution uses the STL count method.
*/ 


#include<bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int mostWords = 0;
    for(auto const &s: sentences) {
        int n = count(s.begin(), s.end(), ' ');
        mostWords = max(mostWords, n+1);
    }
    return mostWords;
}

int main() {
    vector<string> sentences;
    int size;
    cout << "Enter number of sentences : ";
    cin >> size;

    string s;

    for(int i=0; i<size; i++) {
        getline(cin, s);
        sentences.push_back(s);
    }
    int mostWords = mostWordsFound(sentences);

    cout << "Most Words Found : " << mostWords << endl;

    return 0;
}