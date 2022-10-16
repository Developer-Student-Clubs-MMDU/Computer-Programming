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

As you can see, the statement needs to be written only once and the loop will be executed 10 times as shown above.

## There are mainly two types of loops:

* Entry Controlled loops: In these types of loops, the test condition is tested before entering the loop body. For Loops and While Loops are entry-controlled loops.
* Exit Controlled loops: In these types of loops the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. The do-while loop is exit controlled loop.

### Entry Controlled Loops:

* while loops:  A while loop is a control flow statement that allows code to be executed repeatedly based on a given Boolean condition. The while loop can be thought of as a repeating if statement. **Syntax :**

```
let x=5;

while (x!=0)
{
    console.log("In Loop");
    x=x-1;
}
```

* for loops:  for loop provides a concise way of writing the loop structure. Unlike a while loop, a for statement consumes the initialization, condition, and increment/decrement in one line thereby providing a shorter, easy-to-debug structure of looping. **Syntax:**

```
for (let i=1;i<=10;i++)
{
    console.log("In the Loop");
}
```

### Exit Controlled Loops:

* do-while loops: do-while loop is similar to the while loop with the only difference that it checks for the condition after executing the statements, and therefore is an example of an **Exit Control Loop. Syntax:**

```
let x=5;

do
{
    console.log("In the Loop");
    x=x-1;
}while(x!=0);
```

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
