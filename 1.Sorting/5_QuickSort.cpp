/*
What is Quick Sort?
Quick Sort is a highly efficient, comparison-based sorting algorithm that uses the divide-and-conquer technique. It works by selecting a "pivot" element from the array, partitioning the array into two subarrays based on whether the elements are smaller or larger than the pivot, and then recursively sorting the subarrays.

How Quick Sort Works:
1. Partitioning: Pick a pivot element. Rearrange the array so that all elements smaller than the pivot come before it, and all elements larger than the pivot come after it.
2. Recursion: Recursively apply the same process to the subarrays to the left and right of the pivot.
3. Base case: When the size of the subarray is 0 or 1, it is already sorted.

Where is Quick Sort Used?
1. General-purpose sorting: Quick Sort is commonly used in practice due to its average O(n log n) performance.
2. Efficient in-place sorting: Quick Sort is an in-place algorithm, meaning it doesn't require additional space proportional to the input size, making it space-efficient.
3. Recursive sorting: Quick Sort is used in recursive sorting problems where the array size is dynamically reduced.
 */

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}