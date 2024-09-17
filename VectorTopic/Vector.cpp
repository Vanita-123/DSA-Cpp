#include <iostream>
using namespace std ;
// #include <bits/stdc++.h> 
#include <vector>


int main(){
    vector<int>vec;
    vector<int>vec ={11,5,6,4,3};
    cout <<vec[0]   <<endl;
    cout <<vec[1];
    cout<< endl;
    cout <<vec[2];
    cout<< endl;
    cout <<vec[3];
    cout<< endl;
    cout <<vec[4];
    cout<< endl;



// function 
// size
    vector <int>vec{0, 1, 5,3};
    cout <<"size"  << vec.size() <<endl; 

    for(int i :vec){
        cout <<i;
    };

// push
     vector <int>vec;
    cout <<"size"  << vec.size() <<endl; 
     cout <<"push method" ;
    vec.push_back(9);
    vec.push_back(90);
    vec.push_back(6);
    vec.push_back(90);
    cout <<" afer push size ="  << vec.size() <<endl; 
  for(int i :vec){
        cout <<i <<endl;
    };

    // pop_back

    vec.pop_back();
    vec.pop_back();
    vec.front();
    cout <<" afer push size ="  << vec.size() <<endl; 
    cout <<"push method :" ;
     for(int i :vec){
        cout <<"pop :" <<i <<endl;
     }
   
   // front
        cout <<"front :"<< vec.front() <<endl;
        // back
        cout <<"back :"<< vec.back() <<endl;



      // at


        cout <<"at" <<vec.at(0);
        cout <<"at" <<vec.at(3);


// size and capacity

//  cout <<"push method" ;
    vec.push_back(9);
    vec.push_back(0);
    vec.push_back(6);
    vec.push_back(90);
    vec.push_back(90);
cout <<vec.size() <<endl;
cout <<vec.capacity() <<endl;
    return 0;

}






// Problem
// Single number,  it is unique no.  find
#include <iostream>
#include<vector>
using namespace std ;



int SingleNumber(vector<int>& nums){
int  ans=0;
    for (int val:nums){
        ans = ans^val;
    }
    return ans;
  
}
int main(){
   vector<int> nums={4,1,2,2,1};
    cout<<SingleNumber(nums);
    return 0;
}




// Maximum  Subarray
#include <iostream>
#include<vector>
using namespace std ;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    
    for (int start= 0; start <n; start++)
    {
        for (int end = start; end < n; end++)
        {
        for(int i=start; i<=end;i++){
            cout <<arr[i];
        }
        cout <<" ";
        }
        cout<<endl;
        
    }
    
}


// brute force method
#include <iostream>
#include<vector>
using namespace std ;
int main(){

int n=5;
int arr [5]={2,14,-6,-2,5};
    int maxSum = INT8_MIN;
    int currentSum =0;
  for(int start=0 ; start<n; start++){
    for(int end=start; end<n; end++)
    {
   int currentSum =arr[end];
     maxSum = max(currentSum ,maxSum);
    }
     cout << " Maximum SubArray " << maxSum << " ";
    return 0;
}

}


// Kadane's Algorithm
#include <iostream>
#include<vector>
using namespace std ;


int currentsum =0;
int maxSum =INT8_MIN;
int KadaneAlgo (vector<int>&nums){

for (int val: nums)
{
    currentsum +=val;
    maxSum =max(currentsum,maxSum);
if(currentsum<0){
    currentsum=0;
}
}
return maxSum;

}


int main(){
    vector<int>arr= {-2,1,-3,4,-1,2,1,-5,4};
 int maxSum =KadaneAlgo(arr);
  cout <<"maxSum  :" <<maxSum;
return 0;
}







