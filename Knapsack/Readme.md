This repository contains an implementation of the Knapsack algorithm in C++. The algorithm is applied to solve the 0/1 Knapsack problem by considering three different strategies:

Sorting by Weights: The items are sorted based on their weights before applying the Knapsack algorithm.
Sorting by Profits: The items are sorted based on their profits before applying the Knapsack algorithm.
Sorting by Profit/Weight Ratio: The items are sorted based on their profit-to-weight ratios before applying the Knapsack algorithm.

The Python script plot.py is provided for visualizing the time complexities of the three sorting strategies. It utilizes the matplotlib library for plotting.

After running the program and plotting the graphs, you can observe the impact of different sorting strategies on the time complexity of the Knapsack algorithm.

import matplotlib.pyplot as plt

weight_values = [
    (100000, 200000),
    (120000, 298800),
    (140000, 401200),
    (160000, 308700),
    (180000, 400500),
    (200000, 400300),
    (220000, 397500),
    (240000, 499900),
    (260000, 609600),
    (280000, 699800),
    (300000, 600300),
    (320000, 589600),
    (340000, 598700),
    (360000, 699800),
    (380000, 800500),
    (400000, 803000),
    (420000, 999200),
    (440000, 899600),
    (460000, 1100000),
    (480000, 899000),
    (500000, 1001100),
]

profit_values = [
    (100000, 13299800),
    (120000, 15199400),
    (140000, 17000000),
    (160000, 22155500),
    (180000, 25400600),
    (200000, 28320900),
    (220000, 27899400),
    (240000, 37493500),
    (260000, 32899400),
    (280000, 34099600),
    (300000, 33900200),
    (320000, 42990300),
    (340000, 47399700),
    (360000, 48999700),
    (380000, 44704400),
    (400000, 47800300),
    (420000, 54307300),
    (440000, 50700200),
    (460000, 52701300),
    (480000, 56750500),
    (500000, 54308900),
]

ratio_values = [
    (100000, 25288800),
    (120000, 27210000),
    (140000, 34010900),
    (160000, 42300200),
    (180000, 46603000),
    (200000, 50598400),
    (220000, 72591700),
    (240000, 74805100),
    (260000, 70908200),
    (280000, 70399700),
    (300000, 91507500),
    (320000, 85738000),
    (340000, 95747900),
    (360000, 94090300),
    (380000, 105592800),
    (400000, 104698900),
    (420000, 115890700),
    (440000, 123290400),
    (460000, 139235700),
    (480000, 151202100),
    (500000, 144500100),
]

x_weight, y_weight = zip(*weight_values)
x_profit, y_profit = zip(*profit_values)
x_ratio, y_ratio = zip(*ratio_values)

plt.plot(x_weight, y_weight, marker='s', linestyle='--', color='y', label='Weight Line')
plt.plot(x_profit, y_profit, marker='o', linestyle='-', color='g', label='Profit Line')
plt.plot(x_ratio, y_ratio, marker='^', linestyle='--', color='r', label='Ratio Line')

plt.xlabel('Input Values')
plt.ylabel('Seconds')
plt.title('Inputs Vs Time Graph for Knapsack Algo')
plt.legend()
plt.show()

![image](https://github.com/Aayushgupta218/Algorithms-and-complexities/assets/121601377/b5c01d02-a399-4774-b9f0-3356267d46ce)


