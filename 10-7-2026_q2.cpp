#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSwitchingSubarray(vector<char>& arr) {
    int n = arr.size();

    if (n == 0) return 0;
    if (n == 1) return 1;

    int curr = 2;
    int ans = 2;

    for (int i = 2; i < n; i++) {
        if (arr[i] == arr[i - 2]) {
            curr++;
        } else {
            curr = 2;
        }

        ans = max(ans, curr);
    }

    return ans;
}

int main() {
    vector<char> arr = {'a','b','a','b','c','b','a','b'};

    cout << longestSwitchingSubarray(arr);

    return 0;
}