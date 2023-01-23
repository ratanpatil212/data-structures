#include<iostream>

using namespace std;


int binsearch(int arr[], int n, int x) {
    int low =0;
    int high =n-1;
    int mid;

    while(low <= high) {
        mid = (low + high)/2;
        cout << mid << " "<< high << " " << low << endl;

        if(arr[mid] == x) {

            return mid;
        }
        else if (arr[mid] > x) {
            high = mid-1;
        }
        else if (arr[mid] < x) {
            low = mid+1;
        }
        
    }
    return -1;
}

int recbinary(int arr[], int low, int high, int x) {

    if(low > high ) {
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid] == x) {
        return mid;
    }
    else if (arr[mid] > x) {
        return recbinary(arr, low,(mid-1),x);
    }
    else {
        return recbinary(arr, (mid+1),high,x);
    }


}


int main() {
     
    int arr[] = {0,10,20,30,40,50,60,70,80,90};
    cout << recbinary(arr,0,9,220) << endl;

    return 0;
    
}