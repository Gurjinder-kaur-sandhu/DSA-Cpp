# C++ Functions Practice Program

## Overview

This C++ program demonstrates the use of basic **functions**.
It performs several operations using different functions such as:

* Product of two numbers
* Checking whether a number is **even or odd**
* Calculating the **factorial of a number**
* Calculating the **binomial coefficient**

The program is mainly written to practice **function creation, parameter passing, and basic mathematical operations in C++**.

---

# Functions Used

## 1. Product Function

```
void product(int a, int b)
```

**Purpose:**
Calculates the product of two numbers.

**Example**
Input:

```
a = 4
b = 5
```

Output:

```
product is 20
```

---

## 2. Odd-Even Function

```
void oddeven(int i)
```

**Purpose:**
Checks whether a number is even or odd using the modulus operator `%`.

**Logic**

```
if number % 2 == 0 → even
else → odd
```

Example Output:

```
even no
```

---

## 3. Factorial Function

```
int factorial(int n)
```

**Purpose:**
Calculates the factorial of a number.

**Formula**

```
n! = n × (n-1) × (n-2) ... × 1
```

Example:

```
5! = 120
```

---

## 4. Binomial Coefficient Function

```
void binomial(int n1, int r1)
```

**Purpose:**
Calculates the **binomial coefficient**.

Formula:

```
nCr = n! / (r! × (n-r)!)
```

Example:

```
5C2 = 10
```

---

# Program Flow

1. User enters **two numbers** → program prints their product.
2. User enters **a number** → program checks if it is even or odd.
3. User enters **a number** → program calculates its factorial.
4. User enters **n and r values** → program calculates binomial coefficient.

---

# Concepts Covered

* Functions in C++
* Passing parameters to functions
* Loops (`for`)
* Conditional statements (`if-else`)
* Mathematical computations
* Modular program design

---

# Example Run

```
enter two numbers
4 6
product is 24

enter number
7
odd no

enter value to find its fact
5
factorial is 120

enter the 2 values for binomial
5 2
10
```

---


