#include <iostream>
using namespace std;
int fact(int n){
   int factorial=1;
   for (int i=n;i>=1;i--){
       factorial*=i;
   }
   return factorial;
}
int main (){
    int n,r,x,c,p;
    cout<<"enter the n : ";
    cin>>n;
    cout<<"enter the r : ";
    cin>>r;
    x=n-r;
    n=fact(n);
    r=fact(r);
    x=fact(x);
    c=n/(r*x);
    p=n/x;
    cout<<"combination : "<<c<<endl;
    cout<<"permutation : "<<p;
}