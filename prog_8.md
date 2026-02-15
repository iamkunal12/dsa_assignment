# Random Number Sorting Program in C

## Explanation of Data Structures
- **Array `a[N]`**: Stores `N` randomly generated integers.  
- **Integers `c` and `s`**: Global counters used to keep track of total comparisons and swaps during sorting.

##  Description of Functions
1. **`printArray(int a[], int n)`**  
   Prints all elements of the array `a` of size `n`.

2. **`bubbleSort(int a[], int n)`**  
   Implements Bubble Sort algorithm to sort the array. Updates the global counters `c` for comparisons and `s` for swaps.

3. **`selectionSort(int a[], int n)`**  
   Implements Selection Sort algorithm to sort the array. Updates `c` and `s` accordingly.

4. **`insertionSort(int a[], int n)`**  
   Implements Insertion Sort algorithm to sort the array. Updates `c` and `s`.

5. **`merge(int a[], int l, int m, int r)`**  
   Helper function for Merge Sort. Merges two sorted subarrays into a single sorted subarray. Updates `c` and `s`.

6. **`mergeSort(int a[], int l, int r)`**  
   Implements Merge Sort algorithm using recursion. Calls the `merge` function to combine sorted subarrays.

##  main() Method
1. Reads the number of random integers `N` from the user.  
2. Generates `N` random integers between 1 and 1000 and stores them in array `a`.  
3. Prints the array before sorting.  
4. Reads user choice for sorting algorithm:  
   - 1 → Bubble Sort  
   - 2 → Selection Sort  
   - 3 → Insertion Sort  
   - 4 → Merge Sort  
5. Resets the comparison and swap counters.  
6. Calls the corresponding sorting function based on user choice.  
7. Prints the sorted array.  
8. Displays the total number of comparisons and swaps performed.

##  Sample Output
5
234 567 123 876 45
3
45 123 234 567 876
7 4
