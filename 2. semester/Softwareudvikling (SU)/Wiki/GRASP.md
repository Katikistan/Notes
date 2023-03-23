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

The General Responsibility Assignment Software Patterns (GRASP) is a set of principles for object-oriented design that helps developers identify and assign responsibilities to classes and objects in a software system. It provides a set of guidelines to determine the responsibilities of different objects in a system, helping to make the system more modular, maintainable, and extensible.
##  nine core principles
### Information Expert (cf. information hiding) 
determines where to delegate responsibilities, e.g., methods and computation

This pattern defines which object has the necessary information or knowledge to perform a particular task or operation. It helps in identifying the objects that are best suited to perform a particular responsibility.

**Problem:** What is a basic principle by which to assign responsibilities to objects?  

**Solution:** Assign responsibility to the class that has the information needed to fulfill it.

determine where to delegate responsibilities such as methods, computed fields, and so on.

Using the principle of information expert, a general approach to assigning responsibilities is to look at a given responsibility, determine the information needed to fulfill it, and then determine where that information is stored.

This will lead to placing the responsibility on the class with the most information required to fulfill it.
### Creator 
Determines responsibility for object creation. It helps in determining how objects are instantiated in a system.

The creation of objects is one of the most common activities in an object-oriented system. Which class is responsible for creating objects is a fundamental property of the relationship between objects of particular classes

**Problem:** Who creates object `A`?

**Solution:** In general, Assign class `B` the responsibility to create object `A` if one, or preferably more, of the following apply:

-   Instances of `B` contain or compositely aggregate instances of `A`
-   Instances of `B` record instances of `A`
-   Instances of `B` closely use instances of `A`
-   Instances of `B` have the initializing information for instances of `A` and pass it on creation.

**Related Pattern or Principle**: Low Coupling, Factory pattern
### Controller 
non-user interface object responsible for receiving or handling system events 

This pattern defines which object is responsible for handling user requests or inputs, and coordinating interactions between different objects in the system.

The **controller** pattern assigns the responsibility of dealing with system events to a non-[UI](https://codedocs.org/what-is/user-interface "User Interface") class that represents the overall system or a use case scenario. A controller object is a non-user interface object responsible for receiving or handling a system event.

**Problem:** Who should be responsible for handling an input system event?  

**Solution:** A use case controller should be used to deal with _all_ system events of a use case, and may be used for more than one use case. For instance, for the use cases _Create User_ and _Delete User_, one can have a single class called _UserController_, instead of two separate use case controllers.

The controller is defined as the first object beyond the UI layer that receives and coordinates ("controls") a system operation. The controller should delegate the work that needs to be done to other objects; it coordinates or controls the activity. It should not do much work itself. The GRASP Controller can be thought of as being a part of the application/service layer (assuming that the application has made an explicit distinction between the application/service layer and the domain layer) in an object-oriented system with common layers in an information system logical architecture.

**Related Pattern or Principle**: [Command](https://codedocs.org/what-is/command-pattern "Command pattern"), [Facade](https://codedocs.org/what-is/facade-pattern "Facade pattern"), Layers, Pure Fabrication
### Low [[Coupling]] (cf. Code Complexity lecture B4-03) 
measures of how strongly one element is dependent on other elements

[[Coupling]] is a measure of how strongly one element is connected to, has knowledge of, or relies on other elements. **Low [[Coupling|coupling]] is an evaluative pattern that dictates how to assign responsibilities for the following benefits:

-   lower dependency between the classes,
-   change in one class having a lower impact on other classes,
-   higher reuse potential.


high vs low [[Coupling|coupling]]
![|200](https://i.imgur.com/EF3O9p3.png)

### High Cohesion (cf. Code Complexity lecture B4-03) 
responsibilities of given set of elements are strongly related and highly focused on rather specific topic

**High cohesion** is an evaluative pattern that attempts to keep objects appropriately focused, manageable and understandable. High cohesion is generally used in support of low coupling. High cohesion means that the responsibilities of a given element are strongly related and highly focused. Breaking programs into classes and subsystems is an example of activities that increase the cohesive properties of a system. Alternatively, low cohesion is a situation in which a given element has too many unrelated responsibilities. Elements with low cohesion often suffer from being hard to comprehend, reuse, maintain and change.


### polymorphism 
defining variation of behaviors based on type is assigned to the type for which this variation happens 

This pattern defines how objects should be designed to support multiple behaviors or implementations, in order to make the system more flexible and adaptable to changing requirements.

According to the **polymorphism** principle, responsibility for defining the variation of behaviors based on type is assigned to the type for which this variation happens. This is achieved using [polymorphic](https://codedocs.org/what-is/polymorphism-computer-science "Polymorphism (computer science)") operations. The user of the type should use polymorphic operations instead of explicit branching based on type.

**Problem:** How to handle alternatives based on type? How to create pluggable software components?  

**Solution:** When related alternatives or behaviors vary by type (class), assign responsibility for the behavior—using polymorphic operations—to the types for which the behavior varies. (Polymorphism has several related meanings. In this context, it means "giving the same name to services in different objects".)

### Pure Fabrication 
Entity is service and does not represent concept in problem domain

A **pure fabrication** is a class that does not represent a concept in the problem domain, specially made up to achieve low coupling, high cohesion, and the reuse potential thereof derived (when a solution presented by the _information expert_ pattern does not). This kind of class is called a "service" in [domain-driven design](https://codedocs.org/what-is/domain-driven-design "Domain-driven design").

**Related Patterns and Principles** • Low Coupling. • High Cohesion.

### indirection 
assigns responsibility of mediation between them to intermediate object instead of direct connection (man-in-the middle) 

The indirection pattern supports low coupling and reuses potential between two elements by assigning the responsibility of mediation between them to an intermediate object. An example of this is the introduction of a controller component for mediation between data (model) and its representation (view) in the model-view control pattern. This ensures that coupling between them remains low.

**Problem:** Where to assign responsibility, to avoid direct coupling between two (or more) things? How to de-couple objects so that low coupling is supported and reuse potential remains higher?  

**Solution:** Assign the responsibility to an intermediate object to mediate between other components or services so that they are not directly coupled.  

The intermediary creates an **indirection** between the other components.
### Protected variations
See also: [[SOLID principles#O – OCP - Open/closed principle|Open/Closed principle]]
protects elements from variations on other elements by wrapping focus of instability with interface and using polymorphism (cf. OCP)

The **protected variations** pattern protects elements from the variations on other elements (objects, systems, subsystems) by wrapping the focus of instability with an interface and using [polymorphism](https://codedocs.org/what-is/polymorphism-computer-science "Polymorphism (computer science)") to create various implementations of this interface.

**Problem:** How to design objects, subsystems, and systems so that the variations or instability in these elements does not have an undesirable impact on other elements?  

**Solution:** Identify points of predicted variation or instability; assign responsibilities to create a stable interface around them.





 