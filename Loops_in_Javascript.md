# Loops in Javascript

Looping is a feature which facilitates the execution of a set of instructions/functions repeatedly while some condition evaluates to true.
For example, suppose we want to print some “text” 10 times. This can be done in two ways as shown below:

**Iterative Method**

```<script type = "text/javascript">    
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
document.write("Hello World\n");
</script>
```

**Using Loops**

```
<script type = "text/javascript">
var i;
 
for (i = 0; i < 10; i++)
{
    document.write("Hello World!\n");
}
</script>
```
This is a simple for loop which runs the statement ```console.log("Hello World:\n)``` 10 times and the code comes much compact and clean as we dont have to type the same statement again and again.

## There are mainly two types of loops:

* **Entry Controlled loops:** In these types of loops, the test condition is tested before entering the loop body. For Loops and While Loops are entry-controlled loops.
* **Exit Controlled loops:** In these types of loops the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. The do-while loop is exit controlled loop.

### Entry Controlled Loops:

* while loops:  A while loop is a control flow statement that allows code to be executed repeatedly based on a given Boolean condition.In other words as loon as the ***condition*** is satisfies the loop keeps running. So, there may be a condition where the loop never stops iterating ,we will come to that later. The while loop can be thought of as a repeating if statement. 
**Syntax :**

```
while (condition)  
{  
    //code to be executed  
}  
```
#### Example:
```
let x=5;
while (x!=0)
{
    console.log("In Loop");
    x=x-1;
}
```
As you can see above the loop will run 5 times till the value of x is not 0 (In every iteration of the loop the value of x decreases by 1 and the initial value of x is 5)


* for loops:  for loop provides a concise way of writing the loop structure. Unlike a while loop, a for statement consumes the initialization, condition, and increment/decrement in one line thereby providing a shorter, easy-to-debug structure of looping. 
**Syntax:**

```
for (initialization; condition; increment)  
{  
    //code to be executed  
} 
```
#### Example:
```
for (let i=1;i<=10;i++)
{
    console.log("In the Loop");
}
```
As you can see above here ```i``` is initialized to 1 and is incremented by 1 everytime the loop runs. So there comes a time when the value of ```i``` is greater than 10 and the loop breaks.

* For In loops:

The JavaScript for in statement loops through the properties of an Object:
**Syntax:**

```
for (key in object) {
  // code block to be executed
}
```
#### Example:
```
const person = {fname:"John", lname:"Doe", age:25};

let text = "";
for (let x in person) {
  text += person[x];
}
```
In the example above the for in loop iterates over a person object where each iteration returns a key (x), the key is used to access the value of the key and the value of the key is ```person[x]```

* For Of loop:

The JavaScript for of statement loops through the values of an iterable object. It lets you loop over iterable data structures such as Arrays, Strings, Maps, NodeLists, and more:
**Syntax:**
```
for (variable of iterable) {
  // code block to be executed
}
```
Browser Support:
For/of was added to JavaScript in 2015 (ES6).
Safari 7 was the first browser to support for of. For of is not supported in Internet Explorer.

#### Example:
* Looping over Array
```
const cars = ["BMW", "Volvo", "Mini"];

let text = "";
for (let x of cars) {
  text += x;
}
```
* Looping over String
```
let language = "JavaScript";

let text = "";
for (let x of language) {
text += x;
}
```

### Exit Controlled Loops:

* do-while loops: do-while loop is similar to the while loop with the only difference that it checks for the condition after executing the statements, and therefore is an example of an **Exit Control Loop. 
Syntax:**

```
do {
  // code block to be executed
}
while (condition);
```

```
let x=5;
do
{
    console.log("In the Loop");
    x=x-1;
}while(x!=0);
```
As you can see here the compiler enters the loop without checking any condition thus you can be sure that whatever happens the loop wil be executed atleast once.

### Infinite Loops:

One of the most common mistakes while implementing any sort of looping is that it may not ever exit, that is the loop runs for infinite times. This happens when the condition fails for some reason. Examples: 

```
<script type = "text/javaScript">
// JavaScript program to illustrate infinite loop
 
    // infinite loop because condition is not apt
    // condition should have been i>0.
    for (var i = 5; i != 0; i -= 2)
    {
        document.write(i);
    }
     
    var x = 5;
 
    // infinite loop because update statement
    // is not provided.
    while (x == 5)
    {
        document.write("In the loop");
    }
 
</script>
```

In such cases the loop runs infinitely and never breaks ,unless needed for some specific purpose we must always look to it whether the loop condition doesn't fail thus making it run infinitely.
