#include<iostream>
using namespace std;
class Binerysearch
{
public:
    int i,n,item,a[100],beg,mid,end;
    void in();
    void out();
};
void Binerysearch :: in()
{
    cout<<"Enter how many element you want to insert:";
    cin>>n;
    cout<<"Enter the array element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Binerysearch :: out()
{
    cout<<"Enter the element you want search:";
    cin>>item;
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<end)
    {
        if(item==a[mid])
        {
            cout<<"Element found at position:"<<mid<<endl;
        }
        else if(item<a[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(beg>end)
    {
        cout<<"\nElement not found"<<endl;
    }
}
int main()
{
    Binerysearch Bs;
    Bs.in();
    Bs.out();
}
