'''

HackerRank Question: MISSING NUMBER 60

You are given all numbers between 1,2, . . . ,n except one. Your task is to find the missing number.

Input Format

The first input line contains an integer n.
The second line contains n-1 numbers.
Each number is distinct and between 1 and n (inclusive).
Constraints

2 <= n <= 2 * 10^5
Output Format

Print the missing number.

Sample Input -

5
2 3 1 5

Sample Output -

4

'''

# Taking n as input
n = int(input())

# Storing numbers as list
list1 = list(map(int, input().split()))

# Finding Sum of list(numbers)
sum_list1 = sum(list1)

# Finding sum of n natural numbers
sum_natural_numbers = (n * (n + 1)) // 2

# Subtracting sum of natural numbers from sum of numbers will give the missing numbers
missing = sum_natural_numbers - sum_list1

# Printing missing number
print(missing)