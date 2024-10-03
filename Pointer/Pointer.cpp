// pointer 
#include <iostream>
using namespace std; 
#include <vector>
int main(){
    int a= 10;
    cout <<&a;    // this address store in hexadecimal form
      
      int b =100;
      int* ptr = &b;
  cout << ptr <<endl;
cout <<&b;
    
         float c =100.45;
    //   float* ptr = &c;
  cout << ptr <<endl;
cout <<&c;

 int d =10;
//   int* ptr = &d;
  int** parptr =&ptr;
 
 cout <<&ptr <<endl;
 cout <<parptr <<endl;
 cout << *(&d) <<endl;
 cout << *(ptr) <<endl;

//  dereferance 
//   int** ptr;
 cout <<ptr <<endl;
return 0;  //this a garbage
 
}

// Null pointer
#include <iostream>
using namespace std; 
#include <vector>
int main(){

 int** ptr =NULL;
 cout <<ptr <<endl;
return 0; 
 
 
 int a= 5;
 int*p =&a;
 int**q =&p;
 cout <<*p <<endl;
 cout <<**q<<endl;
 cout <<*q<<endl;
 cout <<p <<endl;
 return 0;

  }



//   Function pointer



#include <iostream>
using namespace std; 
#include <vector>
// pass By value
void changeA(int a){
    a=20;
} 
// pass by refernce
void changeA(int* a){
    *a=20;
} 


// pass by reference using alais
void changeB(int &b){
    b= 20;
}
int main(){
    int a= 10;

      changeA(a);
  cout<<"Inside the main function pass by value :" <<a  <<endl;
  changeA(&a);
  cout<<"Inside the main function  pass by refernce:" <<a <<endl;
  changeA(a);
  cout<<"Inside the main function  pass by refernce using alias:" <<a;
   
    return 0;
}




// array pointer

#include <iostream>
using namespace std; 
#include <vector>
int main(){
    int arr[] ={1,3,4,5,6,7,8,9};
    cout << *arr <<endl;
    cout << *(arr +1)<<endl;
    cout << *(arr +2)<<endl;
    cout << *(arr +3)<<endl;
}




// Arthmetic operator


#include <iostream>
using namespace std; 
#include <vector>
int main(){
    int arr[] ={10,20,30,40};
    int *ptr =arr;
    cout << *(ptr +1)<<endl;
    cout << *(ptr +2)<<endl;
    cout << *(ptr +3)<<endl;
    ptr++;
    cout << *ptr <<endl;
}


// pointer arithmatic    increment / decrement
#include <iostream>
using namespace std; 
#include <vector>

int main(){
    int arr[]={3,4,5,6,8};
    int a= 10;
    int* ptr =&a;
    cout <<ptr <<endl;
   ptr++;
    cout <<ptr <<endl;
// decrement
   ptr--;
    cout <<ptr <<endl;
//    add
   ptr + 8;
    cout <<ptr <<endl;
}


// operator 
#include <iostream>
using namespace std; 
#include <vector>
int main(){
     int arr[]={3,4,5,6,8};
  int* ptr1; 
  int* ptr2 =ptr1; 
  cout<< ptr1 <<endl;
  cout<< ptr2 <<endl;
  cout<< ptr1 -ptr2 <<endl;
  cout<<( ptr1 -ptr2) <<endl;
  cout<<( ptr1 <ptr2) <<endl;
  cout<<( ptr1 >ptr2) <<endl;
  cout<<( ptr1 ==ptr2) <<endl;
  cout<<( ptr1 !=ptr2) <<endl;
}