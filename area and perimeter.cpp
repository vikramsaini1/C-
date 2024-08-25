#include<iostream>
using namespace std;

int main(){
    // a and b and the lenght of perimeter
    int a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    
    int area;
    area=a*b;
    
    int perimeter;
    perimeter=2*(a+b);
    
    cout<<"Area of the Rectangle:"<<area<<endl;
    cout<<"Perimeter of the REctangle:"<<perimeter<<endl;
    
    return 0;
    
}
