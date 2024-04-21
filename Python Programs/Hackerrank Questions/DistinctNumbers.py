'''

HackerRank Question: DISTINCT NUMBERS 8

You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input Format

The first input line has an integer n: the number of values. The second line has n integers x_1,x_2, . . . ,x_n.

Constraints

1 <= n <= 2 * 10^5 1 <= x_i <= 10^9

Output Format

Print one integers: the number of distinct values.

Sample Input -

5
2 3 2 2 3
Sample Output -

2

'''

# Taking n as input
n = int(input())

# Storing numbers as list
list1 = list(map(int, input().split()))

# Directly converting to set and printing length of set
# Set only contains unique element in python
print(len(set(list1)))