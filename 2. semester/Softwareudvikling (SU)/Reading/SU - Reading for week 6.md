x½x½---
date: 30-01-23
day: Fri
week: 6
year: 2023
type: Reading
course: SU
open: true
semester: 2
tags: CS, .NET, C# 
Summary: "about .NET and how c# is assembled"
---
##### Weekly note
[[Uge 6 - 2023]]

# CS Chapter 1
C# is a part of the .NET framework, the  

C# share a similar syntax to java

C# and java are members of the C family of programming languages 

**C# allows for operator overloading**

C# a statically typed general purpose programming language

C# and other .NET languages are compiled into an intermediate language(CIL) which can then be interpreted by the common language runtime (CLR) where it can be executed as native machine code on any operating system without the need to recompile.
```ad-info
title: CLR
collapse: open
Common Language Runtime is the virtual machine in Microsofts .NET framework that handles .NET-programs compiling. In the process known as just-in-time-compiling, CLR Compiles CIL into machine code that is then processed in the CPU.
```

C# is OOP but also supports functional lambda expressions
and has the ability to write a declarative query on any data structure with a feature called LINQ

it's a memory safe language thanks to garbage collection, but it is possible to allocate your own memory with pointers:
```csharp
int x = 5;
int y = 5;
int* ptr1 = &x;
int* ptr2 = &y;
```

**Get started:**
Go to a directory and run `dotnet new console` to create a new application that creates a program.cs file that imports the system namespace at the top then provides a class with a main function which is where your code will start executing.

declare a variable by starting with a type followed by a name and value by default a value cannot be null but you can make it nullable by adding a question mark to the type now 

```csharp 
//nullable enabled
string? hello = null;
```

to organize our code and share it in other files we will wrap it in a namespace we can then create a new class inside the namespace that has a constructor when the class is instantiated and a destructor when the class goes out of scope 

we can define a property on the class and make it readable with get or writable with set 
```csharp 
using System; // opening namespace
namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program{ //class
        static void Main(string[] args) // method
        {
            Console.WriteLine("Hello World!");
        }
    }
    class Hummanoid{
        public Hummanoid(){ // constructor
            Console.WriteLine("im alive");
        }
        
        public string Name //making "Name" read- & writable 
        {get; set;}
        
        ~Hummanoid(){ //destructor
            Console.WriteLine("im in heaven");
        }
    }
    class Superhuman : Hummanoid { //inheritance
	    private void Fun(){
		    Func<int, int> square = x => x * x;//lambda function 
			Console.WriteLine(square(5));
	    }
		public override void walk() {//polymorphism
		    Console.WriteLine("Walk faster");
	    }
    }
}
```
supports lambda expressions with the `Func` keyword

when it comes to asynchronous programming it supports a task-based asynchronous pattern allowing you to write non-blocking code using the async await syntax.
```csharp
async void Myjob() {
	var a = await SlowTask();
	var b = await SlowTask();
	var c = await SlowTask();
}
```

Variables that are declared at method scope can have an implicit "type" `var`. An implicitly typed local variable is strongly typed as if you had declared the type yourself, but the compiler determines the type. The following two declarations of `a` and `b` are functionally equivalent:

```csharp
var a = 10; // Implicitly typed.
int b = 10; // Explicitly typed.
```
```ad-info
title: Important 
When `var` is used with [nullable reference types](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/builtin-types/nullable-reference-types) enabled, it always implies a nullable reference type even if the expression type isn't nullable.

```
to execute your code use the `dotnet run` command.

***New in C# 10***
- File scoped namespaces
- Record structs
C# can only be used to build software that is hosted under the .NET runtime

the term used to describe the code targeting the .NET runtime is managed code. 

understand that despite .NET binaries taking the same file extension as unmanaged Windows binaries (.dll), they have absolutely no internal similarities.

.NET projects are always compiled to a file with a .dll extension, even if the project is an executable(.EXE).

IL is also known as Microsoft Intermediate Language (MSIL) or alternatively as the Common Intermediate Language (CIL).

Specifically, .NET binaries do not contain platform-specific instructions but rather platform-agnostic Intermediate Language (IL) and type metadata.
`````ad-note
title: .NET binaries
collapse: closed
```ad-bug
title: Code
collapse: open
~~~~csharp
//Calc.cs
Calc c = new Calc();
int ans = c.Add(10, 84);
Console.WriteLine("10 + 84 is {0}.", ans);
//Wait for user to press the Enter key
Console.ReadLine();
// The C# calculator.
class Calc
{
	public int Add(int addend1, int addend2)
	{
	return addend1 + addend2;
	}
}
~~~~
```
```ad-bug
title: .NET CIL
collapse: closed
~~~~CIL
.method public hidebysig instance int32 Add(int32 addend1,
int32 addend2) cil managed
{
// Method begins at RVA 0x2090
// Code size 9 (0x9)
.maxstack 2
.locals /*11000002*/ init (int32 V_0)
IL_0000: /* 00 | */ nop
IL_0001: /* 03 | */ ldarg.1
IL_0002: /* 04 | */ ldarg.2
IL_0003: /* 58 | */ add
IL_0004: /* 0A | */ stloc.0
IL_0005: /* 2B | 00 */ br.s IL_0007
IL_0007: /* 06 | */ ldloc.0
IL_0008: /* 2A | */ ret
} // end of method Calc::Add
~~~~
```
```ad-bug
title: .NET Metadata
collapse: closed
~~~~metadata
// TypeDef #2 (02000003)
// -------------------------------------------------------
// TypDefName: Calc (02000003)
// Flags : [NotPublic] [AutoLayout] [Class] [AnsiClass] [BeforeFieldInit] (00100000)
// Extends : 0100000D [TypeRef] System.Object
// Method #1 (06000003)
// -------------------------------------------------------
// MethodName: Add (06000003)
// Flags : [Public] [HideBySig] [ReuseSlot] (00000086)
// RVA : 0x00002090
// ImplFlags : [IL] [Managed] (00000000)
// CallCnvntn: [DEFAULT]
// hasThis
// ReturnType: I4
// 2 Arguments
// Argument #1: I4
// Argument #2: I4
// 2 Parameters
// (1) ParamToken : (08000002) Name : addend1 flags: [none] (00000000)
// (2) ParamToken : (08000003) Name : addend2 flags: [none] (00000000)
~~~~
```
`````
each .NET compiler produces nearly identical CIL instructions. Therefore, all languages (F#, VB, C#) are able to interact within a well-defined binary arena.

## CTS
Common Type System(CTS) is part of the .NET framework. The CTS provides a set of guidelines and rules for defining, using, and managing data types in .NET-based applications. The CTS ensures that objects written in different .NET languages can interact with each other in a consistent and predictable manner. This helps to increase code reuse and interoperability between different .NET languages.

All .NET language keywords resolve to the same CTS type defined in an assembly named mscorlib.dll.
### CTS Classes
In C# classes are declared as such : 
```csharp
// A C# class type with 1 method.
class Calc
{
	public int Add(int addend1, int addend2)
	{
		return addend1 + addend2;
	}
}
```
A class has certain characteristics 
![[Pasted image 20230202234854.png]]
### CTS Interfaces
Interface types are defined using the `interface` keyword. 
```csharp
// A C# interface type is usually
// declared as public, to allow types in other
// assemblies to implement their behavior.
public interface IDraw
{
	void Draw();
}
```
An interface is a named collection of abstract member definitions and/or default implementations, which are then implemented by a given class or structure

**In simpler way to look at:** An interface can also be seen as a blueprint for a class, defining a set of methods and properties that a class must implement.

interfaces are in a sense similar to F# signature files in that they specify a contract for what members (methods, properties, events, etc.) a class must have, without providing an implementation for those members. 
### CTS Structures 
Simply put, a structure can be thought of as a lightweight class type having value-based semantics. Structures are best suited for modeling geometric and mathematical data.

```csharp
// A C# structure type.
struct Point
{
	// Structures can contain fields.
	public int xPos, yPos;
	// Structures can contain parameterized constructors.
	public Point(int x, int y)
	{ xPos = x; yPos = y;}
// Structures may define methods.
	public void PrintPosition()
	{
		Console.WriteLine("({0}, {1})", xPos, yPos);
	}
}
```
### CTS Enumeration types
Enumerations groups name-value pairs

By definition, an enumeration type is a set, or collection, of named constants that  
belong to the same variable. These are useful when you want a collection of different  
values, but with the added benefit of them all being of the same parent type.

- The enum keyword declares the type followed by the variable name.  
- The different values an enum can have are written inside curly brackets, separated by a comma (except for the last item).  
- The enum has to end with a semicolon, just like all other data types we've worked with

`enum PlayerAction { Attack, Defend, Flee };`
In this case, we're declaring a variable called PlayerAction, of type enum, which can  
be set to one of three values—Attack, Defend, or Flee.  

To declare an enumeration variable, we use the following syntax:  
	PlayerAction CurrentAction = PlayerAction.Defend;

Rather than keeping track of simple numerical values to represent each possibility, you could build a strongly typed enumeration using the enum keyword. 
```csharp
// A C# enumeration type.
enum CharacterTypeEnum
{
Wizard = 100,
Fighter = 200,
Thief = 300
}
```
By default, the storage used to hold each item is a 32-bit integer; however, it is possible to alter this storage slot

Enum belongs to the namespace System
### CTS Delegate types 
```csharp 
// This C# delegate type can "point to" any method
// returning an int and taking two ints as input.
delegate int BinaryOp(int x, int y);
```
delegate is a class that derives from System.MulticastDelegate, rather than a simple pointer to a raw memory address. In C#, delegates are declared using the delegate keyword.

A delegate type in C# is a reference type that refers to a method, allowing a delegate instance to call the method. Delegates are used for a variety of purposes including event handling, asynchronous programming and other scenarios where a method needs to be called dynamically. The delegate type is declared with the delegate keyword and must match the signature of the methods it references, including the return type and parameter types. When a delegate instance is created, it is assigned a method to be called, and this delegate can be invoked just like any other method. Delegates are often used in combination with events, which are a way of exposing changes in an object to other objects in a decoupled manner.

the C# language also supports the creation of generic types and generic members.
### CTS Type members 
type member is constrained by the set {constructor, finalizer, static constructor, nested type, operator, method, property, indexer, field, read-only field, constant, event}.

each member has a given visibility trait (e.g., public, private, protected)

Some members may be declared as abstract (to enforce a polymorphic behavior on derived types) as well as virtual (to define a canned, but overridable, implementation). Also, most members may be configured as static (bound at the class level) or instance (bound at the object level)
### CLS
The Common Language Specification(CLS) is a set of rules that describe in vivid detail the minimal and complete set of features a given .NET compiler must support to produce code that can be hosted by the .NET Runtime, while at the same time be accessed in a uniform manner by all languages that target the .NET platform

The only aspects of a type that must conform to the CLS are the member definitions themselves (i.e., naming conventions, parameters, and return types).
#### Ensuring CLS Compliance 
you can instruct the C# compiler to check your code for CLS compliance using a single .NET attribute.
// Tell the C# compiler to check for CLS compliance.
[assembly: CLSCompliant(true)]

the [CLSCompliant] attribute will instruct the C# compiler to check every line of code against the rules of the CLS. If any CLS violations are discovered, you receive a compiler warning and a description of the offending code
## .NET Runtime
Runtime can be understood as a collection of services that are required to execute a given compiled unit of code. 

runtime provides a single, well-defined runtime layer that is shared by all languages and platforms that are .NET.

## Distinguishing Between Assembly, Namespace, and Type
C# developers leverage the language-neutral .NET libraries. The .NET platform makes extensive use of the namespace concept. Such as the `System` namespace that contain `Console, Math etc.` 
### Namespace 
A namespace is a grouping of semantically related types contained in an assembly or possibly spread across multiple related assemblies. For example, the System.IO namespace or System.Data namespace defines basic database types. 
***A Sampling of .NET Namespaces:***
![|350](https://i.imgur.com/KPnPCDp.png)

System.Console represents a class named Console that is contained within a namespace called System.

However the .NET runtime engine sees only a single class named System.Console.

Namespace are kinda like Module, however a namespace can be contained within another namespace.

by using the `using` keyword we can import a namespace into our code (like open in F#), thereby shortening our code from this:
`System.Console.ReadLine()`
to this:
`Console.ReadLine()`
#### Global using statements 
As you build more complex C# applications, you will most likely have namespaces repeated in multiple files. Introduced in C# 10, namespaces can be referenced globally, and then be available in every file in the project automatically. Simply add the global keyword in front of your using statements, like this:
`global using System;`
all global using statements must come before any non-global using statements.
## Referencing External Assemblies
When using Windows, each version of the runtime and SDK gets installed into `c:\Program Files\dotnet.`

Adding assemblies into most .NET projects is done by adding NuGet package. However, .NET applications targeting (and being developed on) Windows still have access to COM libraries.

For an assembly to have access to another assembly that you are building, you need to add a reference from your assembly to the other assembly and have physical access to the other assembly. Depending on the development tool(for example Unity) you are using to build your .NET applications, you will have various ways to inform the compiler which assemblies you want to include during the compilation cycle.
# CS Chapter 2

![|250](https://i.imgur.com/SbBejyT.png)

Check the current version of the .NET SDK installed on your machine, enter the following:
`dotnet --version`

To show all of the .NET Core Runtimes installed on your machine, enter the following:
`dotnet --list-runtimes`

There are three different runtimes:
- Microsoft.AspNetCore.App (for building ASP.NET Core applications)
- Microsoft.NETCore.App (the foundational runtime for .NET)
- Microsoft.WindowsDesktop.App (for building WinForms and WPF applications)
If you are running a Windows OS, each of these must be version 6.0.0 (or higher). 

to show all of the SDKs installed, enter the following:
`dotnet --list-sdks`
the version must be 6.0.100 (or higher).

To start, open a folder: File ➤ Open Folder, navigate through the explorer window to where you want your solution and project to live. 

Next, open a terminal window: Terminal ➤ New Terminal or by pressing Ctl+`.

In the terminal window, enter the following command to create an empty .NET 5 solution file: `dotnet new sln -n SimpleCSharpConsoleApp -o .\VisualStudioCode`

This creates a new solution file with the name (-n) SimpleCSharpConsoleApp in a subdirectory (of the current directory) named VisualStudioCode. When using Visual Studio Code with a single project app, there is no need to create a solution file. Visual Studio is solution centric; Visual Studio Code is code centric

Next, create a new C# 9/.NET 5 (-f net6.0) console application named (-n) SimpleCSharpConsoleApp in a subdirectory (-o) of the same name:

`dotnet new console -lang c# -n SimpleCSharpConsoleApp -o .\VisualStudioCode\SimpleCSharpConsoleApp -f net6.0`

simpler: `dotnet new console -o project folder`

Finally, add the newly created project to the solution with the following command:
`dotnet sln .\VisualStudioCode\SimpleCSharpConsoleApp.sln add .\VisualStudioCode\SimpleCSharpConsoleApp`

To restore and build all of the projects in your solution, execute the following in the terminal/command window (make sure the command is executed in the same directory as the solution file): `dotnet build`

```ad-note
collapse: open
When `dotnet restore` and `dotnet build` are executed in a directory that contains a solution file, all of the projects in the solution are acted on. The commands can also be run on a single project by running the command in the directory of the C# project file (*.csproj).

```

run without debugging: `dotnet run`
