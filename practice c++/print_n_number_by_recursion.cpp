#include <iostream>
using namespace std;
int  hi(int x,int n){
    if (x>n){ 
        return 0 ;
    }
    cout<<x<<endl;
    hi(x+1,n);
}
int main(){
    int n;
    cout<<"enter the numher n : ";
    cin>>n;
    hi(1,n);

}