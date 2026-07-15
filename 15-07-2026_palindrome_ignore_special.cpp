#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = 0;
    int j = s.length() - 1;

    while (i < j) {

        while (i < j && !isalnum(s[i]))
            i++;

        while (i < j && !isalnum(s[j]))
            j--;

        if (tolower(s[i]) != tolower(s[j])) {
            cout << "Not Palindrome";
            return 0;
        }

        i++;
        j--;
    }

    cout << "Palindrome";
}