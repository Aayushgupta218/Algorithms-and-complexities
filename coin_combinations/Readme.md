// Coin Generation Backtracking
This C++ program generates all possible combinations of coin selections using a backtracking approach. The objective is to explore and identify different configurations of selecting or not selecting each coin from a given range.

Description
The program utilizes a backtracking algorithm to systematically explore and generate all possible combinations of coin selections. The coins function is a recursive backtracking function that fills an array with binary values (0 or 1) representing whether each coin is selected or not.

Approach
Backtracking Function (coins):

The function takes three parameters: arr (the array to store coin selections), k (the current position in the array), and n (the total number of coins).
The base case checks if the current position k has reached n + 1. If true, the function returns, marking the end of a combination.
In each recursive call, the function explores two possibilities:
Selecting the current coin by setting arr[k] to 1.
Not selecting the current coin by setting arr[k] to 0.
Main Function:

Iterates over a range of coin counts (i values) from 10 to 25 with a step of 3.
Allocates a dynamic array (arr) for each iteration to store coin selections.
Measures the time taken to generate coin combinations for each iteration over 10 trials.
Outputs the coin count and the average time taken for each iteration.

![Uploading image.png…]()
