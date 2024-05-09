#include<iostream>
using namespace std;
class Bubblesort
{
   public:
       int i,j,a[100],temp,n;
       void in();
       void out();
};
void Bubblesort :: in()
{
    cout<<"Enter how many element we want to insert:";
    cin>>n;
    cout<<"/nArray elements are:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Bubblesort :: out()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=temp;
                temp=a[j+1];
                a[j+1]=a[j];
            }

        }

    }
cout<<"/nAfter sorting elements are:";

    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

}
int main()
{
    Bubblesort Bs;
    Bs.in();
    Bs.out();
    return 0;
}
