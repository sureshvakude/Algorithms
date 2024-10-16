/*
What is Merge Sort? [ O(n log n) ]
Merge sort is an efficient, stable, and comparison-based divide-and-conquer sorting algorithm. It works by recursively splitting the array into two halves, sorting each half, and then merging the sorted halves back together.

How Merge Sort Works:
1. Divide: Split the array into two halves until each subarray contains a single element.
2. Conquer: Recursively sort the subarrays.
3. Merge: Merge the sorted subarrays to produce the sorted array.

Where is Merge Sort Used?
1. Large datasets: Merge sort is ideal for sorting large datasets, particularly when performance matters, as it consistently provides O(n log n) time complexity.
2. External sorting: It is used in situations where the data is too large to fit in memory (external sorting) since merge sort performs well with sequential access.
3. Stable sorting: Merge sort maintains the relative order of equal elements, making it useful for applications where stability is required.
*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}