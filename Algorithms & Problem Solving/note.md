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