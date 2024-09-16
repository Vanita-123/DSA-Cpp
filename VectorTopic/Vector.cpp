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



    //     // at


    //     cout <<"at" <<vec.at(0);
    //     cout <<"at" <<vec.at(3);


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