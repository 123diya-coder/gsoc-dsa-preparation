# Day 4: Best Time to Buy and Sell Stock

**Problem:**  
You are given an array `prices` where `prices[i]` is the price of a stock on the `i-th` day.  
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

**Example:**
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price=1), sell on day 5 (price=6)


**Approach:**  
- Track the minimum price seen so far.
- Calculate the profit at each step and update the maximum profit.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Tags:** Array, Greedy, DSA, GSoC Prep

**Link:** [LeetCode - Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
