This notes are generated with the help of w3 school

---------------##########  C Tutorial  ##########-----------


Developer :   Dennis Ritchie at Bell Laboratories

       Launched in 1972

C is very powerful; it has been used to develop operating systems, databases, applications, etc.

The main reason for its popularity is because it is a fundamental language in the field of computer science

C is strongly associated with UNIX OS [which we currently use]


why learn c?

If we know C, we have no problem learning other programming language such as Java, Python, C++, C# etc

C is very versatile; it can be used in both applications and technologies


DIFFERENCE BETWEEN C & C++ :

c++ was developed as an extension of c, and both languages have almost the same syntax

The main difference between c and c++ is that c++ supports classes and objects, while c does not





---------------		GET STARTED	    --------------

To start using c, we need two things:

	. A text editor, like notepad, VS code to write C 	code
	. A compiler, like GCC, to translate the C code 	into a language that the computer will understand


---------------         QUICKSTART          ---------------

write the following c code:


1	#include <stdio.h>
2	
3	int main() {
4		printf("Hello world!");
5		return 0;
6	}


let's break it down

Line 1: #include <stdio.h> is a header file library
Line 2: a blank line. C ignores white space. But we use it to make code more readable
Line 3: main() is called as function. Any code inside its curly brackets {} will be executed.
Line 4: printf() is another function used to output/print text/number to the screen.
Line 5: return 0 ends the main() function.
Line 6: Do not forget to add the closing curly bracket } to actually end the main function.

It is an important to end the statement with a semicolon ;

----------------       STATEMENTS          --------------

A computer program is a list of "instructions" to be "executed" by a computer
In a programming language, these programming instructions are called statements.
The above code statements instructs the computer to print "Hello world" to screen

---------------       MANY STATEMENTS       --------------

Most C programs contain many statements.
The statements are executed, one by one in same order as they are written.


---------------       DOUBLE QUOTES          --------------

When you are working with text, it must be wrapped inside double quotations ""


-------------- NEW LINE/ESCAPE LINE CHARACTER  ---------------

To insert a new line we can use "\n" character inside double quotations
This is also called as escape sequence

examples of other valid escape sequences are:
	
	\t	creates a horizontal tab
	\\	inserts a backslash character (\)
	\"	inserts a double quote character

----------------	COMMENTS	-------------------

comments can be used to explain code, and make it more readable

comments are of two types single-lined or multi-lined

a single line comment written after entering  //  (forward slashes)

a multi-line comment written between /* and */


----------------	VARIABLES	-------------------

Variables are containers for storing data values, like numbers and characters.
In C, there are different types of variable, for example:
	
	. int - stores integer (whole numbers)
	. float - stores floating point number
	. char - store single characters

----------------	DECLARING [CREATING] VARIABLES	--------------

To create a variable, specify the type and assign it a value:

SYNTAX
	type variableName = value;

ex:
	int myNum = 15;

---------------		FORMAT SPECIFIERS	-------------------

Format specifiers are used together with printf() function to tell the compiler what type of data the variable is storing.

format specifier starts with a percentage sign %, followed by a character.

ex:
	To output the value of int variable, use the format specifier %d surrounded by double quotes "" inside the printf()

	int myNum = 15;
	printf("%d", myNum);  //outputs 15

To print other types, use %c for char
			  %f for float

To print different types in a single printf() function, you can use the following:
	
	int myNum = 15;
	char myLetter = 'D';
	printf("My number is %d and my letter is %c", myNum, myLetter)

You can also just print a value without storing it in a variable, as long as you use the correct format specifier:

	printf("my favourite number is %d", 15);


basic format specifiers:

	%d or %i	int
	%lu		longint (unsigned)
	%f or %F	float
	%lf		double
	%c		char
	%s		string

---------------------	CHANGE VARIABLE VALUES   -------------------

If you assign a new value to an existing variable, it will overwrite the previous value:

	int myNum = 15;
	myNum = 10;	//now myNum is 10

You can also assign the value of one variable to another:

	int myNum = 15;
	int myOtherNum = 23;
	
	myNum = myOtherNum;	//This will assign 23 to myNum


------------------    ADD VARIABLES TOGETHER    -------------------

To add a variable to another variable, you can use + operator:

int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);

-----------------     DECLARE MULTIPLE VARIABLES    -------------

To declare more than one variable of same type, use a comma-separated list:

	int x = 5, y = 6, z =50;
	printf("%d", x+y+z);

You can also assign the same value to multiple variables of the same type:

	int x,y,z;
	x = y = z = 50;
	printf("%d", x+y+z)

----------------     C Variable Names (identifiers)    ---------------

C variable Names

All C variables must be identified with unique names.
These unique names are called identifiers
Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume)

Note: It is recommended to use descriptive names in order to create understandable and maintainable code

The general rules for naming variables are:

	. Names can contain letters, digits and underscores
	. Names must begin with  letter or an underscore(_)
	. Names are case-sensitive (i.e, myVar and myvar are different)
	. Names cannot contains whitespace or special characters
	. Reserved words (such as int) cannot be used as names


----------------	DATA TYPES	---------------------

The data type specifies the size and type of information the variable will store

	int
	float
	double
	char

-------------	char	--------------

The char data type is used to store a single character

The character must be surrounded by single quotes like 'A' or 'c', and we use the %c format specifier to print it:

	char myGrade = 'A';
	printf("%c", myGrade);

Alternatively, if you are familiar with ASCII you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes ('') as they are numbers:

	char a = 65, b = 66, c = 67;
	printf("%c", a);	//A as per ASCII
	printf("%c", b);	//B as per ASCII	


for reference above is ASCII table:

The 0-31 are all the control characters used for controlling

NUL	00	null character
SOH	01	start of header
STX	02	start of text
ETX	03	end of text
EOT	04	end of transmission
ENQ	05	enquiry
ACK	06	acknowledge
BEL	07	bell (ring)
BS	08	backspace
HT	09	horizontal tab
LF	10	line feed
VT	11	vertical tab
FF	12	form feed
CR	13	carriage return
SO	14	shift out
SI	15	shift in
DLE	16	data link escape
DC1	17	device control 1
DC2	18	device control 2
DC3	19	device control 3
DC4	20	device control 4
NAK	21	negative acknowledge
SYN	22	synchronize
ETB	23	end transmission block
CAN	24	cancel
EM	25	end of medium
SUB	26	substitute
ESC	27	escape
FS	28	file separator
GS	29	group separator
RS	30	record separator
US	31	unit separator
 	 	 
DEL	127	delete (rubout)

Below are the above 31 control characters

	32	space
!	33	exclamation mark
"	34	quotation mark
#	35	number sign
$	36	dollar sign
%	37	percent sign
&	38	ampersand
'	39	apostrophe
(	40	left parenthesis
)	41	right parenthesis
*	42	asterisk
+	43	plus sign
,	44	comma
-	45	hyphen
.	46	period
/	47	slash
0	48	digit 0
1	49	digit 1
2	50	digit 2
3	51	digit 3
4	52	digit 4
5	53	digit 5
6	54	digit 6
7	55	digit 7
8	56	digit 8
9	57	digit 9
:	58	colon
;	59	semicolon
<	60	less-than
=	61	equals-to
>	62	greater-than
?	63	question mark
@	64	at sign
A	65	uppercase A
B	66	uppercase B
C	67	uppercase C
D	68	uppercase D
E	69	uppercase E
F	70	uppercase F
G	71	uppercase G
H	72	uppercase H
I	73	uppercase I
J	74	uppercase J
K	75	uppercase K
L	76	uppercase L
M	77	uppercase M
N	78	uppercase N
O	79	uppercase O
P	80	uppercase P
Q	81	uppercase Q
R	82	uppercase R
S	83	uppercase S
T	84	uppercase T
U	85	uppercase U
V	86	uppercase V
W	87	uppercase W
X	88	uppercase X
Y	89	uppercase Y
Z	90	uppercase Z
[	91	left square bracket
\	92	backslash
]	93	right square bracket
^	94	caret
_	95	underscore
`	96	grave accent
a	97	lowercase a
b	98	lowercase b
c	99	lowercase c
d	100	lowercase d
e	101	lowercase e
f	102	lowercase f
g	103	lowercase g
h	104	lowercase h
i	105	lowercase i
j	106	lowercase j
k	107	lowercase k
l	108	lowercase l
m	109	lowercase m
n	110	lowercase n
o	111	lowercase o
p	112	lowercase p
q	113	lowercase q
r	114	lowercase r
s	115	lowercase s
t	116	lowercase t
u	117	lowercase u
v	118	lowercase v
w	119	lowercase w
x	120	lowercase x
y	121	lowercase y
z	122	lowercase z
{	123	left curly brace
|	124	vertical bar
}	125	right curly brace
~	126	tilde



If you try to store more than a single character, it will only print the last character:

	char myText = 'Hello';
	printf("%c", myText);	// returns only o character


-----------------	Numeric Type	--------------

Use int when you need to store a whole number without decimals, like 35 to 1000 and float or double when you need a floating point number like 9.99 or 3.14515

	int myNum = 1000;
	printf("%d", myNum);	//This will return whole number

	
	float myNum = 5.57;
	printf("%f", myNum);	//This will return floating point number till 6-7 decimal places


	double myNum = 16.86;
	printf("%lf", myNum);	//This will return double floating point number till 15-16 decimal places


----------------	Scientific Numbers	---------------

A floating point number can also be a scientific number with an "e" to indicate the power of 10:

	float f1 = 35e3;	//which mean 35*10^3
	double d1 = 12E4;	//which mean 12*10^4

	printf("%f\n", f1);	//35000.0000
	printf("%lf", d1);	//120000.0000

Precision control

we can control the precisions after float point by mansion the digit following . dot
ex:
	float myFloatNum = 3.5;
	printf("%f\n", myFloatNum);	//3.50000
	printf("%.2f\n", myFloatNum);	//returns only 2 precisions 3.50


-------------------	GET THE MEMORY SIZE	-------------------

int	2 or 4 bytes
float	4 bytes
double	8 bytes
char	1 byte

The memory size refers to how much space a type occupies in the computers memory

To actually get the size (in bytes) of a data type or variable, use the sizeof operator:

	int myInt;
	printf("%lu\n", sizeof(myInt));		//4


-----------------------------------------------------------------------

You have to convert the value of one data type to another type. This is known as type conversion

ex:
If we try to divide two integer, 5 by 2, we would expect the result to be 2.5. But since we are working with integers, the following will just output 2

There are two types of conversion in C:
	1. Implicit conversion (Automatically)
	2. Explicit conversion (Manual)

we can convert float into int as well as int into float by just applying format specifier into printf() function which is explicit conversion

You can also place the type in front of the variable:

	int num1 = 5;
	int num2 = 2;
	float sum = (float) num1 / num2;

	printf("%f", sum);	//2.50000

-------------------------------------------------------------------------

1. Constants

If we don't want others to change existing variable values, you can use 'const' keyword

This will declare the variable as "constant", which means unchangeable and read-only

	const int myNum = 15; 	//myNum will always be 15

It is considered as good practice to declare constants variable with Uppercase

2. Operators

Operators are used to perform operations on variables and values.

C divides the operators into the following groups:

	. Arithmetic operators
	. Assignment operators
	. Comparison operators
	. Logical operators
	. Bitwise operators

	. Arithmetic Operators

+	Addition	Adds together two values		x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values			x * y	
/	Division	Divides one value by another		x / y	
%	Modulus	Returns the division remainder			x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x


	. Assignment operator

=	x = 5	x = 5	
+=	x += 3	x = x + 3	
-=	x -= 3	x = x - 3	
*=	x *= 3	x = x * 3	
/=	x /= 3	x = x / 3	
%=	x %= 3	x = x % 3	
&=	x &= 3	x = x & 3	
|=	x |= 3	x = x | 3	
^=	x ^= 3	x = x ^ 3	
>>=	x >>= 3	x = x >> 3	
<<=	x <<= 3	x = x << 3


	. Comparison operator

==	Equal to			x == y		
!=	Not equal			x != y	
>	Greater than			x > y		
<	Less than			x < y		
>=	Greater than or equal to	x >= y	
<=	Less than or equal to		x <= y	


	. Logical Operator

&& 	AND	x < 5 &&  x < 10	
|| 	OR	x < 5 || x < 4	
!	NOT	!(x < 5 && x < 10)


Booleans

Very often, in programming, you will need a data type that can only have one of two values, like:

	Yes/No
	On/Off
	True/False

For this, C has a bool data type, which is known as Booleans.

Booleans represent values that are either true or false

In C, the bool type is not a built-in data type, like int or char.

You must import the following header file to use it:

	#include <stdbool.h>

A Boolean variable is declared with the bool keyword and can take the values  true or false

	bool isProgrammingFun = true;
	bool isFishTasty = false;

Before trying to print the Boolean variables, you should know that Boolean values are returned as integers:
	
	. 1 represents true
	. 0 represents false

Therefore, you must use the %d format specifier to print a Boolean value
However, it is more common to return a Boolean value by comparing values and variables.


Comparing values and variables

Comparing values are useful in programming, because it helps us to find answers and make decisions.

ex.:
we can use comparison operator, such as greater than > operator, to compare two values

we can also compare two same data type variables


***************      If...Else       ***********

C has the following conditional statements:

. Use if to specify a block of code to be executed, if a specified condition is true

	if (condition) {
	}

. Use else to specify a block of code to be executed, if the same condition is false

	if (condition) {
	// block of code to be executed if the condition is true
	} else {
	// block of code to be executed if the condition is false
	}

. Use else if to specify a new condition to test, if the first condition is false

	if (condition) {
	// block of code to be executed if condition1 is true
	} else if {
	// block of code to be executed if the condition1 is false and condition2 is true
	} else {
	// block of code to be executed if the condition1 is false and condition2 is false
	}

Short hand if..else (Ternary Operator):

	variable = (condition) ? expressionTrue : expressionFalse;

ex:
Instead of writing:
	int time = 20;
	if (time < 18) {
  		printf("Good day.");
	} else {
  		printf("Good evening.");
	}

we can simply write:
	int time = 20;
	(time < 18) ? printf("Good day.") : printf("Good evening.");


. Instead of writing many if..else statements, you can use the switch statement
. The switch statement selects one of many code blocks to be executed
. Use switch to specify many alternative blocks of code to be executed

	switch (expression) {
	case x:
		//code block
		break;
	case y:
		//code block
		break;
	default:
		//code block
	}

This is how it works:

. The switch expression is evaluated once
. The value of the expression is compared with the values of each case
. If there is a match, the associated block of code is executed
. The break statement breaks out of the switch block and stops the execution
. The default statement is optional, and specifies some code to run if there is no case match

ex:
	
	int day = 4;
	switch (day) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
	}

	// outputs "Thursday" (day 4)

When C reaches a break keyword, it breaks out of the switch block.

. The default keyword specifies some code to run if there is no case match:

	int day = 4;
	
	switch(day) {
		case 6:
    			printf("Today is Saturday");
    			break;
		case 7:
    			printf("Today is Sunday");
    			break;
		default:
			printf("Looking forward to the weekend");
	}

	// outputs "Looking forward to the weekend"


**************   Loops     *************

1. While Loop

The while loop loops through a block of code as long as specified condition is true

while (condition) {
	// code block to be executed
};

2. Do/While loop

The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

do {
	// code block to be executed
}
while (condition);

3. For Loop

When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

for (expression 1; expression 2; expression 3) {
	// code block to be executed
}

Expression 1 is executed (one time) before the execution of the code block.

Expression 2 defines the condition for executing the code block.

Expression 3 is executed (every time) after the code block has been executed.

4. Nested Loops

It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop":

ex:
	int i, j;
	
	//outer loop
	for (i = 1; i<= 2; ++i) {
		printf("Outer: %d\n", i);	// Executes 2 times

	//inner loop
	for (j = 1; j <= 3; ++j) {
		printf("Intter: %d\n", j);	// Executes 6 times (2*3)
		}
	}


***************  Break & Continue   ***************

The break statement can also be used to jump out of a loop.

ex:
	int i;
	
	for (i=0; i<10; i++) {
		if (i == 4) {
			break;
		}
		printf("%d\n", i);
	}

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

ex:
	int i;
	
	for (i=0; i<10; i++) {
		if (i == 4) {
			continue;
		}
		printf("%d\n", i);
	}


we can also use break and continue in while loops:

ex:	
1.	int i = 0;

	while (i < 10) {
		if (i == 4) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

2.	int i = 0;

	while (i < 10) {
		if (i == 4) {
			continue;
		}
		printf("%d\n", i);
		i++;
	}


----------------	Arrays		------------

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array. define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type

ex:
	int myNumber[] = {25,50,75,200}

Access the Elements of an array

To access an array element, refer to its index number.
Array indexes start with 0: [0] is the first element & [1] is the second


Change an Array Element

To change the value of a specific element, refer to the index number:

ex:
	int myNumbers[] = {25, 50, 75, 100};
	myNumbers[0] = 33;

	printf("%d", myNumbers[0]);	//33


Loop Through an Array

You can loop through the array element with the for loop
ex:
	int myNumber[] = {25, 50, 75, 100};
	int i;
	
	for (i = 0; i < 4; i++) {
		printf("%d\n", myNumber[i]);
	}

set Array Size

Another common way to create arrays, is to specify the size of the array, and add elements later:

ex: 
	// Declare an array of four integers:
	int myNumber[4];
	
	//Add elements
	myNumbers[0] = 25;
	myNumbers[1] = 50;
	myNumbers[2] = 75;
	myNumbers[3] = 100;

we are not able to change the size of the array later after creation

Avoid mixing data type


Get Array Size or Length

To get the size of an array, you can use the sizeof operator:
ex:
	int myNumbers[] = {10, 25, 50, 75, 100};
	printf("%lu", sizeof(myNumbers));	//20

The result shows 20 rather then 5 because it shows the size of an array as we discussed earlier int datatype usually takes 4 bytes so in above example 4 X 5 = 20 it calculates 4 bytes for 5 items and the result is 20.

when you just want to find out how many elements an array has, you can use the following formula

	int myNumbers[] = {10, 25, 50, 75, 100};
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	
	printf("%d", length)	//5


----------------	MULTI-DIMENSIONAL ARRAY		----------------


Above we learned about the arrays which is known as single dimensional arrays.
If you want to store data as tabular form, like a table with rows and columns, you need to get familiar with multi-dimensional array
A multidimensional array is basically an array of arrays.
Arrays can have any number of dimensions.

Two-Dimensional Arrays:

A 2D array is known as a matrix (a table of rows and columns).
To create a 2D array of integers, take a look at the following example:

	int matrix[2][3] = { {1, 4, 2}, {3, 6, 8}};

The first dimension represents the number of rows [2],
Second dimension represents the number of columns [3].
_________________________________________________________________
|_______________|   column 0	|   column 1	|    column 2	|
|	row 0	|	1	|	4	|	2	|
|	row 1	|	3	|	6	|	8	|

To access the elements of a 2D Array you need to specify index number of both row and column.

Loop Through a 2D Array
To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
ex:
	int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

	int i, j;
	for (i = 0; i < 2; i++) {
  		for (j = 0; j < 3; j++) {
    			printf("%d\n", matrix[i][j]);
  		}
	}


-----------------	String	---------------------

Strings are used for storing text/characters.
for example, "Hello World" is a string of characters.

C does not have a string type of easily create string variable. Instead, you can use the char type and create an array of characters to make a string in C:

	char greetings[] = "Hello World!";

Note that you Have to use double quotes ""

To output the string , you can use the printf() function together with the format specifier %s to tell C that we are now working with strings.

	printf("%s", greetings);

Since String are actually array in C we can easily access any character by referring to its index

we can also write it as:
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ',......,'!', '\0'};

Note that when we create an actual array of char we must include \0 character at end This is known as "Null Terminating character", and must be included. It tells C that this is the end of char array or string.

Strings - Special characters

	char txt[] = "we are the so-called "Vikings" form the center";

C will misunderstand this string, and generate an error.

The solution to avoid this problem, is to use the backslash escape character.

The backlash (\) escape character turns special characters into string characters

Escape characters	Results
	\'		'		single quote
	\"		"		double quote
	\\		\		backslash



--------------	C string Functions	-------------

C has many useful string functions to use them include <string.h> header file in your program

	#include <string.h>

1. string Length
To get the length of a string, you can use the strlen() function

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));

note sizeof() and strlen() behaves differently, as sizeof also includes the \0 character when countiing:
	
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));		//26
	printf("%d", sizeof(alphabet));		//27

It is also important to know that sizeof will always return the memory size in bytes, and not actual string length

	char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));		//26
	printf("%d", sizeof(alphabet));		//50


2. Concatenate strings
To concatenate (combine) two strings, we can use the strcat()

ex:
	char str1[20] = "Hello ";
	char str2[] = "world!";

	// Concatenate str2 to str1 (result is stored in str1)
	strcat(str1, str2);

	// Print str1
	printf("%s", str1);

Note that the size of str1 array should be large enough to store the result of two strings combined

3. Copy strings
To copy the value of one sting to another, you can use the strcpy() function

	char str1[20] = "Hello World!";
	char str2[20];

	// Copy str1 to str2
	strcpy(str2, str1);

	// Print str2
	printf("%s", str2);

Note that the size of str2 should be large enough to store the copied string

4. Compare strings
To compare two strings you can use the strcmp() function

It returns 0 if the two strings are equal, otherwise a value that is not 0

	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hi";
	
	// Compare str1 and str2, and print the result
	printf("%d\n", strcmp(str1, str2));	//0 (the strings are equal)
	
	// Compare str1 and str3 and print
	printf("%d\n", strcmp(str1, str3));	//-4 (4 are not equal)



--------------	User Input	---------------------

To get user input, you can use the scanf() function


	// create variable to store user input
	int myNum;

	// Ask the user to type
	printf("Type a number: \n");

	// get and save user input to variable
	scanf("%d", &myNum);
	
	// o/p
	printf("Your number is: %d", myNum);

The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.


Multiple inputs:
ex:

// Create an int and a char variable
int myNum;
char myChar;

// Ask the user to type a number AND a character
printf("Type a number AND a character and press enter: \n");

// Get and save the number AND character the user types
scanf("%d %c", &myNum, &myChar);

// Print the number
printf("Your number is: %d\n", myNum);

// Print the character
printf("Your character is: %c\n", myChar);


we can also get a string entered by user:


// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s", firstName);


Note: When working with strings in scanf(), you must specify the size of the string/array (we used a very high number, 30 in our example, but atleast then we are certain it will store enough characters for the first name), and you don't have to use the reference operator (&).

However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). For example:

ex:
char fullName[30];

printf("Type your full name: \n");
scanf("%s", &fullName);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John


From the example above, you would expect the program to print "John Doe", but it only prints "John".

That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

ex:
char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John Doe

Use the scanf() function to get a single word as input, and use fgets() for multiple words.


----------------	Memory Address	---------------------

When a variable is created in C, a memory address is assigned to the variable

The memory address is the location of where the variable is stored on the computer

When we assign a value to the variable, it is stored in this memory address

To access it, use the reference operator (&), and the result represents where the variable is stored:

ex:
	int myAge = 43;
	printf("%p", &myAge);	//0x7ffe5367e044

Note: The memory address is in hexadecimal form (0x...) you will probably not get the same result in your program, as this depends on where the variable is stored on your computer

You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier


Why is it useful to know the memory address?

Pointers are important in C, because they allow us to manipulate the data in the computer's memory - this can reduce the code and improve the performance
Pointers are one of the things that make C stand out from other programming languages like python, java.


-------------------	Pointers	------------------


