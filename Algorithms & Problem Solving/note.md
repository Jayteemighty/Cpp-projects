1. LINEAR SEARCH
Time complexity = O(n) where n is the number of elements in the array
used to check through an array linearly. this is the process:
- How It WorksStart at the first element (index 0).
- Compare the current element with the target value.
- Return the index if they match.Move to the next element and repeat if they don't match.
- Return -1 if you reach the end without finding the target.


2. BINARY SEARCH
Time complexity: O(logn)
Binary Search is a popular searching algorithm which is used for finding the position of any given element in a sorted array.
How it works
- The list must be sorted first.
- Look at the middle item.
- If the middle item is the value, you’re done.
- If the value is smaller, search the left half.
- If the value is larger, search the right half.
- Repeat by checking the middle of the remaining half.

C++ STL provides a built-in function std::binary_search() that implements the binary search algorithm for easy and quick search on sorted data. It returns true if the element is found, false otherwise. Its behaviour is undefined if the dataset is unsorted.

3. BUBBLE SORT
Bubble Sort Algorithm is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. It is often used to introduce the concept of a sorting and is particularly suitable for sorting small datasets.

- Start by comparing the first two elements. If they are in the wrong order, swap them.
- Continue this process for all elements moving from left to right. After the first pass, the largest element will be at the end.
- In the next pass, skip the last element since it's already sorted and repeat the above steps. The second-largest element will move to the second-last position.
- Repeat the steps until the entire array is sorted.

4. SELECTION SORT
Selection Sort is a comparison-based sorting algorithm. It sorts by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element.

- Find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
- Then find the smallest among remaining elements (or second smallest) and swap it with the second element.
- We keep doing this until we get all elements moved to correct position.