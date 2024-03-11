// read and display an array
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void array(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
        array(n);
    else
        printf("Elements should be more than 0.");

    return 0;
}

void array(int n)
{
    int mark[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &mark[i]);
        printf("%d ", mark[i]);
    }
}

// Given an array of integers find the first repeating element.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    int n, a[MAX], temp = -1, i, j, repeat;
    scanf("%d", &n);
    if (n > 0 && n <= 10000)
    {
        for (i = 0; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    temp = j;
                    repeat = a[j];
                    break;
                }
            }
            if (temp != -1)
                break;
        }
        if (temp != -1)
        {
            printf("%d ", repeat);
        }
        else
            printf("No repeating element");
    }

    else
        printf("Invalid");

    return 0;
}

/* Question:Program to find the number of occurrences of an element in an array:::*/
#include <stdio.h>

int count(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[10], n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its occurrences: ");
    scanf("%d", &x);
    printf("%d occurs %d times in the array\n", x, count(arr, n, x));
    return 0;
}

// check a number is positive or negative
#include <stdio.h>

int main()
{
    int A;

    printf("Enter the number A: ");
    scanf("%d", &A);

    if (A > 0)
        printf("%d is positive.", A);
    else if (A < 0)
        printf("%d is negative.", A);
    else if (A == 0)
        printf("%d is zero.", A);

    return 0;
}

// C Program to Calculate Sum of Natural Numbers

#include <stdio.h>
int main()
{
    int i, s = 0;
    int n = 10;
    i = 1;

    while (i <= n)
    {
        s += i;
        i++;
    }
    // printing the result
    printf("Sum = %d", s);
    return 0;
}

// C Program To Check Neon Number
//  C program to demonstrate whether
//  a number is Neon number or not
#include <stdio.h>

int Check_Neon_Number(int num)
{

    // Calculating the square of the number
    int square = num * num;

    // Copying the square in a variable
    // to extract the digit
    int n = square;

    // Declaring a variable to store the digits
    int digit;

    // Initializing a variable to
    // calculate the sum of digits
    int sum = 0;

    // To calculate the sum of digits
    while (n != 0)
    {

        // Extracting the digit
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    // Checking the condition of a Neon Number
    if (sum == num)
        return 1; // If condition is true.
    else
        return 0; // If condition is false.
}

// Driver Code
int main()
{
    int num = 9;

    // Calling the function
    int ans = Check_Neon_Number(num);
    if (ans == 1)

        // The number is Neon
        printf("true");
    else

        // The number is not Neon
        printf("false");
    return 0;
}

/* Question: How can we find the Fibonacci series up to n terms in C? */
#include <stdio.h>

void print_fibonacci(int n)
{
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", a);
        }
        else if (i == 1)
        {
            printf("%d ", b);
        }
        else
        {
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
    }
    else
    {
        print_fibonacci(n);
    }

    return 0;
}

/* Question: print star pattern ? */
#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= rows - i; ++j)
        {
            printf("  ");
        }

        for (j = 1; j <= 2 * i - 1; ++j)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

/* Question: How can we check if a number is prime or not in C? */
#include <stdio.h>

int main()
{
    int n = 17, i, P = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            P = 0;
            break;
        }
    }
    if (p == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}

/* Question: print fist 10 odd numbers uisng loops*/
#include <stdio.h>
#include <stdio.h>

int main()
{
    int i = 1, count = 10;
    while (count > 0)
    {
        printf("%d ", i);
        i += 2;
        count--;
    }
    printf("\n");
    return 0;
}

// Given an array, Count leaders of an array. An element is called as a leader if there exists no element greater to it on the RHS.
void s(int[], int);
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    s(a, n);
    return 0;
}

void s(int a[100], int n)
{
    if (n >= 0)
    {
        int i, j, count = 0;
        j = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] <= j)
            {
                count++;
            }
            j = a[i];
        }
        printf("%d", count);
    }
    else
        printf("Invalid");
}

// A primary teacher intended to teach addition of decimal numbers. She chosen n different colors and kept in two rows systematically. She asked kids to perform addition of similar colors in row kept parallel. Use modular C program to achieve the given task. (Add two arrays index wise).
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 50
void read_array(float color[MAX], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &color[i]);
    }
}
void display_array(float color[MAX], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%0.1f ", color[i]);
}
void sum_array(float color1[MAX], float color2[MAX], float sum_color[MAX], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        sum_color[i] = color1[i] + color2[i];
    }
}
int main()
{
    int n;
    float color1[MAX], color2[MAX], sum_color[MAX];
    scanf("%d", &n);
    if (n > 0)
    {
        read_array(color1, n);
        read_array(color2, n);
        sum_array(color1, color2, sum_color, n);
        display_array(sum_color, n);
    }
    else
        printf("Rows should be more than 0.\n");
    return 0;
}

// Develop a modular c program to read the two dimensional array and display the two dimensional array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define row 10
#define col 10
void read_array(int m, int n, int a[row][col])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display_array(int m, int n, int a[row][col])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n, a[row][col];
    scanf("%d", &m);
    scanf("%d", &n);
    if (m > 0 && n > 0)
    {
        read_array(m, n, a);
        display_array(m, n, a);
    }
    else
        printf("Rows and columns should be more than 0.");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// LCM of Two Numbers in C
//  C program to find LCM of
//  two numbers
#include <stdio.h>

// Driver code
int main()
{
    int x = 15, y = 25, max;
    max = (x > y) ? x : y;

    // While loop to check if max variable
    // is divisible by x and y
    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            printf("The LCM of %d and %d is %d.", x, y,
                   max);
            break;
        }

        ++max;
    }

    return 0;
}

// check even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if (num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}

// Program to Check Vowel or consonant
#include <stdio.h>
int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

// Program to Check Leap Year
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // all other years are not leap years
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}

// Check Positive or Negative
#include <stdio.h>

int main()
{

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0)
    {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");

    return 0;
}

// Multiplication Table Up to 10
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}

// Program to Check Alphabet
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}

// Program to Print English Alphabets
#include <stdio.h>
int main()
{
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}

// Power of a Number Using the while Loop
#include <stdio.h>
int main()
{
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}

// Program to Check Palindrome
#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

// Program to Check Prime Number
#include <stdio.h>

int main()
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

// Check Armstrong Number of three digits
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

// Factors of a Positive Integer
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// Simple Calculator using switch Statement
#include <stdio.h>

int main()
{

    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

// Example 1: C Program to Convert Binary Number to Decimal
//  convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main()
{

    long long n;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    printf("%lld in binary = %d in decimal", n, convert(n));

    return 0;
}

// function definition
int convert(long long n)
{

    int dec = 0, i = 0, rem;

    while (n != 0)
    {

        // get remainder of n divided by 10
        rem = n % 10;

        // divide n by 10
        n /= 10;

        // multiply rem by (2 ^ i)
        // add the product to dec
        dec += rem * pow(2, i);

        // increment i
        ++i;
    }

    return dec;
}

// GCD Using for loop and if Statement
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

// Reverse an Integer
#include <stdio.h>

int main()
{

    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
