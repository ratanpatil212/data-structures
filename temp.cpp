#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void ins_sort(vector<int>& arr){
    int n = arr.size();
    for(int i =0;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void sel_sort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int mid_ind = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mid_ind]){
                mid_ind = j;
            }
        }
        swap(arr[mid_ind],arr[i]);
    }
}

void mergeSort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Sort the left and right subvectors
        mergeSort(vec, low, mid);
        mergeSort(vec, mid + 1, high);

        // Merge the sorted subvectors
        merge(vec, low, mid, high);
    }
}
void merge(vector<int>& vec, int low, int mid, int high) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    // Create temporary vectors to store the left and right subvectors
    vector<int> left(leftSize);
    vector<int> right(rightSize);

    // Copy data from the original vector to the temporary vectors
    for (int i = 0; i < leftSize; i++) {
        left[i] = vec[low + i];
    }
    for (int j = 0; j < rightSize; j++) {
        right[j] = vec[mid + 1 + j];
    }

    // Merge the temporary vectors back into the original vector
    int i = 0;    // Initial index of the left subvector
    int j = 0;    // Initial index of the right subvector
    int k = low;  // Initial index of the merged subvector

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            vec[k] = left[i];
            i++;
        } else {
            vec[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of the left subvector
    while (i < leftSize) {
        vec[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of the right subvector
    while (j < rightSize) {
        vec[k] = right[j];
        j++;
        k++;
    }
}

int getSum(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main() {
    // int* malloc_ptr = (int*) malloc(10*sizeof(int));
    // int* calloc_ptr = (int*) calloc(10, sizeof(int));
    // calloc_ptr = (int*) realloc(calloc_ptr,15*sizeof(int));
    // free(malloc_ptr);
    if(!printf("Hello"))
    {}
    else{
        printf("World");
    }
    return 0;
}