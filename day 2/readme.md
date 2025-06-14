# Day 2 – Best Time to Buy and Sell Stock

**Problem Link**: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
- Track `min_price_so_far` while iterating
- At each step: `profit = current_price - min_price`
- Update `max_profit` if profit is higher

## Time Complexity
- Optimized: O(n)

## Space Complexity
- O(1)
