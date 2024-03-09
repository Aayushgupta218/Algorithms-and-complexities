// For Recursive approach -->

The key process in quickSort is a partition().
The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot. 
Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.

TIME COMPLEXITY(average case) = O(nlogn)

TIME COMPLEXITY(worst case) = O(n^2)

![image](https://github.com/Aayushgupta218/Algorithms-and-complexities/assets/121601377/5e7e7cd5-15df-4e7b-af22-784dee2de87c)

For iterative approach -->

The process includes doing partition and putting the larger list in the stack and sorting the smaller list.This algorithm saves a lot of space.

TIME COMPLEXITY = O(n*logn)

