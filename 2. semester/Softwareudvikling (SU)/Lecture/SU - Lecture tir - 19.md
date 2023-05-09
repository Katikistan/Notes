---
date: 09-05-23
day: tir
week: 19
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: "Testing strategy
---
##### Weekly note
[[Uge 19 - 2023]]

![](https://i.imgur.com/fIlzcSo.png)
# Unit testing
Testing of individual software "units" (i.e., classes, routines)
White box testing
## TDD
Writing test cases first forces you to think about the requirements and design before writing the code, which leads to a better design
## Stubs and drivers
Writing test cases first will help you detect and remove bugs sooner
![](https://i.imgur.com/yRT5Fq3.png)
### Stubs
• Do nothing 
• Validate the method inputs 
• Validate method call sequence (including parameter values) 
• Send a message to a log 
• Return a hard-coded answer regardless of the input 
• Select an answer from a pool of hard-coded answers 
• Cycle through the pool or randomly select one 
• Randomly generate an answer 
• Prompt the user for the answer
• Simple implementation of the module that is slower, less accurate, or somehow less capable than the real module 
• Pause for awhile to simulate the time taken by the real module 
• Generate errors (e.g., throw exceptions) that are hard to produce for real
### Drivers
• Invokes the class with fixed inputs 
• If an oracle is available, inputs can be generated rather than fixed 
• Compares actual outputs with expected outputs 
• Records failure if expected and actual outputs don’t match 
• Normally continues to execute even if a test case fails 
• Generates report detailing what worked and what didn’t 
• Drivers and stubs must be designed together 
• Since stubs don’t produce “real” outputs, the expected results in the driver must take into account the “fake” behavior of the stubs
# Integration testing
combining the individual software units into larger functional units

If the units work individually, why wouldn't they work when you put them together?

**Incremental integration:**
• Add a piece, retest the system, Add a piece, retest the system, … 
• If it breaks, you know what caused the problem (i.e., the last piece you added)

Integration Testing is testing that's done during integration to ensure that the system continues to work each time a new piece is added



The entire system is viewed as a collection of subsystems (sets of classes) determined during the system and object design.
## Top-down integration
![](https://i.imgur.com/V8WDzPx.png)
![](https://i.imgur.com/afkXAi6.png)
### Pros
Test cases can be defined in terms of the functionality of the system
### Cons
Writing stubs can be difficult: Stubs must allow all possible conditions to be tested

Possibly a very large number of stubs may be required, especially if the lowest level of the system contains many methods

*One solution to avoid too many stubs: Modified topdown testing strategy*
- *Test each layer of the system decomposition individually before merging the layers*
- *Disadvantage of modified top-down testing: Both, stubs and drivers are needed*
## bottom-up integration
![](https://i.imgur.com/sHrOqec.png)
![](https://i.imgur.com/VrAu9Ng.png)
### pros 
Useful for integrating 
- Object-oriented systems 
- real-time systems
- systems with strict performance requirements
### cons
Bad for functionally decomposed systems:
- Tests the most important subsystem (UI) last
## Sandwich Testing Strategy
### pros
Top and Bottom Layer Tests can be done in parallel
### Cons
Does not test the individual subsystems thoroughly before integration, therefore modified sandwhich testing strat:
### Modified sandwhich testing strat
**top layer replaces drivers
bottom layer replaces stubs**
![](https://i.imgur.com/qBlDQcd.png)
Test in parallel: 
	• Middle layer with drivers and stubs 
	• Top layer with stubs 
	• Bottom layer with drivers
## Steps in integration testing 
1. select a component to be tested. Unit test all the classes in the component.
2. Put selected component together; do any preliminary fix-up necessary to make the integration test operational.
3. Do functional testing: Define test cases that exercise all uses cases with the selected component
4. Do structural testing: Define test cases that exercise the selected component.
5. performance tests
6. Repeat steps until the full system is tested.

Engineers must never break the build, and are responsible for adding new test cases to exercise the new code
## Unit testing vs integration testing
Unit testing uses stubs to isolate the module under test from its dependencies

Bottom-up integration testing does not (i.e., modules call their “real” dependencies)
## System testing
**Black box**
### acceptance testing
### alpha testing
### beta testing
## Regression testing
# Who is testing
![](https://i.imgur.com/um22WjP.png)
# Summary 

