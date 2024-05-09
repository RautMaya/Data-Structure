#include<iostream>
using namespace std;
class Selectionsort
{
public:
    int i,j,min,n,temp,a[100],LOC;
    void in();
    void out();
};
void Selectionsort :: in()
{
    cout<<"Enter how many elements you want to sort:";
    cin>>n;
    cout<<"/nEnter array elements are:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Selectionsort :: out()
{
    for(i=0;i<(n-1);i++)
    {
        min=a[i];
        LOC=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                LOC=j;
            }
        }
        temp=a[i];
        a[i]=a[LOC];
        a[LOC]=temp;
    }
    cout<<"/nAfter sorting the array elements is:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
}
int main()
{
    Selectionsort Sc;
    Sc.in();
    Sc.out();
    return 0;
}

