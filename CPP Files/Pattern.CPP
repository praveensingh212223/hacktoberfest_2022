#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int n;

    cout<<"Enter Num value :- ";
    cin>>n;

    cout<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            cout << "*";
        cout<<"\n";
    }
    return 0;
}
