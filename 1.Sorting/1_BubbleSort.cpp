/*
What is Bubble Sort?  [ O(n²) ]
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list.

How Bubble Sort Works:
1. Starting from the first element, compare it with the next element.
2. If the first element is greater than the second, swap them.
3. Move to the next pair of adjacent elements and repeat the comparison and swap process.
4. Continue this process until the end of the list.
5. After each pass through the list, the largest element gets placed in its correct position (the end of the list).
6. Repeat the entire process for all elements, ignoring the last sorted element after each pass (since it's already in place).
7. Stop when no swaps are needed, indicating that the list is sorted.

Where is Bubble Sort Used?
1. Small datasets: It can be useful when the dataset is small and the overhead of more complex algorithms is not worth the effort.
2. Nearly sorted data: In cases where the data is almost sorted, bubble sort performs well since it can stop early when no swaps are necessary.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {11, 7, 15, 4, 3};
    int size = arr.size();
    bool alreadySortFlag = true;

    for(int i=0; i<size-1; i++){
        alreadySortFlag = true;
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                alreadySortFlag = false;
            }
        }
        if(alreadySortFlag) break;
    }

    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}