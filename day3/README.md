📘 README – Basic C++ Conditional Programs
📌 Program Description

This C++ program demonstrates:

Voting eligibility (if-else)

Largest of 3 numbers

Odd or Even check

Income tax calculator (else-if ladder)

Comments about ternary operator and switch statement

1️⃣ Voting Eligibility
🔹 Logic:
if (age >= 18)

If age is 18 or above → allowed to vote
Else → not allowed

✅ Correct logic.

2️⃣ Largest of Three Numbers
❌ Mistake in your code:
if (num1>num2 && num1>>num3)

>> is right shift operator, not comparison.

✅ Correct condition:
if (num1 > num2 && num1 > num3)
❌ Output issue:

You printed:

cout<<"largest number is num1"

This prints the word num1, not the value.

✅ Correct way:
cout<<"Largest number is "<<num1<<endl;
3️⃣ Odd or Even
❌ Mistake:
if (a/2 == 0)

This checks division, not remainder.

✅ Correct way:

Use modulus operator %

if (a % 2 == 0)

If remainder is 0 → Even
Else → Odd

4️⃣ Income Tax Calculator
Your logic:

Income < 5 → No tax

5 < Income < 10 → 20%

Otherwise → 30%
