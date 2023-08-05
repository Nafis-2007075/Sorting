#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    i=lb;
    j=mid+1;
    k=0;
    int b[ub-lb+1];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=0 ; k<(ub-lb+1) ; k++)
    {
        a[k+lb]=b[k];
    }
}
int merge_sort(int a[],int lb,int ub)
{
    int mid;
    mid=(lb+ub)/2;
    if(lb<ub)
    {
        
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main()
{
    int i,n,lb,ub; 
    cin>>n;
    lb=0;
    ub=n-1;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    merge_sort(a,lb,ub);
    for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}