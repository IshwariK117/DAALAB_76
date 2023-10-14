#include<iostream>
using namespace std;

int main()
{
    int n,i,nonzero=0;
    cout << "Enter size: ";
    cin>>n;
    
    int arr[n];
    
    cout << "Enter array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[nonzero]=arr[i];
            nonzero++;
        }
    }

    while(nonzero<n)
    {
        arr[nonzero]=0;
        nonzero++;
    }
     for(i=0;i<n;i++)
     {
      cout<<arr[i]<<" ";
     }
return 0;

}