#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool t=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) {t=false; break;}

    }
    if(t) cout<<"e prosto"<<endl;
    else cout<<"ne e prosto"<<endl;
}
