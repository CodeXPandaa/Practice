#include <iostream>
using namespace std;
void swap (int* a,int* b){
   int z;
   z=*a;
   *a=*b;
   *b=z;

}
int main(){
   int x,y;
   cout<<"enter the 1st value: ";
   cin>>x;
   cout<<"enter the 2nd value: ";
   cin>>y;
   cout<<x<<" "<<y<<endl;
   swap(&x,&y);
   cout<<x<<" "<<y;
}