#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter the value of a:"<<endl;
  cin>>a;
  
  
   int b;
  cout<<"Enter the value of b:"<<endl;
  cin>>b;
  
  if(a>b){
      cout<<"a is greater than b"<<endl;
     }
      else if(a<b){
        cout<<"b is greater than a"<<endl;
    }
  else{
      cout<<"a and b have equal value"<<endl;
  }
    return 0;
    
}
