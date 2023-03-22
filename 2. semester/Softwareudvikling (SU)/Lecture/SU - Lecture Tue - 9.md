---
date: 28-02-23
day: Tue
week: 9
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags: UML
Summary: "UML core models"
---
##### Weekly note
[[Uge 9 - 2023]]
see related lecture: [[SU - Lecture Mon - 9]]
# UML Core Models - part 2
## Use Case Diagrams: Summary
 • Use case diagrams represent external behavior 
 • Use case diagrams are useful as an index into the use cases 
 • Use case descriptions provide meat of model, not the use case diagrams. 
 • All use cases need to be described for the model to be useful.
# Class diagrams 
![[Pasted image 20230228121134.png]]
Represent the structure of a system
Used:
- during requirements analysis to model problem domain concepts 
- during -system design to model subsystems and interfaces 
- during object design to model classes.
## Classes
![[Pasted image 20230228121200.png]]
[[SU - Lecture Mon - 9#UML core conventions|By the Core conventions of UML we see the following:]]
• Rectangles are classes or instances 
• Ovals are functions or use cases 

• A class represent a concept 
• A class encapsulates state **(attributes**) and behavior **(operations)**. 
• Each attribute has a **type**. 
• Each operation has a **signature**. 
• The class name is the only mandatory information.
### Instances
An instance of a class is a specification, like a car class, where an instance is a red car.  The name of the instance is <u>underlined</u>

attributes are represented with their values
![[Pasted image 20230228121930.png|250]]
## Attribute and operation declaration 
commas are used to distinguish each element in a declaration 

multiplicity:  how often does it exist 
### Attribute 
Visibility / name  : type , multiplicity = default value , {property values*} 
### Operation
visibility , name ({parameter}) : return type , {property values*}
### Parameter
direction , name : type multiplicity = default value , {property value*}
### Direction
which direction is the data flow going. 

Directions, which is used for declaring the parameter can be the following:
**in, out, inout**
### Property value
a property value can be the following: **ordered, read-only, redefines**

Visibility can be the following:
- `+` public
- `-` private
- `#` protected (member is accessible by subclasses/- objects)
- `/` Derived (can be combined with one of the others)
- `~` Package (member is accessible by classes/objects in same package)
## Actor vs Instance
Actor: An entity outside the system to be modeled, interacting with the system (“Passenger”)

Class: An abstraction modeling an entity in the problem domain, must be modeled inside the system (“User”)

Object: A specific instance of a class (“Joe, the passenger who is purchasing a ticket from the ticket distributor”).
## Associations 
Associations denote relationships between classes. 

The multiplicity of an association end denotes how many objects the source object can legitimately reference

Here TarifSchedule and TripLeg are associated 
![[Pasted image 20230228123052.png]]

This is a one-to-one association
![[Pasted image 20230228123144.png]]

this is a one-to-many association 
![[Pasted image 20230228123203.png]]

this is a many-to-many association
![[Pasted image 20230228123239.png]]

Problem Statement: A stock exchange lists many companies. Each company is uniquely identified by a ticker symbol

here is the class diagram for that problem statement: 

the star * denotes that stockexchange have many companies and that a company have many stockexchanges. 
![[Pasted image 20230228123321.png]]
Lists point from company to stockexchange and the other way around. 

which is then easily turned into code 
```csharp
public class StockExchange { 
	private List company = new List(); 
};
public class Company { 
	public int tickerSymbol; 
	private List stockExchange = new List(); 
};
```
## Aggregation
An aggregation is a special case of association denoting a “consists of” hierarchy.

The **aggregate** is the **parent class**, the *components* are the *children class*

A solid diamond denotes **composition**, a strong form of aggregation where components cannot exist without the aggregate.
![[Pasted image 20230228123630.png]]

**Qualifiers** can be used to reduce the multiplicity of an association.
![[Pasted image 20230228123656.png]]

## Inheritance
Inheritance is great for allowing a class to act as both it's parent class or as it's own object. 

builds a hierarchy 

from a design perspective: is-a 

a red car *is a* car 

The children classes inherit the attributes and operations of the parent class.
![[Pasted image 20230228123745.png]]
Composition: related to inhertance, consists-of 

## Stereotypes/Classifiers
What is about class/object modifiers? abstract, interface...

one of three ways to extend UML notation is Stereotypes/Classifiers

Name enclosed by guillemets « » or << >>
placed above the name of another element.
### interfaces 
For interfaces « Interface »
![[Pasted image 20230228124107.png]]

Interface is defined as a syntactical contract that all the classes implement the interface should follow.

Interfaces define properties, methods, indexers, and events, which are the members. Interfaces contain only the declaration of the members. like .Fsi files in F#
### abstract classes
Abstract classes specified { Abstract } under class name

cannot be instantiated 

Abstract classes are not instantiable (no object can be derived)

Abstract classes are used as interfaces in cases when only few methods have to be declared.

acts like and interface, it specify a what, but also gives a how. 

an abstract phenomena 
## Class Identification
![[Pasted image 20230228124227.png|100]]
Class Identification: 
	Name of Class
	Attributes 
	Methods
Encourage Brainstorming
1) Find New Objects CustomerId AccountId
2) Iterate on Names, Attributes and Methods
3) Find Associations between Objects 
4) Label the assocations 
5) Determine the multiplicity of the assocations
## Practice object modeling
![](https://i.imgur.com/H3AprNK.png)
## Packages
A package is a UML mechanism for organizing elements into groups (usually not an application domain concept)

Packages are the basic grouping construct with which you may organize UML models to increase their readability.
![|300](https://i.imgur.com/HhlhSlW.png)
A complex system can be decomposed into subsystems, where each subsystem is modeled as a package
# UML sequence diagrams
![|200](https://i.imgur.com/p03H7Ws.png)
• Used during requirements analysis 
• To refine use case descriptions 
• to find additional objects (“participating objects”) • Used during system design
• to refine subsystem interfaces 
• Classes are represented by columns 
• Messages are represented by arrows 
• Activations are represented by narrow rectangles 
• Lifelines are represented by dashed lines
## Nested messages
![](https://i.imgur.com/xRwhbku.png)
The source of an arrow indicates the activation which sent the message 

An activation is as long as all nested activations 

Horizontal dashed arrows indicate data flow 

Vertical dashed lines indicate lifelines

![](https://i.imgur.com/fe4mDDp.png)
Iteration is denoted by a * preceding the message name

Condition is denoted by boolean expression in [ ] before the message name
![](https://i.imgur.com/fQKQyit.png)
Creation is denoted by a message arrow pointing to the object. 

Destruction is denoted by an X mark at the end of the destruction activation.

in garbage collection environments, destruction can be used to denote the end of the useful life of an object.

## Sequence Diagram Summary
UML sequence diagram represent behavior in terms of interactions.  

Useful to find missing objects. 

Time consuming to build but worth the investment. 

Complement the class diagrams (which represent structure).
# State Chart Diagrams
![](https://i.imgur.com/rFLe1UD.png)
Represent behavior as states and transitions
# Activity Diagrams
An activity diagram shows flow control within a system
![](https://i.imgur.com/PgliNlc.png)
An activity diagram is a special case of a state chart diagram in which states are activities (“functions”)

Two types of states:
	**Action state:**
		- Cannot be decomposed any further
		- Happens “instantaneously” with respect to the level of abstraction used in the model
	**Activity state:**
		- Can be decomposed further
		- The activity is modeled by another activity diagram
## Modeling Decisions
![](https://i.imgur.com/TDFYofN.png)
## Modeling Concurrency
• Synchronization of multiple activities 
• Splitting the flow of control into multiple threads
![](https://i.imgur.com/6ha21Ze.png)
## Swimlanes
Actions may be grouped into swimlanes to denote the object or subsystem that implements the actions.
![](https://i.imgur.com/lYLorGF.png)

# Statechart Diagram vs. Activity Diagram
![](https://i.imgur.com/Af6cGlg.png)
# What should be done first? Coding or Modeling?
It all depend...

• Forward Engineering: 
	• Creation of code from a model 
	• Greenfield projects
• Reverse Engineering: 
	• Creation of a model from code 
	• Interface or reengineering projects
• Roundtrip Engineering: 
	• Move constantly between forward and reverse engineering 
	• Useful when requirements, technology and schedule are changing frequently
# UML Summary
UML provides a wide variety of notations for representing many aspects of software development
• Can be misused to generate unreadable models 
• Can be misunderstood when using too many exotic features

• We concentrate on a few notations: 
	• Functional model: Use case diagram 
	• Object model: class diagram 
	• Dynamic model: sequence diagrams, statechart and activity diagrams