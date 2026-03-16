# C++ Arrays and Searching Algorithms

## Overview

This project contains C++ programs that demonstrate **array operations and searching algorithms**.
It is written for practicing **Data Structures and Algorithms (DSA) basics in C++**.

The program covers:

* Basic array declaration and input/output
* Finding **maximum and minimum elements**
* Passing arrays to functions
* **Linear Search**
* **Binary Search**

---

# Concepts Implemented

## 1. Array Basics

The program shows different ways to declare arrays.

Example:

```cpp
int marks[50];
int marks1[50] = {1,2,3,5,3};
```

Key concept:

* Printing an array name prints the **base address of the array**.

Example:

```cpp
cout << marks;
```

---

# 2. Array Input and Output

User enters the array size and elements.

```cpp
for(int i=0;i<n;i++)
{
    cin >> arr[i];
}
```

Printing array elements:

```cpp
for(int i=0;i<n;i++)
{
    cout << arr[i];
}
```

---

# 3. Maximum Element in Array

Logic:

1. Assume first element as maximum.
2. Compare each element with current maximum.

```cpp
int max = arr[0];

for(int i=0;i<n;i++)
{
    if(arr[i] > max)
    {
        max = arr[i];
    }
}
```

Output:

```
Maximum value is X
```

---

# 4. Minimum Element in Array

Logic:

1. Assume first element as minimum.
2. Compare with remaining elements.

```cpp
int min = arr[0];

for(int i=0;i<n;i++)
{
    if(arr[i] < min)
    {
        min = arr[i];
    }
}
```

Output:

```
Min value is X
```

---

# 5. Passing Arrays to Functions

Arrays are passed using their **name**, which is equivalent to passing a **pointer**.

Example:

```cpp
void func(int arr[])
{
    arr[0] = 1000;
}
```

This modifies the original array because the function receives the **memory address**.

---

# 6. Linear Search

Linear search checks each element one by one.

Function:

```cpp
int linearsearch(int *arr,int sizeofarray,int key)
```

Algorithm:

1. Start from index `0`
2. Compare element with key
3. If match → return index
4. If end of array reached → return `-1`

Time Complexity:

```
O(n)
```

---

# 7. Binary Search

Binary search works only on a **sorted array**.

Function:

```cpp
int binarysearch(int *arr,int sizeofarray,int key)
```

Algorithm:

1. Find middle element
2. If key equals middle → return index
3. If key greater → search right half
4. If key smaller → search left half

Time Complexity:

```
O(log n)
```

---

# Example Run

```
enter size of array
5
enter elements of array
1 3 5 7 9

enter element for search
7
```

Output:

```
Linear Search Index: 3
Binary Search Index: 3
```

---

# Key Takeaways

* Array name represents its **base memory address**.
* Arrays passed to functions behave like **pointers**.
* Linear search works on **unsorted arrays**.
* Binary search requires a **sorted array** and is much faster.

---

# Author

C++ practice programs for learning **arrays and searching algorithms in DSA**.
