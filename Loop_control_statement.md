## What is a JavaScript Loop Control Statement?
Loop control statements are certain JavaScript statements that interrupt the normal flow of the program. They direct the program control to a specific location in the code. Therefore, sometimes, we also call them “Jump Statements”. JavaScript provides us with three loop control statements:

1. continue
2. break
3. label
Let’s understand them all with the help of examples.

### 1. continue Statement
The continue statement in a JavaScript loop skips the rest of the loop in the current iteration and directs it to the end of the loop. We use this statement to restart a while, a do…while, a for or a labeled statement. It is not compulsory to mention a label or loop name after continue. The statement, by default, sends the program control to the starting of the loop.
The syntax of the continue statement is as follows:

continue [label];

In this task, I have a list of numbers, stored in an array. I only want to print out the numbers that are divisible by 5. I’m going to skip the rest of them. I am going to achieve this with the help of a continue statement. Be sure you run the code with me so you understand the concept clearly.

`Code:`
```javascript
var numbers = [65, 99, 34, 12, 10, 77]; //array of numbers
for (number of numbers) { //iterating through the values of numbers
    if (number % 5 == 0) { //chhecking if the number is divisible by 5
        console.log(number + " is divisible by 5.")
    } else {
        continue; //restarts the loop
        console.log(number + " is not divisible by 5.") //skipped statement
    }
}
```

`Output:`
```
65 is divisible by 5.
10 is divisible by 5.
```

### 2. break Statement
These are used to terminate a loop immediately, even if the condition is not yet fulfilled. These are most often used with switch statements, as discussed in DataFlair’s previous tutorial on Conditional Statements in JavaScript. But we can also use them with other loop statements if we need to. Adding a label with a break statement is optional. But you need to remember that this statement skips the rest of the loop and jumps out to execute the code just after the loop. The syntax for this loop control statement looks like this:

break [label];

This time, I started a loop for printing numbers in descending order from 10 to 0. But I decided that I don’t actually want it to continue its execution after I print the number 5. You and I are going to do this with the help of a break statement in our code.

`Code:`
```javascript
for (var num = 10; num >= 0; num--) { //loop to print 10 to 0
    if (num == 4) {
        break; //break out of the loop 
    } else {
        console.log(num);
    }
}
```

`Output:`
```
10
9
8
7
6
5
```

### 3. labeled Statement
A label offers an identifier to a statement that allows you to refer to it elsewhere in your program. The labeled statement can be used with the break or continue statements.
The value of labelName may be any JavaScript identifier and the statement may be any instruction you want the label to follow. These statements break the normal flow of the program.
The syntax of a labeled statement is as follows:

labelName:
  statement

  Let’s understand this statement with a real-life example. Suppose I have to calculate the number of weekdays this month. In this case, the month is starting with a Sunday; the total days in this month are 31. I will do this with the help of a labeled statement and a continue statement.
label with continue:

`Code:`
```javascript
// sunday(0), monday(1), tuesday(2)... and so on.
var wdays = 0; //weekdays are zero initially
weekday: //label
    for (var day = 1; day <= 31; day++) //condition for 31 days
{
    checkDay = day % 7;
    if (checkDay == 0) //checking for Sunday
        continue weekday; //continue to the top of the loop
    else
        wdays++; // increment weekdays by 1
}
console.log(wdays + " weekdays this month.");
```

`Output:`
```
27 weekdays this month.
```
