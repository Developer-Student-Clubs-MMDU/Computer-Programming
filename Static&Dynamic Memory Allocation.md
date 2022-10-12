# Difference between Static and Dynamic Memory Allocation in C

**Memory Allocation:** Memory allocation is a process by which computer programs and services are assigned with physical or virtual memory space. The memory allocation is done either before or at the time of program execution. There are two types of memory allocations: 
 

1. Compile-time or Static Memory Allocation
2. Run-time or Dynamic Memory Allocation


**Static Memory Allocation:** In static memory allocation whenever the program executes it fixes the size that the program is going to take, and it can’t be changed further. So, the exact memory requirements must be known before. Allocation and deallocation of memory will be done by the compiler automatically.  When everything is done at compile time (or) before run time, it is called static memory allocation.

**Key Features:**

1. Allocation and deallocation are done by the compiler.
2. It uses a data structures stack for static memory allocation.
3. Variables get allocated permanently.
4. No reusability.
5. Execution is faster than dynamic memory allocation.
6. Memory is allocated before runtime.
7. It is less efficient.

### Below is the C program to illustrate the Static Memory Allocation:

```bash

// C program to implement
// static memory allocation
#include <stdio.h>
#include <stdlib.h>
  
// Driver code
int main()
{
    int size;
    printf("Enter limit of the text: \n");
    scanf("%d", &size);
    char str[size];
    printf("Enter some text: \n");
    scanf(" ");
    gets(str);
    printf("Inputted text is: %s\n", str);
    return 0;
}
```

## Advantages:

1. Simple usage.
2. Allocation and deallocation are done by the compiler.
3. Efficient execution time.
4. It uses stack data structures.

## Disadvantages:

1. Memory wastage problem.
2. Exact memory requirements must be known.
3. Memory can’t be resized once after initialization.


## **Dynamic Memory Allocation:** 
In Dynamic memory allocation size initialization and allocation are done by the programmer. It is managed and served with pointers that point to the newly allocated memory space in an area which we call the heap. Heap memory is unorganized and it is treated as a resource when you require the use of it if not release it.  When everything is done during run time or execution time it is known as Dynamic memory allocation.

**Key Features:**

1. Dynamic allocated at runtime
2. We can also reallocate memory size if needed.
3. Dynamic Allocation is done at run time.
4. No memory wastage

There are some functions available in the stdlib.h header which will help to *allocate memory dynamically.*

**malloc():** The simplest function that allocates memory at runtime is called malloc(). There is a need to specify the number of bytes of memory that are required to be allocated as the argument returns the address of the first byte of memory that is allocated because you get an address returned, a pointer is the only place to put it.

**Syntax :**
```bash
int *p = (int*)malloc(No of values*size(int));
```

**calloc():** The calloc() function offers a couple of advantages over malloc(). It allocates memory as a number of elements of a given size. It initializes the memory that is allocated so that all bytes are zero. 

calloc() function requires two argument values: 
1. The number of data items for which space is required.
2. Size of each data item.

It is very similar to using malloc() but the big plus is that you know the memory area will be initialized to zero.

**Syntax:** 

```bash
int *p = (int*)calloc(Number of data items, sizeof(int));
```

### Below is the C program to illustrate the Dynamic Memory Allocation:


```bash
// C program to illustrate the above
// concepts of memory allocation
#include <stdio.h>
#include <stdlib.h>
  
// Driver Code
int main()
{
    int size, resize;
    char* str = NULL;
    printf("Enter limit of the "
           "text: \n");
    scanf("%d", &size);
  
    str = (char*)malloc(size * sizeof(char));
  
    // If str is not NULL
    if (str != NULL) {
        printf("Enter some text: \n");
        scanf(" ");
        gets(str);
        printf("Inputted text by allocating"
               "memory using malloc() is: "
               "%s\n",
               str);
    }
  
    // Free the memory
    free(str);
    str = (char*)calloc(50, sizeof(char));
  
    // If str is not NULL
    if (str != NULL) {
        printf("Enter some text: \n");
        scanf(" ");
        gets(str);
        printf("Inputted text by allocating "
               "memory using calloc() is: "
               "%s\n",
               str);
    }
  
    printf("Enter the new size: \n");
    scanf("%d", &resize);
    str = (char*)realloc(str, resize * sizeof(char));
  
    printf("Memory is successfully "
           "reallocated by using "
           "realloc() \n");
  
    // If str is not NULL
    if (str != NULL) {
        printf("Enter some text: \n");
        scanf(" ");
        gets(str);
        printf("Inputted text by reallocating"
               " memory using realloc()is: "
               "%s\n",
               str);
    }
  
    // Free the memory
    free(str);
    str = NULL;
  
    return 0;
}
```
## Advantages:

1. Dynamic Allocation is done at run time.
2. We can allocate (create) additional storage whenever we need them.
3. Memory can be deallocated (free/delete) dynamic space whenever we are done with them.
4. Thus, one can always have exactly the amount of space required – no more, no less.
5. Memory size can be reallocated if needed.

## Disadvantages:

1. As the memory is allocated during runtime, it requires more time.
2. Memory needs to be freed by the user when done. This is important as it is more likely to turn into bugs that are difficult to find.

## Tabular Difference Between Static and Dynamic Memory Allocation in C:

| S. No. | Static Memory Allocation    | Dynamic Memory Allocation    |
| :----- | :--- | :--- |
| 1. |  In the static memory allocation, variables get allocated permanently, till the program executes or function call finishes.  | Dynamic Memory Allocation is done during program execution.   |
| 2. | Static Memory Allocation is done before program execution.  | Dynamic Memory Allocation is done during program execution.  |
| 3. | It is less efficient   | It is more efficient   |
| 4. | It uses stack for managing the static allocation of memory   | It uses heap for managing the dynamic allocation of memory   |
| 5. | In Static Memory Allocation, there is no memory re-usability   | In Dynamic Memory Allocation, there is memory re-usability and memory can be freed when not required  |
| 6. | 	In static memory allocation, once the memory is allocated, the memory size can not change.   | In dynamic memory allocation, when memory is allocated the memory size can be changed.   |
| 7. | In this memory allocation scheme, we cannot reuse the unused memory.   | This allows reusing the memory. The user can allocate more memory when required. Also, the user can release the memory when the user needs it.   |
| 8. | In this memory allocation scheme, execution is faster than dynamic memory allocation.   | In this memory allocation scheme, execution is slower than static memory allocation.   |
| 9. | In this memory is allocated at compile time.   | In this memory is allocated at run time.   |
|10. | In this allocated memory remains from start to end of the program.   | In this allocated memory can be released at any time during the program.   |