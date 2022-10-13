# Use of Iteration in programming language

## What is Iteration?

**An iteration (or looping) is a sequence of one or more statements that are repeatedly executed until a condition is satisfied. These statements are also called as control flow statements. It is used to reduce the length of code, to reduce time, to execute program and takes less memory space.**


## Purpose of Iteration

**Iteration allows us to simplify our algorithm by stating that we will repeat certain steps until told otherwise.**

**This makes designing algorithms quicker and simpler because they don’t have to include lots of unnecessary steps.**


## Types of Iteration:

**C++ supports three types of iteration statements:**

**i. for statement**

**ii. while statement**

**iii. do-while statement**

**All looping statements repeat a set statements as long as a specified condition is remains true. The specified condition is referred as a loop control. For all three loop statements, a true condition is any nonzero value and a zero value shows a false condition.**

### for loop
 

**The for loop is the easiest looping statement which allows code to be executed repeatedly. It contains three different statements (initialization, condition or test-expression and update expression(s)) separated by semicolons.**

 

**The general syntax is:**

for (initialization(s); test-expression; update expression(s))

{

      Statement 1;

      Statement 2;

      ………….

}

Statement-x;

**The initialization part is used to initialize variables or declare variable which are executed only once, then the control passes to test-expression. After evaluation of test-expression, if the result is false, the control transferred to statement-x. If the result is true, the body of the for loop is executed, next the control is transferred to update expression. After evaluation of update expression part, the control is transferred to the test-expression part. Next the steps 3 to 5 is repeated.**

### C++ program to find the sum of numbers from 1 to n
```c++
#include <iostream>
using namespace std;

int main ()

{

int i, sum=0, n;

cout<<"\n Enter The value of n"<<endl;

cin>>n;



for ( i =1;; i<=n;i++)

      {

      sum += i;

     }

cout<<"\n The sum of 1 to " <<n<<"is "<<sum;

return 0;

}

```

Output
Enter the value of n 5

The sum of 1 to 5 is 15


### while loop


**A while loop is a control flow statement that allows the loop statements to be executed as long as the condition is true. The while loop is an entry-controlled loop because the test-expression is evaluated before the entering into a loop.**

**The while loop syntax is:**

while ( Test expression )

{

      Body of the loop;

}

Statement-x;

**In while loop, the test expression is evaluated and if the test expression result is true, then the body of the loop is executed and again the control is transferred to the while loop. When the test expression result is false the control is transferred to statement-x.**

 

### C++ program to find the sum of numbers from 1 to 10 using while loop
```c++
#include <iostream>

using namespace std;

int main ()

{

int i=1,sum=0;

while(i<=10)

{

      sum=sum+i;

      i++;

}

cout<<"The sum of 1 to 10 is "<<sum;

return 0;

}
```
Output
The sum of 1 to 10 is 55

 
 ### do while loop
 
 **The do-while loop is an exit-controlled loop. In do-while loop, the condition is evaluated at the bottom of the loop after executing the body of the loop. This means that the body of the loop is executed at least once, even when the condition evaluates false during the first iteration.**

**The do-while loop syntax is:**

do

{

      Body of the loop;

} while(condition);

### C++ program to display numbers from 10 to 1 using do-while loop
```c++
#include <iostream>

using namespace std;

int main ()

{

int n = 10;

do

{

      cout<<n<<", ";

      n--;

}while (n>0) ;

}
```
Output
10, 9, 8, 7, 6, 5, 4, 3, 2, 1
