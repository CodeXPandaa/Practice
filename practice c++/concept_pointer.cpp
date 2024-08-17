#include <iostream>
using namespace std;
int main(){
    int x=69;
    int* ptr = &x; //store address of x
    cout<<*ptr<<endl; //print value of x by pointer(called dereferance oprater (*))
    cout<<ptr<<endl;  //print address of x 
    cout<<&ptr<<endl;  //print address of pointer (ptr)
    cout<<x<<endl; //print value of x
    *ptr = 96; //update value of x by dereferance oprator
    cout<<x<<endl; //print updated value of x

}