#include <iostream>
using namespace std;
#include <vector>

int BinarySearch(vector<int> arr, int traget)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        // int mid = start + end / 2; // overflow the conditon in this mid basically used in start +(end-start)/2
        int mid = start + (end - start) / 2;
        if (traget > arr[mid])
        {
            start = mid + 1;
        }
        else if (traget < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
};

int main()
{
    vector<int> arr1 = {1, 2, 34, 56, 78, 98, 120};
    int target1 = 34;
    cout << BinarySearch(arr1, target1) << endl;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 0;
    cout << BinarySearch(arr2, target2) << endl;
    return 0;
}





// Binary Serach with Recursion

#include <iostream>
using namespace std;
#include <vector>

int RecursiveinarySearch(vector<int> arr, int traget, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (traget > arr[mid])
        {
            return RecursiveinarySearch(arr, traget, mid + 1, end);
        }
        else if (traget < arr[mid])
        {
            return RecursiveinarySearch(arr, traget, start, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
};

int main()
{
    vector<int> arr1 = {1, 2, 34, 56, 78, 98, 120};
    int target1 = 34;
    cout << RecursiveinarySearch(arr1, target1, 0, arr1.size() - 1) << endl;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 0;
    cout << RecursiveinarySearch(arr2, target2, 0, arr2.size() - 1) << endl;
    return 0;
}