# Subset Sum Problem Using Backtracking

## Description
The subset sum problem involves finding a subset of a given set of integers whose sum equals a given target sum. This implementation utilizes backtracking to find such subsets incrementally.

## Algorithm
1. **Function `sos(int* wt, int* x, int req_sum, int n, int s, int k, int rem)`**:
   - Inputs:
     - `wt`: Array of weights representing the elements.
     - `x`: Array representing the solution vector.
     - `req_sum`: Target sum.
     - `n`: Number of elements.
     - `s`: Current sum.
     - `k`: Current index.
     - `rem`: Remaining sum.
   - Recursive function that explores different subsets to find the subset with the desired sum.
   - At each step, it considers including or excluding the current element based on whether including it leads towards the target sum.
   - Prints the solution when the target sum is reached.

2. **Main Function**:
   - Takes input for the number of elements (`n`) and the target sum (`req_sum`).
   - Initializes an array `wt` to store the weights of elements.
   - Calls the `sos` function to find the subset with the desired sum.
   - Prints solutions found during the recursive search.

## Example
```
Enter the number of elements: 4
Enter the sum you want: 9
Enter elements: 
wt[0] = 3
wt[1] = 2
wt[2] = 4
wt[3] = 5
Sum = 14
Solution: 1 0 1 0 (3 , 4 , )
Solution: 1 1 0 0 (3 , 2 , )
```
