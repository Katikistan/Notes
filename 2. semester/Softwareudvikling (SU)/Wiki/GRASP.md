---
date: 22-03-23
day: ons
week: 11
year: 2023
type: Wiki
course: SU
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 11 - 2023]]

# GRASP

***G*eneral *R*esponsibility *A*ssignment *S*oftware *P*atterns** 
• Assigning responsibilities to classes is critical aspect of object-oriented design. Appropriate assignment of responsibilities to classes is key to successful design. There are fundamental principles in assigning responsibilities that experienced designers apply. These principles are summarized in GRASP patterns. 

Has nine core principles that object-oriented designers apply when assigning responsibilities to classes and designing message interactions
##  nine core principles
### Information Expert (cf. information hiding) 
determines where to delegate responsibilities, e.g., methods and computation
### Creator 
determines responsibility for object creation 
### Controller 
non-user interface object responsible for receiving or handling system events 
### Low Coupling (cf. Code Complexity lecture B4-03) 
measures of how strongly one element is dependent on other elements

high vs low coupling
![|200](https://i.imgur.com/EF3O9p3.png)

### High Cohesion (cf. Code Complexity lecture B4-03) 
responsibilities of given set of elements are strongly related and highly focused on rather specific topic
### polymorphism 
defining variation of behaviors based on type is assigned to the type for which this variation happens 
### Pure Fabrication 
Entity is service and does not represent concept in problem domain

### indirection 
assigns responsibility of mediation between them to intermediate object instead of direct connection (man-in-the middle) 
### Protected variations
protects elements from variations on other elements by wrapping focus of instability with interface and using polymorphism (cf. OCP)
