#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
    
    int count = 0;
    int left = 0;
    int right = n - 1;
    
    while(left <= right)
    {
        int mid = left + right / 2;
        if(arr[mid] == 1)
        {
            left = mid + 1;
        }
        else
        {
            if(arr[mid]==0 || arr[mid-1]==1)
            {
                count = n - mid;
            }
            right = mid - 1;
        }
    }
  
    cout << "Count of 0's in the array: " << count << endl;

    return 0;
}
