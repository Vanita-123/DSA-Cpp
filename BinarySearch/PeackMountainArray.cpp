#include <iostream>
#include <vector>
using namespace std;
    int peakIndexInMountainArray(vector<int> & A) {
    int start =1 , end = A.size()- 2;
     while(start<=end){
        int mid =start+(end-start)/2;
        if(A[mid-1] <A[mid] && A[mid]>A[mid+1]){
            return mid;
        }
        else if(A[mid-1] <A[mid]){  //increment side
            start= mid+1;
        }
        else{    //decrement side
            end= mid-1;
        }
     }
     return -1;
    }
    int main(){
    vector<int> arr1={0,4,5,7,1,5};
    cout << peakIndexInMountainArray(arr1)<<endl; 
    vector<int> arr2={0,4,5,7,10,-1,-5,-7 ,-10};
    cout << peakIndexInMountainArray(arr2)<<endl; 
    }