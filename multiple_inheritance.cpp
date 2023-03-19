#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
class A{
    public:
        void get1st(){
            cout<<"Enter The First Value "<<endl;
            cin>>a;
        }
};
class B{
    public:
        void get2nd(){
            cout<<"Enter The Second Value "<<endl;
            cin>>b;
        }
};
class C:public A,public B{
    public:
        void Add(){
            cout<<"The answer is "<<a+b <<endl;
        }
};

int main (){
    C a;
    a.get1st();
    a.get2nd();
    a.Add();
}