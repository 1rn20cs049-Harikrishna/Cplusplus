#include<iostream>
using namespace std;

class complex{
   int r,i;
   
   public :
   complex() {
                 r= 10;
                 i=20;
                 cout<<"Zero parameterised constructor\n";
                 cout<<r<<endl<<i<<endl;
    }
    
    complex(int x) {
                 r = x;
                 i=40;
                 cout<<"ONE paramterised constructor\n";
                 cout<<r<<endl<<i<<endl;
    }
    
    
     complex(int x,int y){
                r= x;i=y;
                cout<<"Two parametrised constructor\n";
                cout<<r<<endl<<i<<endl;
    }
       void display(){
                cout<<r<<endl<<i<<endl;
       }
  };
  
  
int main() {
complex r;
complex p = { 1,3};

complex q(60); //Constructor is called when an object is created to class
       

}
