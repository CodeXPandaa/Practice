#include <iostream>
using namespace std;
int main (){
    int n,ld,sum;
    sum=0;
    cout<<"enter the number n : ";
    cin>>n;
    while(n!=0){
        ld=n%10;
        sum *=10;
        sum +=ld;
        n /=10;
        
    }
    cout<<"reverse of n is : "<<sum;
}