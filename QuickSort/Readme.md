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

![image](https://github.com/Aayushgupta218/Algorithms-and-complexities/assets/121601377/75703e06-8ff3-4fd1-aa80-008d78066ae5)

// python code for plotting graph : 

import matplotlib.pyplot as plt

values = [
 (5000,  96575800),
(7000,  148263700),
(9000,  218260500),
(11000, 327329800),
(13000, 447836000),
(15000, 605145600),
(17000, 767713700),
(19000, 1053926800)
  ]


better_values =  [
(5000 , 0),
(10000 , 51160000),
(15000 , 0),
(20000 , 20638000),
(25000 , 187550000),
(30000 , 155730000),
(35000 , 336710000),
(40000 , 439320000),
(45000 , 582930000),
(50000 ,779060000)
]

x_values, y_values = zip(*values)

x_comparison, y_comparison = zip(*better_values)

plt.plot(x_values, y_values, marker='o', linestyle='-', color='g', label='Worst case')

plt.plot(x_comparison, y_comparison, marker='s', linestyle='--', color='y', label='Average case')

plt.xlabel('Input Values')
plt.ylabel('Seconds')

plt.title('Inputs Vs Time Graph for quick sort')

plt.legend()

plt.show()
