/*
What is Selection Sort? [ O(n²) ]
Selection sort is a simple sorting algorithm that divides the input list into two parts:
1. The sublist of items already sorted (built up from left to right).
2. The sublist of items remaining to be sorted.

The algorithm repeatedly selects the smallest (or largest, depending on the order) element from the unsorted sublist and swaps it with the leftmost unsorted element, moving the boundary of the sorted and unsorted sublists one element to the right.

How Selection Sort Works:
1. Start by finding the smallest element in the entire array.
2. Swap this smallest element with the first element of the array.
3. Then, look for the smallest element in the remaining unsorted portion of the array (from the second element to the last element) and swap it with the second element.
4. Repeat this process for the rest of the array until the entire array is sorted.

Where is Selection Sort Used?
1. Small datasets: Selection sort is most effective on small datasets or when the cost of writing to memory is high since it makes the fewest number of swaps.
2. Situations with memory write concerns: When writing to memory is expensive, selection sort is preferred over algorithms like bubble sort because it minimizes the number of swaps.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {11, 7, 15, 4, 3};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j=i+1; j< n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}