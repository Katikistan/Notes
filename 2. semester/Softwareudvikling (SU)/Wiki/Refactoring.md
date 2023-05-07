---
date: 07-05-23
day: søn
week: 18
year: 2023
type: Wiki
course: SU
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 18 - 2023]]

# Refactoring
**Definition**: Maintenance is modification or repair of a  
software product after it has been delivered

**Purposes:**  
• fix bugs  
• improve performance  
• improve design  
• add features
![](https://i.imgur.com/zHzBrSV.png)

**Refactoring** is improving a piece of software's internal  
structure without altering its external behavior.

Refactoring is not the same thing as:  
• adding features  
• debugging code  
• rewriting code

**Definition:** Refactoring is a disciplined technique for  
restructuring an existing body of code, altering its  
internal structure without changing its external  
behavior.

Tests are  
preserved under  
refactoring!!!!

Refactoring does not fix bugs, but it may help find  
bugs by scrutinizing code. It may also reduce the  
further introduction of bugs by cleaning-up code.  

• Refactoring does not add new functionality to the  
system, but it will ease the further adding of new  
functionality.  
• It is an essential part of agile software development
## why refactor
Why fix a part of your system that is not broken?

Each part of your system's code has three purposes:  
1. to execute its functionality,  
2. to allow change,  
3. to communicate well to developers who read it
![](https://i.imgur.com/86vB4p2.png)

best done continuously (like testing) as part of the process  
• hard to do well late in a project (like testing)

Refactor when you identify an area of your system  
that:  
• Is not well designed  
• Is not thoroughly tested, but seems to work so far  
• Is not easy to extend with new features
## when to refactor
#### Rule of Three
1.  When you’re doing something for the first time, just get it done.
2.  When you’re doing something similar for the second time, cringe at having to repeat but do the same thing anyway.
3.  When you’re doing something for the third time, start refactoring.
#### When adding a feature
-   Refactoring helps you understand other people’s code. If you have to deal with someone else’s dirty code, try to refactor it first. Clean code is much easier to grasp. You will improve it not only for yourself but also for those who use it after you.
-   Refactoring makes it easier to add new features. It’s much easier to make changes in clean code.

![](https://i.imgur.com/1BhDNzu.png)
![](https://i.imgur.com/tbUHp6m.png)
![](https://i.imgur.com/u1sf9TK.png)
## Checklist of refactoring done right way
#### The code should become cleaner.
#### New functionality shouldn’t be created during refactoring.
#### All existing tests must pass after refactoring.
There are two cases when tests can break down after refactoring:
-   **You made an error during refactoring.** This one is a no-brainer: go ahead and fix the error.
-   **Your tests were too low-level.** For example, you were testing private methods of classes.
In this case, the tests are to blame. You can either refactor the tests themselves or write an entirely new set of higher-level tests. A great way to avoid this kind of a situation is to write [BDD-style](https://refactoring.guru/refactoring/bdd) tests.
## code smells
![](https://i.imgur.com/VjaWntQ.png)
## types of refactoring
![](https://i.imgur.com/9h8Uxqa.png)
## refactoring patterns
![](https://i.imgur.com/0SfaWEZ.png)
## Code Quality Axes
• Functional  
	• The amount of functionality our code has  
	• Nice to maximize  
• Operational  
	• The amount of resources our code uses to achieve its  
	functionality  
	• Nice to minimize  
• Developmental  
	• The amount of resources we must exert for continued  
	development of the code base  
	• Nice to minimize
## refactor examples
**Pull Up Field:** Two subclasses have the same field.  
Refactor it by moving the field to the superclass.

**Push Down Method:** Behavior on a superclass is  
relevant only for some of its subclasses. Refactor it by  
moving it to those subclasses.

![](https://i.imgur.com/ACp2CUC.png)

## regression
What if refactoring introduces new bugs in previously  
working functionality ("regressions")? How can this be  
avoided?  
• Code being refactored should have good unit test  
coverage, and other tests (system, integration) over it,  
before the refactor.  
	• If such code is not tested, add tests first before refactoring.  
	• If the refactor makes a unit test not compile, port it.  
	• If the method being tested goes away, the underlying  functionality of that method should still be somewhere. So move the unit test to cover that new place in the code.
## rewrite
Rewrite: changing software from the scratch. Often rewrite seems to be faster, but...

## refactoring at google
"At Google, refactoring is very important and  
necessary/inevitable for any code base. If you're writing a new  
app quickly and adding lots of features, your initial design will  
not be perfect. Ideally, do  
small refactoring tasks early and  
often, as soon as there is a sign of a problem."
## Replacing a constructor with a factory method
During the course of improving the Account class, there has probably been an adverse effect elsewhere in the code. Clients of the class were expecting to construct the account objects by using the Account constructor, and to pass in the type of account required. What will you now provide them by way of creating the correct account subclass for their situation? The AccountType enumeration can be reused as a parameter to a new factory method on the AccountBase. Whereas a constructor, in conjunction with the new operator, returns an instance of the type in which it resides, a factory method is able to return many different types of object, all of which belong to the same inheritance hierarchy. Listing 6-6 shows such a factory method implemented on the base class

There are two key features of the factory method that alleviate the burden on clients. First, it is static, meaning that clients call it on the type, rather than on an instance of that type. Second, the return type is the base class, allowing you to hide the subclass accounts from clients. In fact, you can hide them to the degree that they are internal and therefore invisible outside of this assembly. This disallows clients from directly constructing the subclasses, eliminating the new operator as a potential code smell (see Chapter 3, “Dependencies and layering”). Listing 6-7 compares how a client would interact with the account before and after the refactor.
## Replacing a constructor with a factory class
There is an alternative to the factory method: the factory class. In fact, you do not need to couple clients to the implementation of a standalone factory; you can just give them the interface.
# Conclusion
Refactoring and unit testing are interdependent practices that are vital to the creation and maintenance of adaptive code. Code is in a constant state of flux and should never truly be considered absolute. Aside from adding new features as requirements shift, code should be aggressively refactored so that it has a better chance of standing the test of time. With aggressive refactoring— redesigning—the code will exhibit good design at its lowest levels, but new knowledge about the problem space will never be incorporated into the code. Consider the number of times that you “finish” a project and wish—weeks, months, or years later—that you could revise it because you finally “understand the requirements” or have learned a new technique that would have simplified the solution. Through consistent and diligent refactoring and redesigning, code is able to remain adaptive long into the future. Do not be tempted by the siren song of a system rewrite