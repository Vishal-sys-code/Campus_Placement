## Stick games I
After winning gold and silver in Indian Computing Olympiad 2014, Arun Gupta and Mani Iyer want to have some fun. Now they are playing a game on a grid made of n horizontal and m vertical sticks. Let us assume a grid where, n = 3 and m = 3. There are n + m = 6 sticks in total. There are n*m = 9 intersection points, numbered from 1 to 9. The rules of the game are very simple. The players move in turns. Arun Gupta won gold, so he makes the first move. During his/her move, a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point. A player will lose the game if he cannot make a move (i.e. there are no intersection points remaining on the grid at his move). Assume that both players play optimally. Who will win the game? FUNCTIONAL REQUIREMENTS: void print(int);
Input Format:

The first line of input contains two space-separated integers, n, and m (1 ≤ n, m ≤ 100).

Output Format:

Print a single line containing "Arun Gupta" or "Mani Iyer" (without the quotes), depending on the winner of the game.

Sample Input:

 2 2

Sample Output:

 Mani Iyer

 <hr>

## Serena and Mugs
Serena narrated an interesting game to her friends. The game goes like this. Initially, there is a table with an empty cup and n water mugs on it. Then all the players take turns to move. During a move, a player takes a non-empty mug of water and pours all the water from it into the cup. If the cup overfills, then we assume that this player has lost the game. As soon as Serena's friends heard of the game, they wanted to play it. Serena, on the other hand, wanted to find out whether her friends can play the game in such a way that there are no losers. You are given the volumes of all the mugs and the cup. Also, you know that Serena has (n - 1) friends. Determine if Serena's friends can play the game so that nobody loses. FUNCTIONAL REQUIREMENTS: int printresult(int*,int,int);
Input format:

The first line contains integers n and s (2 ≤ n ≤ 100; 1 ≤ s ≤ 1000) — the number of mugs and the volume of the cup. The next line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10). Number ai represents the volume of the i-th mug.

Output format:

In a single line, print "YES" (without the quotes) if her friends can play in the described manner, and "NO" (without the quotes) otherwise.

Sample input:

 3 4

 1 1 1

Sample output:

 YES

<hr>

## Queue
A bus stop queue has n groups of people. The i-th group from the beginning has ai people. Every 30 minutes an empty bus arrives at the bus stop, it can carry at most m people. Naturally, the people from the first group enter the bus first. Then go the people from the second group and so on. Note that the order of groups in the queue never changes. Moreover, if some group cannot fit all of its members into the current bus, it waits for the next bus together with other groups standing after it in the queue. Your task is to determine the number of buses needed to transport all n groups to the dacha countryside. FUNCTIONAL REQUIREMENTS: void queue(int,int,int*); .
Input Format:

The first line contains two integers n and m (1 ≤ n, m ≤ 100). The next line contains n integers: a1, a2, ..., an (1 ≤ ai ≤ m).

Output Format:

Print a single integer — the number of buses needed to transport all n groups to the dacha countryside.

Sample Input:

4 3

2 3 2 1

Sample Output:

3

<hr>

## Sum of even numbers and sum of odd numbers

Arun and Kalai were playing a puzzle game with a given set of numbers. They need to find the odd and even numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to solve the puzzle game and to win the mobile phone.
Input Format:

Input consists of n+1 integers. 

The first integer corresponds to ‘n’, the size of the array. 

The next ‘n’ integers correspond to the elements in the array. 

Assume that the maximum value of n is 15.

Output Format:

Refer to sample output for details.

Sample Input:

5

2

3

6

8

-1

Sample Output:

The sum of the even numbers in the array is 16

The sum of the odd numbers in the array is 2

<hr>

## Stock span

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. Now, you need to find out the span values for the given number of days and their daily prices. For example, if an array of 7 day's prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} . FUNCTIONAL REQUIREMENTS: void stockSpan(int,int*);
Input Format:

Input consists of n+1 integers. The first integer corresponds to n, the number of days. The next n integers correspond to stock prices on days 1, 2...n.

Output Format:

The output consists of n integers that correspond to the span values.

Sample Input:

7

100

80

60

70

60

75

85

Sample Output:

1

1

1

2

1

4

6

<hr>

## Array insertion

Arun and Ram were playing cards. Arun has 5 cards. Ram wants to insert a new card in between Arun's cards. Ram wants to find the position to insert the card. So help him to find the position to insert a certain card. If Ram inserts a card in a position other than the position of 5 cards, the game will be over. So play carefully. EXAMPLE: For example, consider an array having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step below after insertion a[1] = 1 , and a[2] = 2 and a[3] = 3.
Input & Output Format:

Assume that the maximum number of elements in the array is 20.

Sample Input:

Enter the number of elements in the array

5

Enter the elements in the array

1

2

3

4

5

Enter the location where you wish to insert an element

4

Enter the value to insert

10

Sample Output:

Array after insertion is

1

2

3

10

4

5

<hr>

## Functions – Array type

Write a program to find the type of array using functions. An array is said to be “Even” if all the elements in the array are even. An array is said to be “Odd” if all the elements in the array are odd. An array is said to be “Mixed” if it contains some odd elements and some even elements. Refer function specifications for the function details. The first argument corresponds to the number of elements in the array. The second argument corresponds to the pointer to an array. The return value of the function should be 1 if the array is Even. The return value of the function should be 2 if the array is Odd. The return value of the function should be 3 if the array is Mixed.
Input & Output Format:

Input consists of n+1 integers where n corresponds to the number of elements in the array.

The first integer corresponds to n and the next n integers correspond to the elements in the array.

Assume that the maximum number of elements in the array is 20.

Refer to the sample input and output for formatting specifications.

Sample Input & Output:

Enter the number of elements in the array

5

Enter the elements in the array

2

4

1

3

5

The array is Mixed

<hr>

## Matrix Addition

Raju has a square shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the element of a row into a column element and column element into a row element without altering the shape of the puzzle. Help raju to solve this puzzle. FUNCTIONAL REQUIREMENTS: int** createArray(int,int); int getElement(int**,int,int); int addMatrix(int**,int**,int**,int,int);
Input Format:

Enter the row and column of a matrix Enter the matrix

Output Format:

Addition of a matrix

Sample Input:

2

2

1

2

3

4

1

2

3

4

Sample Output:

2 4

6 8

<hr>

## Magic square

A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers. 

The first integer corresponds to the number of rows/columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No

<hr>

## Maximum element in each column

In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element in each column of the matrix.)
Input Format:

The input consists of (m*n+2) integers. 

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 10.

Output Format:

Refer to the sample output for details.

Sample Input:

3

2

4 5

6 9

0 3

Sample Output:

6

9

<hr>

## Maximum element in the matrix

Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room, students are arranged in the form of rows and columns. Raju needs to find the highest mark in this class. Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then the second row and so on.

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT & OUTPUT:

3

2

4 5

6 9

0 3

The maximum element is 9

<hr>

## Greatest sum

Seenu have a fruit shop. He is arranged the some set of fruits are column and row wise. Seenu needs to find which row and column has maximum number of fruits. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 6 8

2 5 1

3 8 2

Sum of rows is 15 8 13

Row 1 has maximum sum

Sum of columns is 6 19 11

Column 2 has maximum sum

<hr>

## Maximum element in each row

Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room, students are arranged in the form of rows and columns. Raju needs to find the highest mark in each rows. Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers. 

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT:

3

2

4 5

6 9

0 3

SAMPLE OUTPUT:

5

9

3

<hr>

## Sum of rows

Seenu have a fruit shop and arranged the some set of fruits in column and row wise. Seenu needs to find the total number of fruits in each rows. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 2 3

7 3 1

7 4 1

6

11

12

<hr>

Sum of Zig-Zag
Write a C++ program to find the sum of Zig-Zag pattern in a given matrix. FUNCTIONAL REQUIREMENTS: int sumZigZag(int, int, int **);
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT:

3

3

1 2 3

4 5 6

7 8 9

SAMPLE OUTPUT:

Sum of Zig-Zag pattern is 35

<hr>