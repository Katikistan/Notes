---
date: 07-08-23
day: man
week: 32
year: 2023
type: Wiki
course: CompSys
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 32 - 2023]]

![](https://i.imgur.com/GSWOkwz.png)

for(;;) here is equivalent to while(true)


case values must be integer constant expressions

For unsigned values, a == (a/b) * b + (a%b). 
	
```C
size_t size_min ( size_t a, size_t b) { 
	return (a < b) ? a : b; 
}
```
# Pointers
## Pointer Arithmetic
Adding `n` to a pointer _does not_ increment the address to point to a value `n` bytes away. It moves the pointer by `n` * (size of the data type in bytes). For example, if a pointer to an `int`, the size of which is four bytes, initially contains address 100 (we will use a decimal address for simplicity), and three is added to the pointer, the pointer will now point to address 112.
# Structs
![](https://i.imgur.com/M5KyNM5.png)

Takeaway 1.6.3.1 Omitted struct initializers force the corresponding member to 0. This can even go to the extreme that all but one of the members are initialized. 

Takeaway 1.6.3.2 A struct initializer must initialize at least one member.

Structures can be assigned with = but not compared with == or !=

![](https://i.imgur.com/UeWMNvF.png)


![](https://i.imgur.com/JQ0O4vw.png)

# Summary chapter 6
• Arrays combine several values of the same base type into one object. 
• Pointers refer to other objects, are null, or are indeterminate. 
• Structures combine values of different base types into one object. 
• typedefs provide new names for existing types.
# Functions
Alternatively, we could even omit the name of the parameter and/or add the storage specifier extern:
`extern bool leapyear ( unsigned ) ;`

Functions have only one entry but can have several return s

the return value of int gives an indication to the runtime system if the execution was successful: a value of EXIT_SUCCESS or EXIT_FAILURE indicates success or failure of the execution from the programmer’s point of view.

Use EXIT_SUCCESS and EXIT_FAILURE as return values for main.

All command-line arguments are transferred as strings.

Of the arguments to main, argv[0] holds the name of the program invocation.

Of the arguments to main, argv[argc] is 0.

It does this by using the assert macro from assert.h. This would abort the program with an informative message if the function was called with arguments that didn’t satisfy that condition

![](https://i.imgur.com/VsIcJ9Z.png)

## summary chapter 7
• Functions have a prototype that determines how they can be called. • Terminating main and calling exit are the same. • Each function call has its own copy of local variables and can be called recursively.