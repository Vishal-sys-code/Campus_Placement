## Student details
Jeeva is the chairman of ABC university and he is planned to improve students education. So he is conducted meeting for all departments HODs. Write a program to help all department HODs to display student details. Create a structure called Student. struct Student { char name[30]; char department[20]; int yearOfStudy; float cgpa; }; Write a program to get the details of 'n' students and to display their details, sorted in ascending order based on the name.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places. 

SAMPLE INPUT & OUTPUT:

Enter the number of students

1

Enter the details of student 1

Enter name

krish

Enter department

mca

Enter year of study

3

Enter cgpa

7.6

Details of students

Student 1

Name : krish

Department : mca

Year of study : 3

CGPA : 7.6


Case 1
```
Input (stdin)
1
krish
mca
3
7.6
```
```
Output (stdout)
Enter the number of students
Enter the details of student 1
Enter name
Enter department
Enter year of study
Enter cgpa
Details of students
Student 1
Name:krish
Department:mca
Year of study:3
CGPA:7.6
```

<hr>

## Employee Structure

Write a C++ program to create a structure called employee with name, employee id, name, age designation and salary as data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan 

ID of the Employee : 1 

Age of the Employee : 24 

Designation of the Employee : Manager 

Salary of the Employee : 20000.00 

Case 1
```
Input (stdin)
Rajarajan
1
24
Manager
20000
```

Output (stdout)
```
Enter name:
Enter ID:
Enter age:
Enter designation:
Enter Salary:
Employee Details
Name of the Employee : Rajarajan
ID of the Employee : 1
Age of the Employee : 24
Designation of the Employee : Manager
Salary of the Employee : 20000
```
<hr>

## College

Create a structure called College. struct College { char name[100]; char city[100]; int establishmentYear; float passPercentage; } Write a program to get the details of 'n' colleges and to display their details, sorted by name in ascending order.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of colleges

3

Enter the details of college 1

Enter name

ACE

Enter city

Coimbatore

Enter year of establishment

2000

Enter pass percentage

98.5

Enter the details of college 2

Enter name

BCE

Enter city

Erode

Enter year of establishment

1990

Enter pass percentage

89.45

Enter the details of college 3

Enter name

DCE

Enter city

Chennai

Enter year of establishment

2008

Enter pass percentage

97.35

Details of colleges

College 1

Name : ACE

City : Coimbatore

Year of establishment : 2000

Pass percentage : 98.50

College 2

Name : BCE

City : Erode

Year of establishment : 1990

Pass percentage : 89.45

College 3

Name : DCE

City : Chennai

Year of establishment : 2008

Pass percentage : 97.35

Case 1
Input (stdin)
3
ACE
Coimbatore
2000
98.5
BCE
Erode
1990
89.45
DCE
Chennai
2008
97.35

Output (stdout)
Enter the number of colleges
Enter the details of college 1
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 2
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 3
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Details of colleges
College:1
Name:ACE
City:Coimbatore
Year of establishment:2000
Pass percentage:98.5
College:2
Name:BCE
City:Erode
Year of establishment:1990
Pass percentage:89.45
College:3
Name:DCE
City:Chennai
Year of establishment:2008
Pass percentage:97.35

<hr>

## Difference Between Two Time Periods

Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24 

8 15 23                                            

SAMPLE OUTPUT:                                                                        

4:0:1

Case 1
```
Input (stdin)
12 15 24
8 15 23

Output (stdout)
4:0:1
```

Case 2:
```
Input (stdin)
8 12 21
6 10 21

Output (stdout)
2:2:0
```

Case 3:
```
Input (stdin)
11 12 12
6 23 21

Output (stdout)
4:48:51
```

<hr>

## Add two distances in inch-feet system

Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7"

Case 1
```
Input (stdin)
22
4.7
23
7.9

Output (stdout)
46'-0.6"
```

Case 2:
```
Input (stdin)
14
4.5
22
4.5

Output (stdout)
36'-9"
```

Case 3:
```
Input (stdin)
21
7.8
31
7.5

Output (stdout)
53'-3.3"
```
<hr>