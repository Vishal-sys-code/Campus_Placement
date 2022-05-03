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