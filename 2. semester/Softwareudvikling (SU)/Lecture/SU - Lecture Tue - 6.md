---
date: 07-02-23
day: Tue
week: 6
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 6 - 2023]]
***Abstraction:*** 
Objects can represent abstract concepts  

***Encapsulation:***  
Expose a nice abstraction, not internal implementation details  

***Inheritance:***
Reuse functionality by inheriting from other objects

**Types of applications:**
- console Console/Terminal Application  
- classlib Class Library (DLL)  
- nunint NUnit Test Project
- ...

**Types of files:**
hello.csproj: Project settings (e.g., this is an executable)  
Program.cs: Entry point of the program  
obj/: *~~Intermediate files generated during build~~ (Don’t submit; only used to speed up builds)*
bin: build folder *(Don't submit)*

**Lets look at program.cs:**
- Arguments to a function(?) are enclosed in parentheses (())  
- The word after the last dot (.) is a function(?) name  
- The word before the last dot (.) is a module(?) name
- Lines of code terminate with semicolon (;)

**Get the type:**
```csharp 
var x1 = -2
Console.WriteLine(x1.GetType();
// Prints:
$ dotnet run
System.Int32
// Math.pow will give an double even if numbers are ints
Math.Pow(-2, 2)`
$ dotnet run
System.Double
```

Math.Pow has the potentiel to give big numbers therefore c# will return a double because doubles can represent bigger numbers:
![|300](https://i.imgur.com/nWnhDEX.png)
![|200](https://i.imgur.com/4Olvzne.png)

**Tuple, immutable:**
```csharp 
var p = (-2, -3);
// access tuple elements:
p.Item1 == -2
p.Item2 == -3
// tuple deconstruction:
var (x1, y1) = p
```

It makes sense to compute the distance  
between two points, but not two vectors  

It makes sense to compute the sum of two vectors (the sum  
of x and y offsets, respectively), but not of two points

we would like to distinguish between points and  
vectors, but we cannot do it by the data components alone;  
we have to either distinguish by the operations they allow,  
or give their types different names

```csharp 
// in point.cs
namespace Geometry; 
class Point {  
	double x; //field 
	double y; //field
	public Point(double x, double y) { // method
		this.x = x;  //assigning x arg to field x
		this.y = y;  //assigning y arg to field y
	}    
	double Distance() { // method
	return 0.0; //return <expr>; specifies that <expr> should be returned as the result of executing the metho
	}  
}
```

```csharp
// in vector.cs
namespace Geometry; 
class Vector { 
	double x;  
	double y;  
	public Vector Add() {  
		return null; // null refers to instance, a 0 of sorts  
	}  
}
```
We can create `new` instances of `Point` and `Vector`,  
provided that we can see the class.

We can either use the fully qualified class name:
`var p = new Geometry.Point(-2,-2)`

Or have a using directive at the top to avoid repetitive cod
`using Geometry`
`var p = new Point(-2,-2)`

`Console.WriteLine(p.x)`
will output: -2

We have used double and Double interchangeably. They are not the same thing!  
C# distinguishes between value types and reference types:
- A reference is a reference to an object  
- A value is a value

C# implicitly boxes a value if you try to use it as an object:
| Unboxed | Boxed  |
| ------- | ------ |
| int     | int32  |
| long    | int64  |
| float   | single |
| double  | Double |
|         |        |
Some notable exceptions to this visual que:  
- string is the same as String  
- object is the same as Object
## access modifiers
Classes, fields, constructors, and methods can all vary in their access/protection level

Their declaration can be prefixed by access modifiers to  
make them more, or less visible than the default
| Modifier  | Accessible                              | Default                      |
| --------- | --------------------------------------- | ---------------------------- |
| private   | Only within a class                     | Fields, Constructors, Method |
| internal  | Only within a project                   | Classes                      |
| public    | Everywhere                              |                              |
| protected | Within class or subclass(child classes) |                              |
| ...       | ...                                     | ...                          |
## Encapsulation with properties

```csharp
namespace Geometry; 
class Vector { 
	public double x;  
	public double y;  
	public Vector Add() {  
		return null; // null refers to instance, a 0 of sorts  
	}  
}
```
This is dangerous because anyone can modify x and y  

We would like to allow reading x and y, but not writing them  

This can be accomplished with properties:

```csharp
class Vector {  
	public double X { get; private set }  
	public double Y { get; private set }  
4 }
```
Properties can also perform computation:

```csharp
class Vector {  
	// ...  
	public double Norm {  
		get {  
			return Math.Sqrt(x * x + y * y);  
		}  
	}  
}
```
```ad-note
`Norm` doesn’t have a set; setting the norm is senseless


```


## if using chatgpt:

```
// \n writes a line break in the output  
// The above example was generated using ChatGPT  
// See https://oleks.info/files/chatgpt-ab3a4c.htm
```
