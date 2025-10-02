#include <bits/stdc++.h>
using namespace std;

bool isValidWord(string word) {
    for (char c : word) {
        if (!isalpha(c) && c != '-') return false;
    }
    return true;
}

int main() {
    string word = "hello-world";
    cout << (isValidWord(word) ? "Valid" : "Invalid") << endl;
    return 0;
}
