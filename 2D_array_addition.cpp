#include <iostream>
using namespace std;

int n;
int m;
int main()
{
    
    cout << "enter the no. of row "<<endl;
    cin >> n;
    cout << "enter the no. of colum "<<endl;
    cin >> m;
    int first[n][m],second[m][n],sum[m][n];
    // input for first matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter The element of Row" <<" "<<i  <<" " <<"and colum"<<" "<< j<< " " ;
            cin >> first[i][j];
        }
    }
    // input for second matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter The element of Row" <<" "<<i  <<" " <<"and colum"<<" "<< j<< " " ;
            cin >> second[i][j];
        }
    }
    // output for first matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << first[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // output for second matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << second[i][j] <<" ";
        }
        cout<<endl;
    }
    // For add
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            sum[i][j] =first[i][j]+second[i][j];
        }
        cout<<endl;
    }
    //for output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << sum[i][j] <<" ";
        }
        cout<<endl;
    }
}