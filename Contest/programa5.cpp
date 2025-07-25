#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool has_bad_subarray(const vector<int>& a) {
    int n = a.size();
    long long total = 0;
    for (int i =0; i < n; i++) total += a[i];
    
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i];
        if (sum >= total) return true;
        if (sum < 0) sum = 0;
    }

    sum = 0;
    for (int i = 1; i < n; i++) {
        sum += a[i];
        if (sum >= total) return true;
        if (sum < 0) sum = 0;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (has_bad_subarray(a)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        }

        return 0;
    }

