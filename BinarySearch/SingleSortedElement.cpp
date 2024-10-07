#include <iostream>
#include <vector>
using namespace std;
int SingleSortedElement(vector<int> &nums){
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int start =0, end= n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid ==0 && nums[0]!= nums[1]){
                return nums[mid];
            }
            if(mid ==n-1&& nums[n-1]!=nums[n-2]){
                return nums[mid];
            }
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid] ;
            }
            if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    end =mid-1;
                }else{
                    start =mid+1;
                }
            }
            else{
                if(nums[mid-1]==nums[mid]){
                    start= mid+1;
                    }
                    else{
                        end =mid-1;
                    }               
            }
        }
    return -1;
    }

int main(){
    vector<int> arr1 ={1,1,2,2,3,3,4,4,5,5,6,7,7};
    cout<< SingleSortedElement(arr1) <<endl;
    vector<int> arr2 ={-1,0, 0,2,2,3,3,4,4,5,5,6,6,7,7};
    cout<< SingleSortedElement(arr2) <<endl;
}