# Min and Max Heap Program

## Data Structure

The heap is implemented using an integer array.
 For index `i`:
   Left child = `2*i + 1`
   Right child = `2*i + 2`
No separate structure is required.


## Functions

- `swap()` – Swaps two numbers.
- `minHeapify()` – Maintains min heap property.
- `buildMinHeap()` – Builds min heap from array.
- `maxHeapify()` – Maintains max heap property.
- `buildMaxHeap()` – Builds max heap from array.
- `printArray()` – Prints heap elements.



##  main() Method

- Creates two arrays with same data.
- Builds Min Heap using first array.
- Builds Max Heap using second array.
- Prints both heaps.


## Sample Output

Min Heap:
10 20 15 30 40

Max Heap:
40 30 15 10 20
