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
        // Skip special characters from the left
        if (!isalnum(s[i])) {
            i++;
        }
        // Skip special characters from the right
        else if (!isalnum(s[j])) {
            j--;
        }
        // Swap valid characters
        else {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    cout << s << endl;

    return 0;
}