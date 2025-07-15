#include <iostream>
#include <string>
using namespace std;

int countPossibilities(string word) {
    int n = word.size();
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(word[i] == word[i-1]) {
            count++;
        }
    }

    return count;
}

int main() {
    string word;
    cout << "Enter word: ";
    cin >> word;

    cout <<countPossibilities(word) << endl;
    return 0;
}
