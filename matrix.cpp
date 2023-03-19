#include<iostream>
using namespace std;

int main(){
    int r,c;
    
    cout<<"enter the no. of rows";
    cin>>r;

    cout<<"enter the no. of coloum";
    cin>>c;

    int matrix[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter the element";
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}