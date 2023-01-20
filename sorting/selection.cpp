// theta (n^2)

#include <iostream>

using namespace std;

void selsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j]<arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
}


int main()
{
    int arr[] = {5, 69, 42, 15, 1, 100, 48, 23};
    int n = *(&arr + 1) - arr;
    selsort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}