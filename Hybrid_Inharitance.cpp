#include<iostream>
#include<conio.h>
using namespace std;
int a,b,c;
class A{
    public:
        void get1st(){
            cout<<"Enter The First Value "<<endl;
            cin>>a;
        }
};
class B: virtual public A{
    public:
        void get2nd(){
            cout<<"Enter The Second Value "<<endl;
            cin>>b;
        }
};
class C: virtual public A{
    public:
        void get3rd(){
            cout<<"Enter The 3rd Value "<<endl;
            cin>>c;
        }
};

class D: public B,public C{
    public:
        void Add(){
            cout<<"The answer is "<<a+b+c <<endl;
        }
};

int main (){
    D a;
    a.get1st();
    a.get2nd();
    a.get3rd();
    a.Add();
}