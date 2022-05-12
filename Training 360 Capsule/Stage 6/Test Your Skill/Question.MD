## Automated Dictation Evaluation I
These days kids are introduced to computers at a very early age and in some schools, the dictation test is conducted using computers. The teachers found it a bit difficult to evaluate these tests and they requested the school management to lessen their burden by automating this task. The 12th class students are learning C++ programming and they took up the task of automating the dictation evaluation. You need to check if the given string is equal to the correct string to evaluate each student. Can you please help them out? Write a C++ program to compare 2 strings using strcmp() function.

INPUT FORMAT:

Input consists of two strings.

Assume that the maximum length of the string is 50 and it contains only alphabets.

OUTPUT FORMAT:

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

Excellent

Excellent

It is correct

Case1: 
``` 
Input (stdin)
FACE
FACE

Output (stdout)
It is correct
```
Case2: 
```
Input (stdin)
CodeLab
Code

Output (stdout)
It is wrong
```
Case 3: 
```
Input (stdin)
Ball
Ball

Output (stdout)
It is correct
```

<hr>

## Nursery Admission
The kids need to clear a simple test to secure admission in the nursery class. They need to spell their name and they also need to tell the number of letters in their name. Some of the kids had very long names and the interview panel members found it time-consuming to count the number of letters in the name. One of the panel members has just started to learn programming and she decided to write a C++ program to count the number of charaters in the name. She knew that it was an easy task as the good old strlen function is availabe in C++. Can you help her out in this task? Write a C++ program to find the number of characters in the string.
Input Format:

Input consists of a single string. 

Assume that the maximum length of the string is 50 and it contains only alphabets.

Output Format:

Refer sample input and output for formatting specifications.

Sample Input:

Punitha

Sample Output:

The number of letters in the name is 7

Case1:
```
Input (stdin)
Punitha

Output (stdout)
The number of letters in the name is 7
```

Case2:
```
Input (stdin)
Siva

Output (stdout)
The number of letters in the name is 4
```

Case3:
```
Input (stdin)
Ram

Output (stdout)
The number of letters in the name is 3
```

<hr>

Special school
A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing the letters backward or in reverse. Once special care is taken to correct this issue and once they are introduced to words, they will start writing the words in the proper format. The teachers do not want to discourage the children at the start itself and they have decided to mark the words written in reverse also as correct. Can you please help the teacher in correcting the answer sheets by writing a C++ program? Write a C++ program to check whether the second word is the reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings. 

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.

Sample input &output

Excellent

tnellecxE

It is correct

Case1:
```
Input (stdin)
Excellent
tnellecxE

Output (stdout)
It is correct
```

Case2:
```
Input (stdin)
Excellent
tneilecxE

Output (stdout)
It is wrong
```

Case3: 
```
Input (stdin)
Bike
ekiB

Output (stdout)
It is correct
```

<hr>

## Remove character except alphabets

In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program

Case 1:
```
Input (stdin)
Code&^L5AB

Output (stdout)
CodeLAB
```

Case 2:
```
Input (stdin)
Fresh214&grad

Output (stdout)
Freshgrad
```

Case 3:
```
Input (stdin)
BI*0^KE

Output (stdout)
BIKE
```

<hr>

## WORDAKSHARI
Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari. The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. The following rules need to be followed while playing this game. (ii) All other words have to begin with the last letter of the previous word (iii) No words can be repeated. write a program to print the wordakshari chain.
Input Fromat:

Input consists of n+1 lines.

The first n lines contain strings corresponding to the words in the chain.

The last line of input contains the string #### to mark the end of input.

Output Format:

The output consists of the valid wordakshari chain.

The first word can begin with any letter.

Sample Input:

architect

tailor

referee

electrician

nurse

blacksmith

####

Sample Output:

architect

tailor

referee

electrician

nurse

Case 1: 
```
Input (stdin)
oracle
error
rohit
####

Output (stdout)
oracle
error
rohit
```

<hr>


## Counting
These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase and lowercase. Refer sample input and output for formatting specifications.

Sample Input:

This program is very easy 2 complete

Sample Output:

Vowels : 10

Consonants : 19

White spaces : 6

Digits : 1

Symbols : 0

Case 1:
```
Input (stdin)
At 16 years of age, Sachin was supposed to face the likes of Wasim Akram and Waqar Younis.

Output (stdout)
Vowels:29
Consonants:40
White Spaces:17
Digits:2
Symbols:2
```

Case 2:
```
Input (stdin)
The main contribution by Sachin was the way he changed the opening in ODI cricket.

Output (stdout)
Vowels:25
Consonants:42
White Spaces:14
Digits:0
Symbols:1
```

Case 3:
```
Input (stdin)
Australia in those days was termed as the invincibles. Playing against Australia was always the toughest challenge that a batsman can face in those days.

Output (stdout)
Vowels:49
Consonants:78
White Spaces:24
Digits:0
Symbols:2
```

<hr>