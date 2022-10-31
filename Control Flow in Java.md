# Control Flow Statements 
Java Compiler executes the code in accordance of the order of their appearance , the order followed is top to bottom, hence the code at top is executed prior to the code below it. However , Java provides users with certain statements that facilitate them to control the flow of their program. Such statements are called Control Flow Statements. They are quite crucial for the smooth functioning of any program and are one of the most important features of Java language.

## There are prominently three types of Control Flow Statements in Java :

(i) Loop Statements :
* for loop
* while loop
* do while loop

(ii) Decision Making Statements :
* if statements
* switch statement

(iii) Jump Statements :
* break statement
* continue statement
* return statement

## Decision Making Statement
These statments basically have two parts- condition and execution statement.
They evaluate boolean expressions and perform control flow based upon the result of the condition. if statements and switch statments are the two types of decision making statements in Java

1. if statement :

(i) if-else statement :

The whole functioning of this statement depends upon the condition, therefore it has two paths.
Syntax :

if(condition) statement1;
else statement2;
 
(ii) Simple if statement :
Syntax :

if(condition)
statement;

(iii) Nested ifs :
The layman meaning of nested if is "if inside a if statement".
Syntax :

if(condition1){
statement1; // executes when condition1 is true
if(condition2){
statement2; // executes when condition2 is true
}
}
else{
statement3 // executes when condition1 is false

## Switch statement :

The switch statement in java is a multidimensional statement. It provides easy and efficient way to execute different part of code based on the value of a expression. It is often considered as a better alternative of if-else-if statements.

Syntax :

switch(expression) {
case value1:
// statement sequence
break;
case value2:
// statement sequence
break;
case value3:
// statement sequence
break;
case value4:
// statement sequence
break;
defualt:
// default statement sequence
}

The switch statement works like this: The value of the expression is compared with each of the values of case statements. If a match if found, the code sequence following that case statement is executed. However, in case no case values match default statement is executed. The choice of default is optional. If no case matches and no default is present, then no further action is taken.
The break statement is used inside the switch to terminate a statement sequence. When a break statement is encountered, execution branches to the first line of code that follows the entire switch statement. This has the ability of jumping out of the switch statement.


## Loop Statements
Java statements like while , do while and for are basically iteration statements that are used to achieve what we call loop.
A loop repeatedly executes the same set of instructions until a termination condition is met.

(i) while :
The while loop is one of the most fundamental statements of java. It repeats a statement or block while its controlling expression is true.

Syntax :

while(condition) {
// body of the loop
}

(ii) do while :

Having seen while loop, it is quite clear that statement contained in the body of the loop will not be executed even once if the condition is false. But sometimes it is desirable to execute the body of the loop even once. In simple words, there are times when one needs to test the termination condition at the end of the loop rather than at the beginning. For this purpost , do while comes to our rescue. The do while loop always executes its body at least once, because its conditional expression is at the bottom of the loop.

Syntax :

do {
// body of the loop
} while(condition);

(iii) for loop :

for loop is a powerful and versatile construct of Java. They are basically of two form : traditional form and for-each form.
Let's first take a look at traditional form :

Syntax :
for(initialisation; condition; iteration) {
// body
}