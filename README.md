# Fractional Knapsack Problem

## Project Overview

The Fractional Knapsack Problem is a classic optimization problem solved using the Greedy Algorithm.

In this problem, we have a knapsack with a limited capacity and several items. Each item has a value and a weight. The goal is to maximize the total value placed inside the knapsack.

Unlike the 0/1 Knapsack Problem, the Fractional Knapsack Problem allows us to take a fraction of an item.

## Objective

The main objectives of this project are:

- Calculate the value-to-weight ratio of each item.
- Sort the items according to their ratio.
- Select items with the highest ratio first.
- Take the complete item if it fits.
- Take a fraction of an item if the complete item does not fit.
- Calculate the maximum possible value.

## Technologies Used

- Programming Language: C++
- IDE: Code::Blocks
- Algorithm: Greedy Algorithm
- Concept: Fractional Knapsack

## Algorithm

1. Read the value and weight of each item.
2. Calculate the value-to-weight ratio.

   Ratio = Value / Weight

3. Sort all items in decreasing order of their ratio.
4. Start with the full knapsack capacity.
5. Select the item with the highest ratio.
6. If the complete item fits, take the entire item.
7. Otherwise, take only the fraction that fits.
8. Add the corresponding value to the total value.
9. Continue until the knapsack is full.
10. Display the maximum value.

## Example

Suppose we have:

Item 1: Value = 60, Weight = 10, Ratio = 6
Item 2: Value = 100, Weight = 20, Ratio = 5
Item 3: Value = 120, Weight = 30, Ratio = 4

Knapsack Capacity = 50

The algorithm first takes Item 1 completely, then Item 2 completely, and finally takes 20/30 of Item 3.

Value from Item 3:

120 × (20/30) = 80

Therefore:

Maximum Value = 60 + 100 + 80 = 240

## Sample Output

Items after sorting by value/weight ratio:

Value   Weight   Ratio
60      10       6
100     20       5
120     30       4

--- Selection Process ---

Take 100% of item: Value = 60, Weight = 10
Remaining capacity = 40

Take 100% of item: Value = 100, Weight = 20
Remaining capacity = 20

Take 66.67% of item: Value = 120, Weight = 30
Remaining capacity = 0

Maximum Value = 240

## Project Structure

FractionalKnapsack/
│
├── main.cpp
├── FractionalKnapsack.cbp
└── README.md

## Complexity

- Sorting: O(n log n)
- Selection: O(n)
- Overall Time Complexity: O(n log n)
- Space Complexity: O(n)

## Advantages

- Simple and efficient.
- Uses the Greedy Algorithm.
- Allows partial selection of items.
- Efficient for the Fractional Knapsack Problem.

## Limitation

The Greedy Algorithm works correctly for the Fractional Knapsack Problem, but it does not always work for the 0/1 Knapsack Problem because items cannot be divided in 0/1 Knapsack.




