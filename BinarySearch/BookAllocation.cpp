#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllocationPages) {
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllocationPages) {
            return false;
        }
        if (pages + arr[i] > maxAllocationPages) {
            students++;
            pages = arr[i];
            if (students > m) {
                return false;
            }
        } else {
            pages += arr[i];
        }
    }
    return true;
}

int BookAllocation(vector<int> &arr, int n, int m) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int ans = -1;
    int start = 0;
    int end = sum;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {2, 3, 4, 1};
    int n = arr1.size();
    int m = 2 ; // Number of students
    cout << "Minimum number of pages: " << BookAllocation(arr1, n, m) << endl;
    return 0;
}