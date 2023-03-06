---
date: 27-02-23
day: Mon
week: 9
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags: UML
Summary: "Intro to modeling & UML core models"
---
##### Weekly note
[[Uge 9 - 2023]]

# Modeling
A **model** is an abstraction describing a subset of a system

A **view** depicts selected aspects of a model

A **notation** is a set of graphical or textual rules for  
depicting views

example:
System: Aircraft 
Model: flight simulator 
Views: Blueprint, electrical wiring.
## UML diagrams
### What is UML?
**UML (Unified Modeling Language)**  
	• An emerging standard for modeling object-oriented software.  
	• Resulted from the convergence of notations from three  
**leading object-oriented methods:**  
	•OMT (James Rumbaugh)  
	•OOSE (Ivar Jacobson)  
	•Booch (Grady Booch)
You can model 80% of most problems by using about 20 % UML


**Use case Diagrams:**
	• Describe the functional behavior of the system as seen by the user.  
**Class diagrams:**
	• Describe the static structure of the system: Objects, Attributes, Associations  
	![|500](https://i.imgur.com/1SfhcrJ.png)

**Sequence diagrams:**
	• Describe the dynamic behavior between actors and the system and between objects of the system  
	![|500](https://i.imgur.com/PNycPey.png)

**Statechart diagrams:**  
	• Describe the dynamic behavior of an individual object (essentially a finite state automaton)  
	•Activity Diagrams• Model the dynamic behavior of a system, in particular the  workflow (essentially a flowchart)
	![|500](https://i.imgur.com/oOVOcyq.png)
Use case diagrams represent the functionality of the system  from user’s point of view
#### Other UML Notations
**Structural diagrams:**  
	• Component diagrams  
	• Deployment diagrams  
	• Composite structure diagram  
	• Deployment diagram  
	• Object diagram  
	• Package diagram  
	• Profile diagram
**Behavioral UML diagrams:** 
	• Activity diagram  
	• Communication diagram  
	• Interaction overview diagram  
	• State diagram  
	• Timing diagram  
	•Object constraint language (OCL)
### Concepts and Phenomena
**Phenomenon**
	• An object in the world of a domain as you perceive it  
	• Example: The lecture you are attending  
	• Example: My black watch  
**Concept**
	• Describes the properties of phenomena that are common.  
	• Example: Lectures on software engineering  
	• Example: Black watches  
**Concept is a 3-tuple:**  
	• Name (To distinguish it from other concepts)  
	• Purpose (Properties that determine if a phenomenon is a member of a concept)  
	• Members (The set of phenomena which are part of the concept)
**Abstraction:**  
	• Classification of phenomena into concepts - Class in OOP 
**Modeling:**  
	• Development of abstractions to answer specific questions about a set of phenomena while ignoring irrelevant details.
### Concepts in software: Type and Instance
**Type:**  
	• An abstraction in the context of programming languages  
	• Name: int, Purpose: integral number, Members: 0, -1, 1,  2, -2, . . .  
**Instance:**  
	• Member of a specific type  
	•The type of a variable represents all possible instances the variable can take  
**The following relationships are similar:**  
	• “type” <–> “instance”  
	• “concept” <–> “phenomenon”
![|400](https://i.imgur.com/ZFI49UM.png)
### Abstract Data Types & Classes
Abstract data type 
	• Special type whose implementation is hidden from the rest of the system.  
Class:
	• An abstraction in the context of object-oriented languages
Like an abstract data type, a class encapsulates both state (variables) and behavior (methods):  
	• Class Vector  
•Unlike abstract data types, classes can be defined in terms of other classes using inheritance

OOP principles - for exam:
Like an abstract data type, a class encapsulates both state (variables) and behavior (methods)
### Object-oriented modeling
## UML core conventions
• Rectangles are classes or instances 
• Ovals are functions or use cases 
• Instances are denoted with an underlined names 
	• <u>myWatch:SimpleWatch</u> 
	•<u>Joe:Firefighter</u> 
• Types are denoted with non underlined names 
	• SimpleWatch 
	• Firefighter 
• Diagrams are graphs 
	• Nodes are entities 
	• Arcs are relationships between entities
## Use Case Diagrams
![[Pasted image 20230228120704.png]]
• Used during requirements elicitation to represent external behavior 
• Actors represent roles, that is, a type of user of the system 
• Use cases represent a sequence of interaction for a type of functionality 
• The use case model is the set of all use cases. It is a complete description of the functionality of the system and its environment

• An actor models an external entity which communicates with the system: 
	• User 
	• External system 
	• Physical environment 
• An actor has a unique name and an optional description. Examples: 
	• Passenger: A person in the train 
	• GPS satellite: Provides the system with GPS coordinates
![|100](https://i.imgur.com/ZcYWW6Z.png)
### Types of actors 
**Initiating actor (also called primary actor or “user”):** initiates the use case to realize a goal 

**Participating actor (also called secondary actor):** participates in the use case but does not initiate it: 

**Supporting actor:** helps the system-to-be to complete the use case 

**Offstage actor:** passively participates in the use case, i.e., neither initiates nor helps complete the use case, but may be notified about some aspect of it (e.g., for keeping records)
### Use case
A use case represents a class of functionality provided by the system as an event flow.
![|100](https://i.imgur.com/DSETbe2.png)
A use case consists of: 
	• Unique name 
	• Participating actors 
	• Entry conditions 
	• Flow of events 
	• Exit conditions 
	• Special requirements
## Use case diagram example
![](https://i.imgur.com/sHS3Xvp.png)
• $<<extends>>$ relationships represent exceptional or seldom invoked cases. 
• The exceptional event flows are factored out of the main event flow for clarity. 
• Use cases representing exceptional flows can extend more than one use case. 
• The direction of a $<<extends>>$ relationship is to the extended use case
![|200](https://i.imgur.com/sH50Egz.png)
• $<<includes>>$ relationship represents behavior that is factored out of the use case. 
• $<<includes>>$ behavior is factored out for reuse, not because it is an exception. 
• The direction of a $<<includes>>$ relationship is to the using use case (unlike $<<includes>>$ relationships)
## Deriving Use Cases from System Requirements
![[Pasted image 20230228120245.png]]
## Use Case Diagram: Device Control
![[Pasted image 20230228120335.png]]
## Use Case Diagram: Account Management
![[Pasted image 20230228120418.png]]
## Traceability Matrix and it's purpose
![[Pasted image 20230228120556.png]]
• checks that all requirements are covered by the use cases 
• To check that none of the use cases is introduced without a reason (i.e., created not in response to any requirement) 
• To prioritize the work on use cases
## Use Case Diagrams: Summary
 • Use case diagrams represent external behavior 
 • Use case diagrams are useful as an index into the use cases 
 • Use case descriptions provide meat of model, not the use case diagrams. 
 • All use cases need to be described for the model to be useful.
## Acceptance Test Case
![[Pasted image 20230228120756.png]]