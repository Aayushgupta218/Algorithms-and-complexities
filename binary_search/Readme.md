Binary Search is a search algorithm that is faster than the linear search algorithm. Binary Search is used to search the position of the target element in a sorted array by repeatedly dividing the search space in half. Binary search eliminates half portion of the array with each comparison.

TIME COMPLEXITY = O(logn)

Python program -->

import matplotlib.pyplot as plt

values = [
(1000,  210000),
(1200,  310100),
(1400,  308200),
(1600,  407100),
(1800,  409800),
(2000,  902000),
(2200,  700400),
(2400,  798000),
(2600,  1005300),
(2800,  1510900),
(3000,  1310400),
(3200,  1200900),
(3400,  1164100),
(3600,  1700700),
(3800,  1111300),
(4000,  1209700),
(4200,  1716500),
(4400,  1802700),
(4600,  2352800),
(4800,  1698800),
(5000,  1796900),
  ]

x_values, y_values = zip(*values)

plt.plot(x_values, y_values, marker='o', linestyle='-', color='b', label='Original Line')

plt.xlabel('Input Values')
plt.ylabel('Seconds')

plt.title('Inputs Vs Time Graph for Binary search algorithm')

plt.legend()

plt.show()

![image](https://github.com/Aayushgupta218/Algorithms-and-complexities/assets/121601377/beeaff2c-4483-467c-a8bd-628e8f6b6baa)
