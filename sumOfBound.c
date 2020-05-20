#include<iostream>
using namespace std;
int main()
{
    int lower_range,upper_range,sum=0;
    cout<<"enter lower_range";
    cin>>lower_range;
    cout<<"enter upper_range";
    cin>>upper_range;
    for(int i=lower_range;i<=upper_range;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of bounded area"<<sum;
    return 0;
}
