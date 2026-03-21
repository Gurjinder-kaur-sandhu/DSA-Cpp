Overview

This project contains implementations of three basic sorting algorithms:

Bubble Sort
Selection Sort
Insertion Sort

These are comparison-based sorting algorithms used to sort arrays in ascending order.

1. Bubble Sort
Description

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. After each pass, the largest element moves to the end of the array.

Algorithm Steps
Start from the first element.
Compare adjacent elements.
Swap if the left element is greater than the right.
Repeat for the entire array.
After each pass, the largest element is placed at the end.
Stop early if no swaps occur.
Time Complexity
Case	Complexity
Best Case	O(n)
Average Case	O(n²)
Worst Case	O(n²)
Space Complexity

O(1)

Characteristics
Stable sort
Simple implementation
Not efficient for large datasets
2. Selection Sort
Description

Selection Sort finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element.

Algorithm Steps
Assume the first element is the minimum.
Find the minimum element in the remaining array.
Swap it with the first element.
Move the boundary of sorted and unsorted array.
Repeat until array is sorted.
Time Complexity
Case	Complexity
Best Case	O(n²)
Average Case	O(n²)
Worst Case	O(n²)
Space Complexity

O(1)

Characteristics
Not stable
Fewer swaps than bubble sort
Performance same in all cases
3. Insertion Sort
Description

Insertion Sort builds the sorted array one element at a time by inserting elements into their correct position in the sorted part.

Algorithm Steps
Assume first element is already sorted.
Take the next element.
Compare it with elements in sorted part.
Shift elements to the right.
Insert element at correct position.
Repeat until array is sorted.
Time Complexity
Case	Complexity
Best Case	O(n)
Average Case	O(n²)
Worst Case	O(n²)
Space Complexity

O(1)

Characteristics
Stable sort
Efficient for small datasets
Efficient for nearly sorted arrays
