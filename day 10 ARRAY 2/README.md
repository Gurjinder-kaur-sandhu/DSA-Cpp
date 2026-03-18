# 📘 C++ Arrays & Pointers Practice

## 📌 Overview

Ye program C++ me **array reversal** aur **pointer arithmetic** ke concepts ko demonstrate karta hai.

---

## 🔁 Part 1: Reverse an Array (In-place)

### 💡 Concept

Array ko reverse karne ke liye **two-pointer approach** use ki gayi hai:

* Ek pointer start se (`start`)
* Ek pointer end se (`end`)
* Dono elements swap hote hain jab tak `start < end`

### ⚙️ Logic

```
start = 0
end = size - 1

while(start < end):
    swap(arr[start], arr[end])
    start++
    end--
```

### ⏱ Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(1)** (No extra space used)

---

## 🖨 Output Function

`printArr()` function array ke elements ko print karta hai.

---

## 👉 Example

Input:

```
5
1 2 3 4 5
```

Output:

```
5 4 3 2 1
```

---

## 📍 Part 2: Pointer Basics & Arithmetic

### 🔹 Pointer Declaration

```
int *aptr = &a;
```

### 🔹 Increment Operator

```
aptr++;
```

👉 Pointer next memory location pe move karta hai
👉 Integer pointer ke case me **+4 bytes** (system dependent)

---

### 🔹 Pointer Arithmetic

#### ✅ Valid:

```
aptr + 3     // move forward
bptr - aptr  // difference between pointers
```

#### ❌ Invalid:

```
ptr1 + ptr2  // not allowed
```

---

## ⚠️ Important Notes

* Pointer subtraction sirf **same data type** ke pointers ke beech valid hota hai
* `int arr[size]` is not standard C++ (VLA), use:

  ```
  vector<int> arr(size);
  ```

---

## 🚀 Concepts Covered

* Arrays
* In-place Reversal
* Two Pointer Technique
* Pointers
* Pointer Arithmetic

---

## 📂 Author Note

Ye code beginners ke liye hai jo DSA aur C++ fundamentals strong karna chahte hain.
