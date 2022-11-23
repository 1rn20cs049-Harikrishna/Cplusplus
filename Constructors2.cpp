#include<iostream>
using namespace std;

class comp{
    
    int r,i;
    
    public :            
            comp();
            comp(int);
            comp(int ,int);
    
    void display()
    {
        cout<<r<<endl;
        cout<<i<<endl;
    }
};

comp::comp() : r(0) ,i(0) 
 {
    cout<<"ZPC"<<endl;  
 }

comp::comp(int p) : r(p),i(0){
    cout<<"1ZPC"<<endl;
}

comp::comp(int p,int q) : r(p),i(q) {
cout<<"2ZPC"<<endl;

}
void test(comp x)
{
    x.display();
}

int main()
{
 
  comp c1(10);
  comp  test1(10,20);
  test(100);
    //tezt(c1);
}






