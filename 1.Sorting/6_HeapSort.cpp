/*
What is Heap Sort?
Heap sort is a comparison-based sorting algorithm that builds a binary heap (max heap or min heap) from the input data and then uses the heap properties to sort the data. It is an efficient, in-place algorithm with O(n log n) time complexity.

Heap sort works by:
1. Building a max heap from the input array.
2. Repeatedly extracting the maximum element from the heap and placing it at the end of the array.
3. Rearranging the remaining elements to maintain the heap property.

How Heap Sort Works:
1. Max Heap Construction: First, the array is transformed into a max heap, where each parent node is greater than or equal to its child nodes.
2. Heap Sort Process:
    1. The largest element (root of the heap) is swapped with the last element of the array.
    2. Reduce the heap size by one and heapify the root element to maintain the max heap property.
    3. Repeat this process until all elements are sorted.

Where is Heap Sort Used?
1. Priority queues: Heap sort is often used in implementing priority queues, where the largest or smallest element is needed frequently.
2. Real-time systems: Since Heap sort guarantees O(n log n) time complexity, it can be used in real-time systems where predictability is important.
3. Selection algorithms: Heap sort can be used when we need to find the k-th largest or smallest element in an array efficiently.
*/

