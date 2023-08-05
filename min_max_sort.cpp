#include<bits/stdc++.h>
using namespace std;

void min_maxSort(int arr[], int n)
{
    for(int i=0, j=n-1; i<j; i++,--j)
    {
        int maxx = arr[i], minn = arr[i];
        int maxidx = i , minidx = i;

        for(int k =i+1; k<=j; k++)
        {
            if(arr[k]>maxx)
            {
                maxx = arr[k];
                maxidx = k;
            }
            else if(arr[k] < minn)
            {
                minn = arr[k];
                minidx = k;
            }
        }
        swap(arr[minidx], arr[i]);
        if (arr[minidx] == maxx)
            swap(arr[j], arr[minidx]);
        else
        swap(arr[j], arr[maxidx]);
    }
}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    min_maxSort(arr,n);
    print(arr,n);
}