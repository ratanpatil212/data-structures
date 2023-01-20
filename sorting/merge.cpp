#include<iostream>

using namespace std;


//divide and conquer teknik
//stable sorting algo
//theta(nlogn)
//well suited for linked lists



int main() {
    int arr[] = {5,6,7,8,8,10};
    int arr2[] = {1,1,2,3,5,8,9};

    int sizeofarr = sizeof(arr)/sizeof(arr[0]);
    int sizeofarr2 = sizeof(arr2)/sizeof(arr2[0]);
    int i =0;
    int j = 0;

    
    while(i<sizeofarr && j<sizeofarr2){
    if(arr[i] <= arr2[j]) {
        cout << arr[i]<<" ";
        i++;
    }
    else {
        cout << arr2[j]<<" ";
        j++;
    }
    }

    while(i<sizeofarr){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<sizeofarr2){
        cout<<arr2[j]<<" ";
        j++;
    }
}