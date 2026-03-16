# C++ Pointers and Parameter Passing

## Overview

This C++ program demonstrates the basic concepts of **pointers**, **pass by value**, and **pass by reference**.

It shows how values behave differently when passed normally versus when passed using pointers.

---

# Concepts Covered

### 1. Pointers

Pointers are special variables that store the **memory address of another variable**.

Example:

```cpp
int a = 10;
int *ptr = &a;
```

Here:

* `a` stores the value `10`
* `&a` gives the **memory address**
* `ptr` stores that address

---

### 2. Address-of Operator (`&`)

The `&` operator is used to get the **address of a variable**.

Example:

```cpp
cout << &a;
```

This prints the memory location of `a`.

---

### 3. Pointer Size

The program prints the size of a pointer using:

```cpp
cout << sizeof(ptr);
```

On most systems:

* **64-bit system → 8 bytes**
* **32-bit system → 4 bytes**

---

# Parameter Passing Methods

## 1. Pass by Value

A copy of the variable is passed to the function.

Function:

```cpp
void passvalue(int x)
{
    x = 50;
}
```

Example:

```cpp
int b = 10;
passvalue(b);
```

Output:

```
value of b 10
```

The original value **does not change** because only a copy was modified.

---

## 2. Pass by Reference (Using Pointer)

In this method, the **address of the variable** is passed to the function.

Function:

```cpp
void passref(int *ptr)
{
    *ptr = 20;
}
```

Example:

```cpp
int a1 = 21;
passref(&a1);
```

Output:

```
20
```

The original value changes because the function modifies the **actual memory location**.

---

# Program Flow

1. Declare a variable and print its **address**.
2. Create a **pointer** to store the address.
3. Print the **size of pointer**.
4. Demonstrate **pass by value**.
5. Demonstrate **pass by reference using pointer**.

---

# Example Output

```
(address of a)
8

value of b 10
20
```

---

# Key Takeaways

* Pointers store **memory addresses**.
* `&` is used to get the **address of a variable**.
* Pass by value **does not change the original variable**.
* Pass by reference **modifies the original variable**.

---


