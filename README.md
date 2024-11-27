Combination Sum 1


Given an array of distinct integers A and a target value val, find all unique combinations of integers from A where their sum is equal to val.

Note: Each integer may be used multiple times in the combination.

Example
A: [1, 2]
val: 4
Combinations: [
  [1, 1, 1, 1],
  [1, 1, 2],
  [2, 2]
]
Testing
Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case the input has three lines.

An integer ‘n’ denoting the length of the array A.
n space-separated unique integers denoting the elements of the array A.
An integer ‘val’ denoting the target value.
Output Format
For each test case, the output has the following lines:

The first line contains an integer ‘m’ denoting the total no of distinct combinations.
The next m line contains space-separated integers denoting elements in that particular combination.
Sample Input
3
2
1 2
4
5
1 3 4 5 6
4
5
1 2 3 4 8
7
Expected Output
3
1 1 1 1
1 1 2
2 2
3
1 1 1 1
1 3
4
11
1 1 1 1 1 1 1
1 1 1 1 1 2
1 1 1 1 3
1 1 1 2 2
1 1 1 4
1 1 2 3
1 2 2 2
1 2 4
1 3 3
2 2 3
3 4
