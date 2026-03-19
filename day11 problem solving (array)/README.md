1. Buy and Sell Stock (Max Profit)
📌 Problem

You are given stock prices for different days.
Find the maximum profit you can make by buying once and selling once.

💡 Approach

Track the minimum price so far (best day to buy)

At each day:

Calculate profit = current price – minimum price

Update maximum profit if higher

🧠 Key Idea

👉 Always try to:

Buy at lowest price

Sell at highest price after that

⏱ Complexity

Time: O(n)

Space: O(1)

⚡ Insight

You don’t need to check all pairs

Just track the best buy and best profit in one pass

🔹 2. Trapping Rain Water
📌 Problem

Given heights of bars, calculate how much rainwater can be trapped between them.

💡 Approach

For every index:

Find maximum height on left side

Find maximum height on right side

Water stored at that index:

water = min(left max, right max) - height
🧠 Key Idea

👉 Water can only be trapped if:

There are taller bars on both sides

🌊 Intuition

Think of it like valleys:

Water fills between two tall walls

Height of water depends on the smaller wall

⏱ Complexity

Time: O(n)

Space: O(n)

🚀 Bonus Insight
🔥 Optimization

Trapping Rain Water can be solved using:

Two-pointer approach

Space reduces to O(1)

📊 Summary
Problem	Time Complexity	Space Complexity	Core Idea
Buy & Sell Stock	O(n)	O(1)	Track minimum price
Trapping Rain Water	O(n)	O(n)	Left & Right maximum
