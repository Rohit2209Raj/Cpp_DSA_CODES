#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};  // Given sorted array
    int target, k;
    
    cout << "ENTER TARGET: ";
    cin >> target;
    
    cout << "ENTER NUMBER OF ADJACENTS: ";
    cin >> k;

    int n = sizeof(arr) / sizeof(arr[0]);  // Correct placement of n calculation

    vector<int> v;
    int lo = 0, hi = n - 1;
    bool flag = false;
    int ans = -1; // Initialize ans properly

    // Edge case: If target is smaller than the smallest element
    if (target < arr[0]) {
        for (int i = 0; i < k && i < n; i++) v.push_back(arr[i]);
    }
    // Edge case: If target is larger than the largest element
    else if (target > arr[n - 1]) {
        for (int i = n - 1; i >= max(0, n - k); i--) v.push_back(arr[i]);
    }
    // Binary search to find the closest element
    else {
        while (hi >= lo) {
            int mid = (hi + lo) / 2;
            if (arr[mid] == target) {
                ans = mid;
                v.push_back(arr[mid]);
                flag = true;
                break;
            } else if (arr[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        // If target was found, find k-1 closest numbers
        if (flag) {
            int ub = ans + 1, lb = ans - 1;
            while (v.size() < k) {
                if (lb < 0) {
                    v.push_back(arr[ub++]);
                } else if (ub >= n) {
                    v.push_back(arr[lb--]);
                } else if (abs(target - arr[ub]) < abs(target - arr[lb])) {
                    v.push_back(arr[ub++]);
                } else {
                    v.push_back(arr[lb--]);
                }
            }
        }
        // If target was not found, find k closest numbers from lo/hi
        else {
            int ub = lo, lb = hi;
            while (v.size() < k) {
                if (lb < 0) {
                    v.push_back(arr[ub++]);
                } else if (ub >= n) {
                    v.push_back(arr[lb--]);
                } else if (abs(target - arr[ub]) < abs(target - arr[lb])) {
                    v.push_back(arr[ub++]);
                } else {
                    v.push_back(arr[lb--]);
                }
            }
        }
    }

    // Print result
    cout << "Closest elements: ";
    for (int ele : v) cout << ele << " ";
    cout << endl;

    return 0;
}
