#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[20];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int sbor,br=0;
    cin>>sbor;
    int sum=0;
    for(int i=0;i<n-1;++i)
    {

        for(int j=i+1;j<n;++j)
        {
            sum=a[j]+a[i];
            if(sum==sbor) {br++;}
        }
    }
    cout<<br<<endl;
}
