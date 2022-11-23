#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

class list{
    node *first;
    
    public :
       list();
       ~list();
       void insert_front();
       void display()const;
       
     
};

list :: list() : first(NULL) {}
void list::insert_front(){
    node *t;
    t =new node;
    cin>>t->data;
    t->link = NULL;
    
    if(first == 0)
      first = t;
    else{
    t->link  = first;
    first = t;
}
}

void list :: display() const{
    if(first ==NULL)
     {
         cout<<"empty"<<endl;
         return;
     }
     
     for(node *t =first; t!=NULL;t= t->link)
       cout<<t->data<<endl;
}

list :: ~list ()
{
    node *f,*s=NULL;
    
    if(first == NULL)
       return;
    if(f->link == NULL)
     delete f; return;
     
     s =f->link;
     while(1)
     {
         delete f;
         f =s ;
         s= s->link;
        if(!s)
        {
            delete f;
            return;
         }
         
     }
}


int main()
{
    list obj;
    int n;
    cout << "Enter the array size";
    cin >> n;
    cout<<"Enter the array value";
   for (int i = 0;i<n;i++)
        obj.insert_front();
    obj.display();
    
    
}

