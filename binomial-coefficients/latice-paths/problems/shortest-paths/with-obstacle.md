# Shortest Paths With Obstacles

## Problem statement

- How many lattice paths can be formed starting at S and ending at E such that it does not pass through the point A?
- How many lattice paths start at S and end at E and avoid A?

## Solution

The solution is all shortest paths from S to D, except paths from S to A and from A to D.

## Examples

- The number of shortest paths from (0, 0) to (5, 5) and avoid (2, 2) = C(10, 5) - C(4, 2)∙C(6, 3) = 252 - 6∙20 = 132