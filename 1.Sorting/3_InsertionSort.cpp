/*
What is Insertion Sort? [ O(n²) ]
Insertion Sort is a simple sorting algorithm that builds the sorted list one element at a time. It works similarly to how you would sort playing cards in your hands—by repeatedly taking one element from the unsorted list and inserting it into the correct position in the sorted part of the array.

How Insertion Sort Works:
1. Assume the first element is already sorted.
2. Take the next element from the unsorted portion and compare it with elements in the sorted portion.
3. Shift the larger elements in the sorted portion one position to the right to make space for the new element.
4. Insert the new element at its correct position.
5. Repeat the process for all elements in the array.

Where is Insertion Sort Used?
1. Nearly sorted data: Insertion sort works well when the array is nearly sorted (close to being ordered).
2. Small datasets: It is efficient for small datasets as it has minimal overhead.
3. Online sorting: It can be used when data is being continuously received, as it sorts items as they come in.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5,15,6,8,9,12};
    int size = arr.size();

    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}