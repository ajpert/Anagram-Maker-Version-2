#include <iostream>
#include <sstream>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include <string>
#include<bits/stdc++.h>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    fstream f;
    string word;
    string sorted;
    f.open("english3.txt");
    unordered_map<string,vector<string>> u;
    while(!f.eof()) {
        f >> word;
        sorted = word;
        sort(sorted.begin(), sorted.end());
        u[sorted].push_back(word);
    }
    cout << "enter word: ";
    getline(cin,word);
    cout << "the words you can make out of " << word << " are: " << endl;
    sort(word.begin(),word.end());
    for(int i = 0; i < u[word].size(); i++) {
        cout <<u[word].at(i) << endl;
    }
}