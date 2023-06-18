kort forklar hvilke workflow metode vi har brugt. Evt nævn det til eksamen, de kommer nok til at spørge ind til det. 

find snippets før de er blevet refactoret og efter de er blevet refactored

timer mangler uml
playercollsion mangler kommentarer

points was refactored to be a singleton this helped to be able to access points in gamewon and gamelost

evt tage en specifik test med til eksamen
 
læs på på code complexity

# Fremlæggelse
## Design
### design patterns
factory 
builder
facade
observer - one to many relationship
state 
### Uml  (Unified Modeling Language)
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
### SOLID AND GRASP
creator 
## Implementation
### code snippets
### refactoring 

## Testing
Being confident due to TDD is true only in moment when you know your tests are bulletproof - most of beginners practitioners won't have that level of confidence you would have after years of TDD though

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

code coverage
### unit
### module
### sub system
### system
## Software development life cycle
### agile
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
efficenty, maintainablity, testability, Understandability

Software becomes obsolete very quickly • because of fast evolution of technology, requirements or knowledge, equires continuous innovation and evolution

shifted focused from secure to testable
### refactoring
efficient, refactored buttons, so they wont use huge amount of memory
had to change points to singleton
## Konklusion
code quality
