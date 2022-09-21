#include<iostream>
using namespace std;
int main()
{
    int pos=0, neg=0, zer=0, i, arr[10];
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    for(i=0; i<10; i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else
            neg++;
    }
    cout<<endl<<"Positive Numbers are: "<<pos;
    cout<<endl<<"Zero's are: "<<zer;
    cout<<endl<<"Negative Numbers are: "<<neg;

    return 0;
}