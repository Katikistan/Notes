---
date: 20-03-23
day: man
week: 12
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 12 - 2023]]

# Object model
An object consists of a pair: private  state s in S, and public methods, functions  
{f1: S x T<sub>1</sub> → S x U<sub>1</sub>, ..., fn: S x T<sub>n</sub> → S x U<sub>n</sub>}
An object is  stateless if  S = unit (the unit type, containing exactly one element, written ())

A class is a stateless object that contains object constructors for objects with state of type S

Objects are created by constructor functions

Object type is the type of the public methods, without mentioning the state type (which is confidential/private)

We say the state is encapsulated by the methods.

# Commands and queries
in OO languages the state of an object may encompass the entire heap, The heap can be the  
entire run-time memory of a running process

Invoking a method on an object may change the state of any number of other objects, including the caller’s state

every method  f: S x T → S x U can be mathematically decomposed into a query and a command
f<sup>query</sup>: S x T → U
f<sup>command</sup>: S x T -> S

immutable object: Object with only queries.

Design pattern: Command Query Separation
A method is either a command or a query.
# Object invariants
Logical property P that must hold of all internal states an object is in.
Must be preserved under all state updates.

Useful for proving post-conditions
E.g., Invariant: counter >= 0.
# Defensive Programming
![[Pasted image 20230320093114.png]]
static and runtime checking (configurable per project)
inheritable contracts
support for abstract classes and interfaces
## Preconditions 

```csharp
public int Add(int a, int b)  
{  
	Contract.Requires<ArgumentOutOfRangeException>(a >= 0);  
	Contract.Requires<ArgumentOutOfRangeException>(b >= 0);  
	// main logic  
}
```
## Postconditions

```csharp
public int Add(int a, int b)  
{  
	// pre-conditions  
	Contract.Ensures(Contract.Result<int>() >= 0);  
	// main logic
}
```
## Object Invariants

```csharp
[ContractInvariantMethod]  
private void CheckIfLastResultIsInRange()  
{  
	Contract.Invariant(lastResult >= 0);  
}
```
# Summary
• Object model and properties  
• Interface contracts  
• Design by Contract  
• Static and runtime checking of  
	• pre-conditions  
	• post-conditions  
	• object invariants  
• Defensive programming  
• Run-time monitoring of contracts  
	• assertions