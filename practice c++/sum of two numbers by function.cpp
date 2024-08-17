#include <iostream>
using namespace std;
int sum(int a,int b){
    cout<<"the sum : ";
    cout<<a+b;
    return 0;
    }
int main() {
    int a,b;
    cout<<"enter the 1st no. : ";
    cin>>a;
    cout<<"enter the 2nd no. : ";
    cin>>b;
    sum(a,b);
}
