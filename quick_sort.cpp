#include<bits/stdc++.h>
using namespace std;
//int quick_sort(int a[],int ,int );
int part(int a[],int lb,int ub)
{
    int pivot;
    pivot=a[lb];
    int start,end;
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}
 int quick_sort(int a[],int lb,int ub)
        {
            if(lb<ub)
        {
            int loc=part(a,lb,ub);
            quick_sort(a,lb,loc-1);
            quick_sort(a,loc+1,ub);
        }
        }

int main()
{
    int n,i;
    int lb,ub,loc;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    lb=0;
    ub=n-1;
    quick_sort(a,lb,ub);
    //cout<<n<<endl;
    for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}
