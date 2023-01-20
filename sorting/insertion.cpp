#include<iostream>

using namespace std;

void ins_sort(int arr[], int n) {
    for(int i=1; i<n; i++) {

        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] >key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {5, 69, 42, 15, 1, 100, 48, 23};
    int n = *(&arr + 1) - arr;
    // sorted array here
    ins_sort(arr,8);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}


