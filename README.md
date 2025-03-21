# PicsartAcademy homeworks


## Assembly | Homework | Mar 16 
____________________________________
### Problem 1: Simple Arithmetic Calculator

Write a NASM program that:

Prompts the user to enter two integer numbers using scanf. Prompts the user to select an operation: 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division. Performs the selected operation. Displays the result using printf.

Requirements:
Use extern printf and extern scanf.
Properly declare format strings for input/output.
Handle division carefully (avoid division by zero).

### Problem 2: Sum of Numbers (Loop)
Write a NASM program that:

Prompts the user to enter a positive integer N using scanf. Uses a loop to calculate the sum of numbers from 1 to N. Prints the result using printf.

### Problem 3: Find the Maximum in an Array
Write a NASM program that:
Defines a hardcoded array of 10 signed integers. Iterates through the array using a loop. Finds and prints the maximum number using printf. 

Requirements:
Use indexed addressing to access array elements.
Use comparison and conditional jump instructions (cmp, jg, etc.).

## Nasm | Mar 17 | Practice
_________________________________

task: Write a program in the NASM Programming Language that calculates the power of b, where a and b are input by the user.

## Loops, if-else | Mar 19 | Homework 
______________________________

### Task 1:
Write a program that uses different loops (while, do/while, for) to print all the numbers from 0 to 10 on the screen, also in reverse order.
### Task2:
Enter two numbers: a and b. Print the number of all numbers in the range [a, b] that are divisible by 5 on the screen.
### Task 3:
Write a program that prints the numbers from 0 to 100 on the screen, following these rules:
1. If the number is evenly divisible by 3, print “Fizz” instead of that number on the screen
2. If the number is evenly divisible by 5, print “Buzz” instead of that number
3. If the number is evenly divisible by both 3 and 5, print “FizzBuzz” instead of that number
4. Simply print all the other numbers that do not satisfy the following conditions on the screen.
### Task 4:
Write a program that prints all the odd numbers in the range 0 to 100 on the screen.
### Task 5:
Write a program that calculates the factorial of an input number.
### Task 6:
Write a program that prints the inverted number of an input number on the screen. For example, 123 prints 321.
#Task 7:
Write a program that prints the digits of an input number on the screen in the correct order.
For example, 123 prints 1 , 2 , 3

## Loops, if-else | Mar 21 | Practice
_____________________________

### Task 1: 
Write a program that prints all the divisors of a given number on the screen.
### Task 2:
Write a program that calculates the power of the given number. For example, if 3 and 4 are entered, the program should print 81 on the screen.
### Task 3: 
Write a program that prints the nth Fibonacci number on the screen.
### Task 4: 
Write a program that checks whether the given number is an Armstrong number or not, and prints a message about the result on the screen.
A natural number with n digits is called an Armstrong number if the sum of the n powers of its digits is equal to that number (for example, 153=1^3 +5^3 +3^3 ).
### Task 5: 
Write a program that checks whether the given number is a lucky number or not. A lucky number is a number that contains only the digits 4 and 7. For example, 47, 744, and 477 are lucky numbers.

## Loops, if-else | Mar 21 | Homework
______________________________
Write a program in assembly language that prints the nth Fibonacci number on the screen.
Write a program that checks whether a given number is perfect or not. A perfect number is a number whose divisors sum to equal the number.
Write a program that allows the user to enter a number n, and prints the numbers 1 to n on the screen in the following format:

1

22

333

4444

Write a program that allows the user to enter a number n, and prints the numbers 1 to n on the screen in the following format:
1

2 3

4 5 6

7 8 9 10

Write a program that allows the user to enter a number n, and prints a square with side length n on the screen.
For example, print for 5

`* * * * *`

`* * * * *`

`* * * * *`

`* * * * *`

`* * * * *`


Write a program that allows the user to enter the number n, prints a square on the screen, where n is the length of the side.
For example, n = 5.

`* * * * *`

`*       *`

`*       *`

`*       *`

`* * * * *`

Write a program that allows the user to enter the number n, prints a triangle on the screen, where n is the height of the triangle.
For example, n = 5.

`         *`

`      *    *`

`    *         *`

`  *             *`

` *   *    *   *   *`

