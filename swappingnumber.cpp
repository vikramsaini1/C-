#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    
    int b;
    cout<<"Enter the value of b:";
    cin>>b;
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    
   cout << "After swapping a = " << a << " , b = " << b
         << endl;
    
    return 0;
}
