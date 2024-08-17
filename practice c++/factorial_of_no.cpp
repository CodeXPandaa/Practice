#include <iostream>
using namespace std;
int main (){
   int n,factorial=1;
   cout<<"enter the number n : ";
   cin>>n;
   for (int i=n;i>=1;i--){
       factorial*=i;
   }
   cout<<"factorial of n: "<<factorial;
}