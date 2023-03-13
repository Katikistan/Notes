---
date: 13-03-23
day: Mon
week: 11
year: 2023
type: Wiki
course: SU
status: open
semester: 2
tags: SOLID, Designpatterns
Summary: "SOLID principles and design patterns"
---
##### Weekly note
[[Uge 11 - 2023]]

What are reasons for unsuccessful applications? 
	• Putting more functionalities on classes 
	• Implementing tight coupling between software components (i.e., between classes). If classes are dependent on each other, then change in one class will affect other classes also 

How to overcome these problems? 
	• Need to use correct design 
	• Need to follow design principles (i.e., SOLID Principles, GRASP Principles) 
	• Need to choose correct design patterns

The principles, when applied together, intend to make easy to maintain and extend over time system
# S – SRP - Single responsibility principle
Every class, function, variable should define a single responsibility, and that responsibility should be entirely encapsulated by the context

It is important to keep a class focused on a single concern is that it makes the class more robust

“There should never be more than one reason for a class to change.”

Each responsibility should be a separate class, because each responsibility is an axis of change. A class should have one, and only one, reason to change. If a change to the business rules causes a class to change, then a change to the database schema, GUI, report format, or any other segment of the system should not force that class to change.

Think of an car assembly line where each robot have been streamlined for one task.

• Axis of Change
• Separation of Concern
• Test-Driven Development
• Logical Separation of Namespaces And Assemblies
# O – OCP - Open/closed principle 
Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification that is, such an entity can allow its behavior to be extended without modifying its source code

This is especially valuable in a production environment, where changes to source code may necessitate code reviews, unit tests, and other such procedures to qualify it for use in a product

software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification.”

You can easily change the lens of most SLR cameras without having to saw off the old lens and weld on a new one


Meyer's Open/Closed Principle 
	• Implementation of a class should only be modified to correct errors. 
	• Changes or new features require that a different class be created (Interfaces)
Polymorphic Open/Closed Principle 
	• All member variables should be private. 
	• Global variables should be avoided

# L – LSP - Liskov substitution principle
It is a particular definition of a subtyping relation, called behavioral subtyping

If S is a subtype of T, then objects of type T may be replaced with objects of type S *without altering* any of the desirable properties of that program

“Objects in a program should be replaceable with instances of their subtypes without altering the correctness of that program” 

“Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it.”

- Polymorphism
- Test-Driven Development (TDD)
- Avoid Run-Time Type Information (RTTI)
### Objects should be replaceable with subtypes
When overriding a class you must be carful that the way you extend it does not cause it to no longer work in place of the class it inherited from
![[Pasted image 20230313093107.png|400]]
# I – ISP - Interface segregation principle
It states that no client should be forced to depend on methods it does not use

ISP splits interfaces which are very large into smaller and more specific ones so that clients will only have to know about the methods that are of interest to them

“Many client specific interfaces are better than one general purpose interface” 

“Clients should not be forced to depend upon interfaces that they do not use.”

- Design by contract (DbC) / Design to Interfaces 
- Test-Driven Development (TDD)

Many specific interfaces are better than one general

Clients should not depend upon interfaces that they do not use
![[Pasted image 20230313093256.png|300]]
Each interface should specifically describe only what is needed and nothing more
# D – DIP - Dependency inversion principle
High-level modules should not depend on low-level modules: both should depend on abstractions.

Abstractions should not depend on details. Details should depend on abstractions.

“High level modules should not depend upon low level modules. both should depend upon abstractions.” 

“Abstractions should not depend upon details. Details should depend upon abstractions.”

- Loose Coupling
- Dependency Injection / Inversion of Control
### Dependency Injection / Inversion of Control
![[Pasted image 20230313093422.png]]

High & low level modules should depend upon abstractions

No reference or dependency to a specific Data access technology should ever exist outside of the Data Access Assembly this includes ADO.net, LinqToSql, EF4, Nhibernate... 

Only Interfaces and POCO (Plain Old CLR Objects) should be referenced between assemblies and primarily they should reference an interface.
# SOLID BAD SMELLS
![[Pasted image 20230313093520.png|350]]
# A SOLID Summary
### SRP: 
There should never be more than one reason for a class to change
### OCP: 
Software entities should be open for extension but closed for modification
### LSP: 
Functions that use references to base classes must be able to use objects of derived classes without knowing it.
### ISP: 
Clients should not be forced to depend upon interfaces that they do not use .
### DIP: 
• High level modules should not depend upon low level modules. Both should depend upon abstractions. 
• Abstractions should not depend upon details. Details should depend upon abstractions
