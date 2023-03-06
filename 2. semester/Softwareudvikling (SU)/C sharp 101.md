---
date: 31-01-23
day: Tue
week: 6
year: 2023
type: Wiki
course: SU
status: open
semester: 2
tags: C# 
Summary: "basics of C#"
---
##### Weekly note
[[Uge 6 - 2023]]
# C sharp 101
**File type:** .cs

C# is strongly typed
**Data types in C#:**
![Diagram of different C# data types, including bool, int, and string.|500](https://content.codecademy.com/courses/learn-c-sharp/data-types-variables/C%23_DataTypes_v4-01.svg)
A double has 15-16 digit precision, a float has 7 digit precision.
when declaring a float variable we have to end with F beacuse it is a float literal "2.2F"

### Declaring variables
Each line has to end with a " ; "
```ad-bug 
title: assigning variables can be done in two ways:
collapse: open
~~~~ csharp
// method 1:
int evenNumber;
myAge = 22;

// Method 2:
int oddNumber = 45;
~~~~
The smart thing about method 1 is you can do all the type definition in the top and then assign variable values beneath. 

**Here is an example:**
~~~~ csharp
using System;
namespace Form
{
  class Program
  {
    static void Main(string[] args)
    {
      // Create Variables
      int myAge;
      int evenNumber;
      int age;
      int oddNumber;
      evenNumber = 22;
      myAge = 22;
      age = 5;
      oddNumber = 45;
      double weight = 65.22;
      float weight2 = 65.22F;
      bool spayed = true;
      string name = "Shadow";
      string breed = "Golden Retriever";
      // Print variables to the console
      Console.WriteLine(evenNumber + oddNumber); 
      Console.WriteLine(oddNumber - evenNumber); 
      Console.WriteLine(name);
      Console.WriteLine(breed);
      Console.WriteLine(age);
      Console.WriteLine(weight);
      Console.WriteLine(spayed);
    }
  }
}
~~~~

```

Notice that when using float we also have to use F at the end, that is beacuse we are declaring a float literal

a float literal is a specific, fixed value that is assigned to a float variable or used in a calculation. For example, 2.3F is a float literal in the following code:

### Converting types
**An implicit conversion:** will happen if no data will be lost during the conversion

**An explicit conversion:** Requires a cast operator, if we for example want to convert a double to an int, here you would use (int).

there are also built in method Convert.ToX(). Convert.ToString() Convert.ToDouble()...
```c#
int myInt = 3;
// Turn it into a doubledouble 
myDouble = myInt;

double myDouble2 = 3.2;
// Round myDouble to the nearest whole number using cast operator (int)
int myInt2 = (int)myDouble2;

```

## Working with numbers
**Arithmetic operators** 
-   `+` addition operator
-   `-` subtraction operator
-   `*` multiplication operator
-   `/` division operator
-   `%` modulo operator (returns the remainder)
**Unary operator**
- `++` operator increments a value by 1. 
- `--` operator decrements a value by 1.
``` csharp
int a = 10;
a++;
int b = 10;
b--;
// a prints 11
// b prints 9 
```
Math is included in the namespace System 
**Math.Pow()**
raises a number to a specified power and returns a double 
`double pow_ab = Math.Pow(6, 2);`
prints 9 

**Math.Abs()**
will find the absolute value of a number. Example: `Math.Abs(-5)` returns 5.

**Math.Sqrt()** 
will find the square root of a number. Example: `Math.Sqrt(16)` returns 4.

**Math.Floor()**
will round the given double or decimal down to the nearest whole number. Example: `Math.Floor(8.5)` returns 8.

**Math.Ceiling()**
will round the given double or decimal up to the nearest whole number. Example: `Math.Floor(8.5)` returns 9.

**Math.Min()**
returns the smaller of two numbers. Example: `Math.Min(39, 12)` returns 12.

**Math.Max()**
return the bigger of two numbers. Example: `Math.Max(39,12)` returns 39

## Working with strings
string methods is included in the namespace system 

string chars can be acessed with bracket notation. 
`string value = "Dot Net Perls";`
`char first = value[0];`
backslash can be used to include chars in a string.
newline is made with backslash n
**.toUpper()**
will make every char in the string uppercase
`string upperstr = mystring.toUpper();
`
**.IndexOf()**
`string str = "Divyesh";`
`// this will show the value 5` 
`int index1 = str.IndexOf('s');`

**.ToLower()**
converts every character to lowercase

**.Length()**
length of the string

**String concat**
can be done using the `+` operator 
**.Substring()**
retrieve part of a string while keeping the original data intact. 
`string myString = "Divyesh";
`string test1 = myString.Substring(1);
this will print "ivyesh"
`string test1 = myString.Substring(0);
will print "Divyesh"
```csharp 
string plantName = "Cactaceae, Cactus";
int charPosition = plantName.IndexOf("u"); // returns 15
char u = plantName[charPosition]; // returns u
```
### String Interpolation
the same as f strings in python  here we use a $ instead of f
`int id 100;`
`string multipliedNumber = $"The multiplied ID is {id * 10}.";`
### Verbatim strings

```csharp
// The following string is printed verbatim,
// thus all escape characters are displayed.
Console.WriteLine(@"C:\MyApp\bin\Debug");
// Whitespace is preserved with verbatim strings.
string myLongString = @"This is a very
very
very
long string";
Console.WriteLine(myLongString);

Console.WriteLine(@"Cerebus said ""Darrr! Pret-ty sun-sets""");
//Verbatim strings can also be interpolated strings
// the order does not matter. Using either $@ or @$ will work.
string interp = "interpolation";
string myLongString2 = $@"This is a very
very
long string with {interp}";
```

## Logic in csharp
Comparsion operators
- ==
- !=
- <
- >
- <=
- >=
**AND OR, NOT**
- && - `bool andExample = ((4 > 1) && (2 < 7)); 
- || - `bool orExample = ((8 > 6) || (3 > 6));
- ! -  `bool notExample = !(1 < 3);
### If, Else if or else statments
have to be within a method
```csharp
public class Program
{
    static void Main(string[] args)
    {
        string color = "red";
        int num = 2;
        if (color == "blue" && num == 3)
        {
            Console.WriteLine("color is blue");
        }
        else if (color == "red" || num > 5)
        {
            Console.WriteLine("color is NOT blue");
        }
        else if (!(color == "red"))
        {
            Console.WriteLine("color is NOT blue");
        }
        else
        {
            Console.WriteLine("color is NOT blue OR red");
        }
    }
}
```
parenteses around the conditions are required 
### Switch statmetns (Match cases)
Like match cases in [[fsharp#match with|match cases in F#]]
you start a switch case by writing `switch([the value you wish to compare]){}`

each case will contain the value that the switch value is compared to, each case has to end with parentheses:
`case("green"):` *no semicolon after*

each case has to end with `break;`

a switch case can end with `default:` and `break;` instead of `case():` if no cases are matched, this is the same as `´|__->` in f#. or an else statement
```Csharp
      Console.WriteLine("Pick a genre");
      string genre = Console.ReadLine();
      switch(genre){ 
        case "Drama":
          Console.WriteLine("Citizen Kane");
          break;
        case "Comedy":
          Console.WriteLine("Duck Soup");
          break;
        case "Adventure":
          Console.WriteLine("King Kong");
          break;
        case "Horror":
          Console.WriteLine("Psycho");
         break;
        case "Science Fiction":
          Console.WriteLine("2001: A Space Odyssey");
         break;
        default:
          Console.WriteLine("No movie found");
         break;
      }
```
Notice that the indentation of the `break;` keyword can either be the same as `case():` or the code within each case.
### Ternary Operators
for binary decisions, either do this or that. 
uses `?`
```csharp
([Condition]) ? [expression, if true] : [expression, if false];
// example:
string color = "blue";
string result = (color == "blue") ? "Pass" : "Fail";
```

## Functions and methods
class or method has to be encapsulated by { },

Here, `public` is the access modifier, `int` is the return type, `Add` is the function name, and `(int a, int b)` is the parameter list. The function body is enclosed in curly braces and contains the code that gets executed when the function is called.
```csharp
public int Add(int a, int b)
{
    return a + b;
}
```
Here the return type is void which means that the method won't return anything
```csharp
public void Add(int a, int b)
{
    Console.WriteLine(a + b);
}
```
```ad-bug 
title: Using methods in namespaces
collapse: open
Here we acesss the namespace System which has built in classes and methods such as the class Console which contains WriteLine:
~~~~csharp 
using System;
namespace Numbers
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine(3);
    }
  }
}
~~~~
Not using the namespace system
~~~~csharp 
namespace Numbers2
{
  class classname
  {
    static void methodname()
    {
      System.Console.WriteLine(3);
    }
  }
}
~~~~
This would not work beacuse methodname is not in a class
~~~~csharp 
namespace Numbers2
{
    static void methodname()
    {
      Console.WriteLine("this works also");
    }
}
~~~~
```


## Namespace
In C# 10 an opening curly brace is not needed when making a file-scoped namespace. 

A namespace collects and groups a set of classes under a specific name to organize  
large projects and avoid conflicts between scripts that may share the same names. A  
using directive needs to be added to a class to access a namespace's classes.
```csharp 
namespace CalculatorExamples;
class Calculator()
{
//class body 
}
namespace CalculatorExamples{
	class program{
	// class body
	}
}
```
One can acess a namespace with the `using` keyword.
