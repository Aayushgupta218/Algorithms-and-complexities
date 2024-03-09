In this, we are given with the starting and the ending time of the classes ,we are supposed to arrange the classes in such a way so that maximum classes can be held in a room.

TIME COMPLEXITY = O(n*logn)

//python code for plotting the graph for the three approaches ->

import matplotlib.pyplot as plt

duration_values = [
   (10000, 699700),
(12000, 1200000),
(14000, 1509300),
(16000, 1509600),
(18000, 1499900),
(20000, 1707000),
(22000, 2001400),
(24000, 2009200),
(26000, 2399800),
(28000, 2699900),
(30000, 2700600),
(32000, 3196200),
(34000, 3301800),
(36000, 3508800),
(38000, 3788400),
(40000, 4195500),
(42000, 4099200),
(44000, 4701800),
(46000, 4192100),
(48000, 4600800),
(50000, 4498400),
]

endtime_values = [
  (10000, 599700),
(12000, 810100),
(14000, 1000000),
(16000, 1315200),
(18000, 1209500),
(20000, 1506900),
(22000, 1995300),
(24000, 1809300),
(26000, 2321800),
(28000, 2288100),
(30000, 2500000),
(32000, 3199700),
(34000, 2901300),
(36000, 2904000),
(38000, 3209700),
(40000, 4210600),
(42000, 3497600),
(44000, 4884800),
(46000, 3690500),
(48000, 4682500),
(50000, 5499700),
]

startTime_values = [
(10000, 689100),
(12000, 809900),
(14000, 1606200),
(16000, 1604700),
(18000, 1701200),
(20000, 1699900),
(22000, 1800100),
(24000, 2196000),
(26000, 2299900),
(28000, 2400900),
(30000, 2499700),
(32000, 2608300),
(34000, 3198600),
(36000, 3205500),
(38000, 3302800),
(40000, 3390200),
(42000, 4022500),
(44000, 4106200),
(46000, 4598300),
(48000, 4602100),
(50000, 4492400),
]

x_duration, y_duration = zip(*duration_values)
x_endtime, y_endtime = zip(*endtime_values)
x_starttime, y_starttime = zip(*startTime_values)

plt.plot(x_duration, y_duration, marker='s', linestyle='--', color='y', label='Duration Line')
plt.plot(x_endtime, y_endtime, marker='o', linestyle='-', color='g', label='endtime Line')
plt.plot(x_starttime, y_starttime, marker='^', linestyle='--', color='r', label='starttime Line')

plt.xlabel('Input Values')
plt.ylabel('Seconds')
plt.title('Inputs Vs Time Graph for Activity Selection Algo')
plt.legend()
plt.show()


![image](https://github.com/Aayushgupta218/Algorithms-and-complexities/assets/121601377/c059dcc5-ed05-45aa-a870-99ddd4456c1d)

