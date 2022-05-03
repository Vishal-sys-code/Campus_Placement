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