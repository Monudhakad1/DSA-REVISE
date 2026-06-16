#include <iostream>
#include <vector>

using namespace std;

vector<long long> dp(1e6, -1);  // Memoization table (large size)

long long fibonacci(int n) {
    if (n <= 1) return n;  // Base case

    // Check if result is already computed
    if (dp[n] != -1) return dp[n];

    // Recursive calls
    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
// its c++
