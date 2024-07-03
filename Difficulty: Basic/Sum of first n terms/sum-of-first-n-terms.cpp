//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
// Functional Recusrsion
class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n<1){
            return 0;
        }
        return (n * n * n) + sumOfSeries(n - 1); // waiting for its lower function to be done
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends
