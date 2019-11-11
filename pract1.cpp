#include<iostream>
using namespace std;
int main()
{

    int n, countMax=0, sumMax=0, countCurr=0, sumCurr=0;
    cin>>n;

    for(int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        if(a<0)
        {
            countCurr++;
            sumCurr+=a;
        }
        else
        {
            if(countCurr>countMax)
            {
                countMax=countCurr;
                countCurr=0;
                sumMax=sumCurr;
                sumCurr=0;
            }
        }
    }
    cout<<sumMax<<endl;

}
