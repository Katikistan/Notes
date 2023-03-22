---
date: 13-03-23
day: Mon
week: 11
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags: Designpatterns
Summary: "Decorator, Strategy, Iterator, Observer"
---
##### Weekly note
[[Uge 11 - 2023]]

![](https://i.imgur.com/9RdzHyS.png)

# Decorator pattern  
•A Decorator pattern  
allows the creation of heterogeneous stack structures.  
•Approach:  
•A stack consists of structurally different elements,  
•the last element without a successor and  
•preceding elements, which have exactly one direct successor.  
•The different elements offer different attributes and different  
behavior.  
•But the attributes and behavior refer with regards to content  
always to all the following elements.  
•Each additional element expands (= decorates) the existing  
elements.  
•The entire stack has the same semantics like its second element.  
•Requirement:  
All elements must offer the same interface to the outside.
## Visualization Decorator pattern (object diagram)
you have an atom that becomes decorated
![](https://i.imgur.com/gcVwyp4.png)
![](https://i.imgur.com/VxvyHC1.png)
• Application scenarios for such stacks:  
	• Further properties (= previous items) should be added dynamically to an  
	output object (= the last element).  
	• With the addition of a property, the overall behavior of the stack has to be  
	changed, too.  
	• The order, in which properties can be added, should be arbitrary.  
	• The properties should also be able to be removed.  
	• A property may also be added multiple times.  
	• Further properties are to be supplemented easily during the development:  
	All objects have to meet the same interface.
![](https://i.imgur.com/zaUNJl3.png)
atom is a leaf, decor has a single single a ref to single component no star but a one 
## Examples for the use of the Decorator pattern
![](https://i.imgur.com/z7KLjQU.png)
## Visualization (example: price calculation for coffee)
![](https://i.imgur.com/d6R4Kiz.png)
![](https://i.imgur.com/ZwWDD6m.png)
![](https://i.imgur.com/wU2zeh1.png)
![](https://i.imgur.com/cq0zg9X.png)
## Summary of decorator pattern
### Advantages:  
•Atoms and decors are treated uniformly.  
•Several types of atoms or decors are possible.  
•New atom or decor classes can easily be added.  
•An atom is always associated with decors. It is not necessary to  
convert already existing objects.  
•It is not necessary to check the type of a component.  
•The constructed object structure is unlimited.  
•A stack is created, which is made up of specialized,  
heterogeneous nodes.
### Disadvantages:  
Memory can be an issue, you make alot of objects
Lot of message calls, you traverse a linked list essentially

# Covariant Conversions
Covariant Conversions (CoCo): A Design Pattern for Type-Safe Modular Software  Evolution in Object-Oriented Systems
# Strategy pattern
allows to change the behavior of the methods of an  
object during execution.  
• Examples:  
	•Arranging graphical elements in a window: Next to each other, among each other, in a grid, ....  
	•Design of text formatting: Left-aligned, right-aligned, centered, ...  
• But:  
	•Various types of behavior should be provided, without  
	expanding the class of the executing object.  
	•The behaviour is supposed to be established only after the  
	declaration of the class of the executing object.

• The behavior , which has to be changed, is encapsulated in a separate strategy class, which maintains a given interface.  
• The behavior of a strategy object is accessed during the execution.  
• If changes are made, the strategy object is replaced.
![](https://i.imgur.com/gm3FGJw.png)
![](https://i.imgur.com/xyNMYdy.png)
The choice of the strategy is done by the application not the class, it's an external choice of the strategy

## Summary – Strategy pattern
The use of the pattern strategy is in some object-oriented programming languages the only way to exchange the behaviour during execution.  

A strategy class also offers the possibility of combining the interchangeable behavior with status information.

# State pattern

# Iterator pattern
we want to decouple, we want to hideaway the underlying structure

allows sequential access to the elements of a composite object (aggregate, e.g. list or tree) without revealing its underlying structure.  
•Examples:  
•Sequential throughput through a list  
•Sequential throughput through a binary tree  
•Sequential throughput through a composite structure (n-ary tree with different types of nodes)  
•But:  
•The exact structure of the aggregate should have no meaning for  
the throughput.  
•Several passages through an aggregate should be possible at the same time.  
•Various types of throughputs are to be provided, without inflowing the aggregate class.

**idea**
Responsibility for the throughput is not in the  
aggregate object, but is taken over by an iterator  
object.

Example list: general structure
![](https://i.imgur.com/IUHgxWT.png)
Example list: two different iterators
the iterators refer to a value that determine iteraton
![](https://i.imgur.com/s7wyXhf.png)
![](https://i.imgur.com/CC5bstV.png)
The application must ensure that the aggregate and  iterator match each other, e.g. connecting List and ForwardIterator.
![](https://i.imgur.com/eP3L4Mj.png)
But:  
•The application would need to know, which data structure the  
aggregate has. Otherwise, no reasonable allocation could be  
made.  
•The iterator could only access public methods of the  
aggregate.  
• Therefore, the following improvement:  
•The aggregate implements a general interface, which makes  
the aggregate iteratable.  
•The iterator implements a uniform interface for iterators, so  
that all iterators can be used equally.  
•Each iteratable aggregate has its own iterator, which is  
provided by the aggregate.  
•Thus, the aggregate and the iterator are closely interlinked.  
The iterator can obtain a preferred access to the aggregate,  
thereby performing an (efficient) implementation.
## Class diagram Iterator pattern (general view)
![](https://i.imgur.com/7CHPABl.png)

## Iterator pattern - evaluation
### Advantages:
•The implementation of the data structure underlying the  
aggregate remains hidden.  
•The aggregate objects can be exchanged without modifying  
the application, since the access via the iterator remains  
unchanged.
### Disadvantages:
•Iterators require additional programming effort.  
•Iterators may need to be informed of changes to the  
aggregate.
## Implementation

![](https://i.imgur.com/BHWoV7d.png)
![](https://i.imgur.com/neLmAX6.png) 
Movenext indicates wheter the end of the enumarble has been reached
in a for loop, when movenext is reached the loop stops.

The interface IEnumerable< T > is implemented  
amongst others by the following classes: List< T >,  
LinkedList< T >, Queue< T >, Stack< T >,  
SynchronizedCollection< T >  
• Each of these classes provides an GetEnumerator()  
method using an IEnumerator< T > object.  
• Some classes provide additional iterators

bind in the concrecte inumerator
signature e to a t
for example an int and and iterator of int are 2 different things, E is the enumator that gets turned into a certain int which is used in the enumarble  
![](https://i.imgur.com/rOC23to.png)
![](https://i.imgur.com/hRoJXmo.png)
This is the preffered soultion, behind the scenes of foreach
![](https://i.imgur.com/Z7U8sCz.png)
**Example shows the advantages of the Iterator pattern:**  
•The data structure underlying the implementation of the aggregate has no meaning for traversing the aggregate with the iterator.  

•Various aggregates can be treated equally.  

•Aggregates can be exchanged without changing the application, since the access via the iterator remains unchanged.  

•Iterator object is external to the iterated data structure, so that the progress of the iterator can be determined by a method call from the outside (e.g., MoveNext ()).  

•Implementation options:  

• The traversing: The throughput takes place in the aggregate.  

• A copy of the data structure of the aggregate is created within the iterator and this copy will be run through during the traversal.  
•A need for clarification when implementing an iterator: How do changes affect the iterated data structure?
# Observer pattern
**Allows the detection of changes to objects.**

the keyboard notifies others that a key has pressed and observers who wants to be notified that an event has occured , dont call us we will call you. we safe a lot of cycles, instead of observers keep asking "has a key been pressed" they simply wait
Example
	•Arrival of a new order  
	•Log on to a new user  
	•Import of new data with other software  
	•In the real world, observing is an active activity by the  
	observers.  
	•Many observers can notice the same change immediately.  
	•But then all observers are constantly concerned with the  
	process of observing.
## Objective of the Observer pattern
•Changes to another object – the subject - are to be made known to interested objects – the observers - quickly and  

•at the same time with little effort.  
	•For this purpose, a property of programmed solutions is used: 
	•Objects in the program cooperate reliably.  
	•In the observer pattern, the (observed) subject and the observer cooperate. 

Equations in the real world would be:  
	•Amazon notifies about a new book of the favorite author.  
	•The thief informs the detective about his theft.  
•Idea:  
	•The (observed) subject allows the logging on and off of observers.  
	•Observers are waiting passively for notification by the subject.  
	•The subject has a notification mechanism and informs all registered observers that an event has occurred.  
	•The observer can obtain information about the subject after the notification of an event, which has occurred, thus completing the observation.
## Structure of observer pattern
Please
![](https://i.imgur.com/e4AVerb.png)
## Structure of the Observer pattern – general
notify envoke all objects that are subscribed update method

observer only get notified when there is a change
subject is the one that change the obserable objects state 
![](https://i.imgur.com/7LKBwx1.png)
### Structure of the Observer pattern –  realization
![](https://i.imgur.com/yMnTVXu.png)
Methods of the class Observable  
- AddObserver checks in an observer, which implements the Observer interface
  
- DeleteObserver checks out an observer

- SetChanged sets changed-attribute, which indicates whether the subject was  changed  

- HasChanged returns the value of the changed-attribute  

- NotifyObservers notifies all observers, but only if the subject has actually been changed:  The changed-attribute allows a decoupling of change and notification  

Methods of the interface Observer  
Update: 
- is called by the NotifyObservers method and has to implement the actions that are to be performed when a change occurs in the specific observer.  
- since the observed subject hands itself as a parameter, the observer does not need an attribute to remember it!  

The flow will now be somewhat more complex, its description too!  
(The observer pattern is a behavioral pattern!
## Description of the order of method calls
• Sequence diagram  
	•It shows the flow of communication between objects.  
	•It shows the temporal sequence of the communication steps.  
	•It only displays the call of methods.  

One speaks also generally of message exchange:  
- Calling a method m for an object obj is interpreted as sending a message to obj.
- The termination of m (and possibly the return of a value) are understood as the  answer of obj.

Sequence diagram for describing the flow of  the observer pattern
![[Pasted image 20230313111640.png]]
![[Pasted image 20230313111746.png]]
<!--Upload failed, remote server returned an error: [object Object]-->
![[Pasted image 20230313111758.png]]
![[Pasted image 20230313111810.png]]

![[Pasted image 20230313111831.png]]
![[Pasted image 20230313111855.png]]
## Findings from class and sequence diagrams
The implementation of the observer pattern requires  
little effort, since essential sequences can be defined  
by predefined classes.  

Any number of observers can be supplied with  
information during execution.  

The pattern is used, in particular, in the design of  
graphic surfaces:  

The graphical elements of the interface, which the user can  
manipulate, are observed: menus, switch buttons, text fields, ...  

Observers are program sections, which are supposed to react  
when manipulated by the user.
## Events in C\#
• Lightweight implementation of observer pattern  
• A “protected delegate”  - type safe methods, can be passed to other methods
	•Owning class gets full access  
	•Consumers can only hook or unhook handlers  
	•Similar to a property – supported with metadata  
• Used throughout the frameworks  
• Very easy to extend  
• Syntactic sugar using keyword event
### Event sourcing
![[Pasted image 20230313111956.png]]
### Event handling
![[Pasted image 20230313112008.png]]
## Summary of the observer pattern
### Advantages:  
- The observer pattern specifies a protocol on which the  information exchange between objects is oriented.  
- The observer pattern decouples the observed subject from its observers. As a result, further observer classes can easily be created. During the execution, the number of observers is dynamic and not limited.  
- The notification mechanism can be implemented independently of the specific problem.  
### Disadvantages:  
- If an observer object observes different subjects, the identification of the notifying object can be problematic.
# Publish-subscribe pattern
like game eventbus