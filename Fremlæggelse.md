# Design
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090251.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090304.png]]
observer - one to many relationship

<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090335.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090345.png]]
Tightly coupled -> Hard debugging
![[Pasted image 20230620090438.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090531.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620090541.png]]

Traceability Matrix (2) Mapping: Use cases to Domain model

System Sequence Diagrams considered interactions between the actors

In use case analysis, we consider the system as a “black box. In domain analysis, we consider the system as a “transparent box”
## Patterns
Abstract from a concrete problem to a context less solution
Lignende løsninger til lignende problemer, skal dog tailors til ens specifikke use case.
### facade
![[Pasted image 20230620093615.png]]
### Builder
### singleton
### Factory
### Observer
## Uml  (Unified Modeling Language)
Describe the static structure of the system: Objects, Attributes, Associations
Object model: class diagram
Can be misunderstood when using too many exotic features
during requirements analysis to model problem domain concepts
A class represent a concept
during object design to model classes.
A class encapsulates state (attributes) and behavior (operations)

Associations
The multiplicity of an association end denotes how many objects the source object can legitimately reference. MISSING

1 to 1, many to many
aggregation and composition
inheritance

Abstract classes are used as interfaces in cases when only few methods have to be declared.

Abstract classes model concepts in domain model which are important as an abstraction but do not have tangible entity.

Abstract classes specified { Abstract } under class name

They ignore irrelevant details and • They only represent the relevant details. • What is relevant or irrelevant depends on the purpose of the model.

Software is getting increasingly more complex

Code is not easily understandable by developers who did not write it

a class encapsulates both state (variables) and behavior (methods)
# Testing
Processen i Integration-Testing: 1. Baseret på strategy, udvælg et component som skal testes. 2. Sammensæt componenten med drivers og stubs 3. Functional testing: Test alle use cases med componentet 4. Structural testing: Enten White-Box eller Black-Box

Being confident due to TDD is true only in moment when you know your tests are bulletproof - most of beginners practitioners won't have that level of confidence you would have after years of TDD though
![[Pasted image 20230226084702.png]]
red green refactor.  

functional tests 
1. unit (validate/test individual units ie individual classes or methods and see that they behave correctly/as intended)
2. integration (testing multiple units togheter, testing that points are rechieved when block is destroyed) or state is switched when life reaches 0.
3. end - to - end : emulate user behavior. 
system testing (would catch bugs such as extensive us of memory)
non functtional 
- playtesting 
- stresstesting
testing performance, usability 

white box - finds unreachable code, infinite loops
## Unit
## integration
### stubs og drivers

## White box
## black box
## andre typer
# Software development life cycle
## agile
Agile's focus on simplicity, incremental changes, and the ability to respond to changes quickly and efficiently


Incremental delivery The software is developed in increments with the customer specifying the requirements to be included in each increment.

The skills of the development team should be recognized and exploited. Team members should be left to develop their own ways of working without prescriptive processes

Expect the system requirements to change and so design the system to accommodate these changes

Focus on simplicity in both the software being developed and in the development process. Wherever possible, actively work to eliminate complexity from the system.

Because of their focus on small, tightly-integrated teams, there are problems in scaling agile methods to large systems.

2 week sprints, customer involvement?

techincal debt

plan driven og agile?

SCRUM - what did you do, what will you do, do you have any trouble 

tech lead for individual tasks

pair programming - when something wasnt working

### code reviews
code reviews  Non-functional requirements/code qualities - walkthrough: informal discussion of code between author and a single reviewer. bad design, Lack of clarity, style guide
![](https://i.imgur.com/dSuoeJn.png)
![](https://i.imgur.com/YrHHtfq.png)
is this maintainable, for if we have to change things
### code quality
Software becomes obsolete very quickly • because of fast evolution of technology, requirements or knowledge, equires continuous innovation and evolution



mangler at aflklare association type
få styr på dependecy inversion principle og grasp

# Code quality
Fagan‘s snail curve: The longer defects remain in the system, the more expensive they become

Poor architecture can cause many quality problems including but not limited to: 
• Fragility 
• Lack of scalability (Code Maintainability à) 
• Resistance to modification (Code Maintainability à)

Maintainability (ease of maintenance) 
• Software must evolve to meet changing needs 
• Software costs more to maintain than it does to develop. For systems with a long life, maintenance costs may be several times development costs
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620091842.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620091857.png]]

Does usage and time cause degradation of a software product quality? yes, render i states

Static & Dynamic Code Analysis to find programming errors
Validate requirements to ensure that they are correct, unambiguous, complete, and verifiable
# Code review
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620092200.png]]
Reviewer gives suggestions for improvement on a logical and/or structural level, to conform to previously agreed upon set of quality standards.
Feedback leads to refactoring, followed by a 2nd code review. 
Eventually reviewer approves code

<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620092317.png]]

<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620092330.png]]

A code review checklist change depending on what type of error we have 
- data reference errors
	- Is an un-initialized variable referenced?
	- s a variable assigned a value that’s of a different type than the variable?
- data declaration errors
	- If a variable is initialized at its declaration, is it properly initialized and consistent with its type?
- computation errors
- control flow errors
- comparison errors
![[Pasted image 20230620092645.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620092706.png]]
Defects: 
- Functional (programmet fungerer ikke som forventet) 
- Performance (Er koden langsom / ram brug) 
- Error Handling (Hvordan håndtere man fejl?) 
- Configuration (Fungerer det på alt hardware og software) 
- Race conditions (Sker der fejl afhængig af rækkefølgen)
# Code complexity
# Debugging
Bug = result of coding error Defect = deviation from requirements

use tdd 

print statements
Debugger
