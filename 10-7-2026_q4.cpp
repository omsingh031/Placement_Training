#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumSum(vector<int>& arr) {

    // Sort digits in ascending order
    sort(arr.begin(), arr.end());

    long long num1 = 0, num2 = 0;

    // Distribute digits alternately
    for (int i = 0; i < arr.size(); i++) {

        if (i % 2 == 0)
            num1 = num1 * 10 + arr[i];
        else
            num2 = num2 * 10 + arr[i];
    }

    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;

    return num1 + num2;
}

int main() {

    vector<int> arr = {6, 7, 4, 2, 1, 9};

    cout << "Minimum Sum = " << minimumSum(arr);

    return 0;
}