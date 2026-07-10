#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if a valid permutation exists
bool canPermute(vector<int>& A, vector<int>& B, int K) {

    // Sort A in ascending order
    sort(A.begin(), A.end());

    // Sort B in descending order
    sort(B.begin(), B.end(), greater<int>());

    // Check each corresponding pair
    for (int i = 0; i < A.size(); i++) {

        // If any pair's sum is less than K,
        // no valid permutation is possible
        if (A[i] + B[i] < K)
            return false;
    }

    // All pairs satisfy the condition
    return true;
}

int main() {

    // Input arrays
    vector<int> A = {2, 1, 3};
    vector<int> B = {7, 8, 9};

    int K = 10;

    // Check if permutation is possible
    if (canPermute(A, B, K))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}