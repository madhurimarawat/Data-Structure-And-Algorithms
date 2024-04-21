'''

HackerRank Question: Movie Festival

In a movie festival n movies will be shown. You know the starting and ending time of each movie.
What is the maximum number of movies you can watch entirely?

Input Format

The first input line has an integer n: the number of movies. After this, there are n lines that describe the movies. Each line has two integers a and b: the starting and ending times of a movie.

Constraints

1 <= n <= 2 * 10^5 1 <= a < b <= 10^9

Output Format

Print one integer: the maximum number of movies.

Sample Input -

3
3 5
4 9
5 8

Sample Output -

2

Explanation -
You can watch the first and the third movie, that is {3, 5} and {5, 8}.

'''

# This will find the maximum number of movies
def max_movies(n, movies):
    # Sort the movies based on their ending times
    movies.sort(key=lambda x: x[1])

    # Initializing variables
    count = 0
    last_end_time = 0

    # Iterating through the sorted movies
    for start_time, end_time in movies:

        # Check if the movie can be watched without overlapping
        if start_time >= last_end_time:

            count += 1
            last_end_time = end_time

    return count

# Input
n = int(input())
movies = [list(map(int, input().split())) for _ in range(n)]

# Printing Output
print(max_movies(n, movies))