#include<iostream>
using namespace std;
class Linearsearch
{
public:
    int i,n,item,a[100];
    void in();
    void out();
};
void Linearsearch :: in()
{
    cout<<"\nEnter How many element you want insert:";
    cin>>n;
    cout<<"\nEnter the element of an array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Linearsearch :: out()
{
    cout<<"\nEnter the element you want to search:";
    cin>>item;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            cout<<"\nElement found at position:"<<i<<endl;
            break;
        }
    }
        if(i==n)
        {
            cout<<"Element not found\n";
        }

}
int main()
{
    Linearsearch Ls;
    Ls.in();
    Ls.out();
    return 0;
}
