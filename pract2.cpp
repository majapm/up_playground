#include<iostream>
using namespace std;
int main()
{
    int N,counterOfDots=0;
    double x,y, width,height;
    cin>>x>>y>>width>>height;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        double currX,currY;
        cin>>currX>>currY;
        if(currX >= x && currX <= x+width && currY <=y && currY >=y-height)
        {
            counterOfDots++;
        }
    }
    cout<<"Dots which are inside the rectangle:"<<counterOfDots;
}
