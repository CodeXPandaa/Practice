#include <iostream>
using namespace std;
int main() {
   int m,n;
   cout<<"enter the no. of rows : ";
   cin>>m;
   cout<<"enter the no. of column : ";
   cin>>n;
   for (int i=1;i<=m;i++){
       for (int j=1;j<=n;j++){
        cout<<"*";   
       }
       cout<<endl;
   }
}