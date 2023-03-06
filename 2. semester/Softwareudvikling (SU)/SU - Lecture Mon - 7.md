---
date: 13-02-23
day: Mon
week: 7
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 7 - 2023]]
# Principles of OOP
Objects can represent **abstract** concepts

Data in an object can **encapsulated**, meaning it can be be treated as a unit, protecting it from unintended access.

Don't expose internal implementation details, **hide information**

Reuse functionality by **inheriting** from other objects  

With a base type we can handle all descendant types in a uniform way (**Polymorphism**)
# States
Public fields should be capitalized
#### Abstract classes
- An abstract class cannot be instantiated
- A class that inherits from an abstract can ...
- An abstract method is a method that must be overriden

Abstract classes must be overriden.
# Value types vs. Reference types

Variables of value types directly contain their data while reference types store references to their data.
- Strings and objects are reference types
- All class instances are reference types
- Tuples are value types
- *struct*  offers a way to declare value types
# Nullable types
If a reference type refers to 0  it will try to access its supposed members which will led to a *NullReferenceException*
- Types are non-nullable by default
- A chain of dereferences will evaluate to *null* if any of the intermediate nullable dereferences lead to *null*
# Static
- A static member is accesible without having an instance of the enclosing type
- It is a good way to define
    - Constants
    - Utility functions
    - Interaction with the outside world
- static members should be used sparingly