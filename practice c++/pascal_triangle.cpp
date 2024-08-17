#include <iostream>
using namespace std;
int fact(int n){
   int factorial=1;
   for (int i=n;i>=1;i--){
       factorial*=i;
   }
   return factorial;
}
int combination (int n,int r){
    int x,c;
    x=n-r;
    n=fact(n);
    r=fact(r);
    x=fact(x);
    c=n/(r*x);
    return c;
}
int main (){
    int n;
    cout<<"enter the numbers of line : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for (int j=0;j<=n-i;j++)
             cout<<" ";
        for (int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    
}