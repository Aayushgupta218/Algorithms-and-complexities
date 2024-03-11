Sum of Numbers Benchmark
Overview
This C++ program benchmarks the time taken to compute the sum of random numbers in an array. The array sizes range from 100,000 to 400,000 with increments of 10,000. The sum calculation is performed 10 times for each array size, and the average time is measured.

Files
main.cpp: C++ implementation of the sum of numbers benchmark.
gen_numbers: Function to generate an array of random numbers.
sum_of_numbers: Function to calculate the sum of numbers in an array.
main: Main program that performs the benchmark.
Output The program outputs the average time (in nanoseconds) taken to calculate the sum for each array size. The results can be analyzed to observe the trend in execution time as the array size increases.

Time Complexity
Generating Random Numbers (gen_numbers function):

O(n), where n is the size of the array. Calculating the Sum (sum_of_numbers function):

O(n), where n is the size of the array. Benchmark Loop:

O(n * 10), where n is the array size, due to the repeated sum calculations.

Space Complexity
Generating Random Numbers (gen_numbers function):

O(n), where n is the size of the array. Calculating the Sum (sum_of_numbers function):

O(1), constant space for the sum variable. Benchmark Loop:

O(n), due to the dynamically allocated array in the gen_numbers function.

Notes
The overall space complexity can be considered O(n) since the benchmarking process involves the generation of arrays with varying sizes.

The time and space complexity of the benchmarking process can be affected by the system's hardware, compiler optimizations, and other factors.
