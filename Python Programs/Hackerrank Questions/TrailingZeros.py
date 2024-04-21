'''

HackerRank Question: TRAILING ZEROS 15

Your task is to calculate the number of trailing zeros in the factorial n!. For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input Format

The only input line has an integer n.

Constraints

1 <= n <= 10^9

Output Format

Print the number of trailing zeros in n!.

Sample Input - 20

Sample Output - 4

Explanation - 20! = 2432902008176640000 and it has 4 trailing zeros.

'''

n = int(input())

factor = 5
ans = 0

# Counting the total numbers of factors of 5
# This factors contribute to trailing zeros at end
while(factor <= n):

    ans += n // factor

    factor *= 5

print(ans)
