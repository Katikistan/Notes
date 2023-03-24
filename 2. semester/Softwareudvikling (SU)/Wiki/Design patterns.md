---
date: 13-03-23
day: Mon
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
![](https://i.imgur.com/9RdzHyS.png)

# Design patterns
## Why do we need them
# Structural patterns 
## Class adapter
Connects to things that are at the moment incompatible, and thereby makes them compatible
**General observations:**  
	•Adapters (in the physical world) are required when two completed components have to be connected.  
	•An adapter is a comparatively cheap connector and especially cheaper than specially adapted components.  

**Observations for software:**  
	•Many classes are created independently of specific problem solutions.  
	•Classes provide interfaces in the form of the applied methods.  
	•Methods expect certain interfaces from the used objects.  
	•Completed classes are expected to produce a common solution for a new  problem.

The provided interfaces do not match, an adapter makes them compatiable 
#### Example 
An application needs features for color management. The application is completed and requires a specified interface:

```csharp
public interface ColorManager {  
	String GetName(int red, int green, int blue);  
	int[] GetRGB(String name);  
	boolean IsEqual(String s, int[] rgb);  
}
// soultion 
public class Color {  
	public int[] GetColor(String name) { ... }  
	public String ToString(int[] rgb) { ... }  
	public boolean IsEqual(String s, int[] rgb) { ... }  
}
```
Since the already implemented classes should not be changed, a  ColorAdapterclass is implemented.
![](https://i.imgur.com/G31Q8w7.png)

```csharp
public class ColorAdapter  
extends Color : ColorManager {  
	public int[] GetRGB(String name) {  
		return GetColor(name);  
	}  
	public String GetName(int red, int green, int blue) {  
		int[] c = {red, green, blue};  
		return GetName(c);  
	}  
}
//Implementation of IsEqual is not necessary since it has already been inherited
```
The adapter class inherits the class, which is to be used:
	•The relationship between the classes is established at the structural level.  
	•The adapter has (by inheritance) all properties of the class, which is to be used and therefore has to be adjusted (In particular, there may also be more public methods than the adapter requires)
The adapter class implements the target interface

Class adapter can also be used, if the required  interface is a class


The required interface is only available as a class and the  programming language used does not allow multiple inheritance: The existing class can not be inherited, Class adapter is not an applicable solution.
![](https://i.imgur.com/dipIB4P.png)



![](https://i.imgur.com/ZKgIS0r.png)
![](https://i.imgur.com/A4y1Fsf.png)
### Summary Adapter pattern
- An adapter is used when ready-to-use solutions should be used, which do not fit exactly to the given requirements.  
- In particular, adapters are used when classes from libraries are to be used.  
- An adapter is always a simple component.  
- Without knowledge of the development history an adapter may not be recognized in the finished  program code.

## Object Adapter pattern 
## Facade pattern
allows to hide complex interfaces.

A componet is connected many places, if we want to change a componet, we have to change alot of other elements.

we therefore put an intermediate layer, so we can change a libary feature, without the having to change the whole application
![](https://i.imgur.com/RdldlXg.png)
![](https://i.imgur.com/EYWWzZt.png)
A downside is that the facade can become very complicated, have many responsibities, it can be a bottleneck and therefore slow down runtime. 
![](https://i.imgur.com/3XPz4EQ.png)
internals get more complicated
![](https://i.imgur.com/kaUubHC.png)

A facade creates a new, simpler interface.

A facade is created during the development of the application, while an adapter links specified interfaces with already implemented classes.
## Composite pattern
allows the creation of tree-like structures composed of heterogeneous components.
Example: File structure of an operating system
![](https://i.imgur.com/kaUubHC.png)
Leaves, which can not contain any other components.
Composites, which again can contain components.
![](https://i.imgur.com/BFEC4Ao.png)
The abstract component has to offer the methods used for leaves and composites, which can be called. Method calls on composites must be transferred to the children.
![](https://i.imgur.com/a6UViQ5.png)

``` csharp 
public abstract class Component  { 
	protected String content;  
	public abstract String Get(); // Method is useful for both  subclasses 
	public abstract void Add(Component c); // Method is only useful for one subclass
}  
public class Leaf : Component {  
	public Leaf (String s) { content = s; }  
	public String Get() { return content; }  // Method is useful for both subclasses
	public void Add(Component c) {}; Method is only useful for one subclass 
}  
public class Composite : Component {  
	// Attribute to manage children (realizes * from diagram)
	private List<Component> children = new List<Component>();  
	public Composite(String s) { content = s; }  
		public String Get() {  // Method is useful for both  subclasses
			String allContents = content;  
			// Delegates call to children
			for (Component c: children) { allContents += c.Get(); }   
				return allContents;
		}
		public void Add(Component c){ children.add(c); } Method is only useful for one  subclass
}
```
![](https://i.imgur.com/adOa37U.png)
![](https://i.imgur.com/DQ7PQol.png)
![](https://i.imgur.com/Kr6x9fs.png)
## Decorator pattern  
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
### Visualization Decorator pattern (object diagram)
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
### Examples for the use of the Decorator pattern
![](https://i.imgur.com/z7KLjQU.png)
### Visualization (example: price calculation for coffee)
![](https://i.imgur.com/d6R4Kiz.png)
![](https://i.imgur.com/ZwWDD6m.png)
![](https://i.imgur.com/wU2zeh1.png)
![](https://i.imgur.com/cq0zg9X.png)
### Summary of decorator pattern
#### Advantages:  
•Atoms and decors are treated uniformly.  
•Several types of atoms or decors are possible.  
•New atom or decor classes can easily be added.  
•An atom is always associated with decors. It is not necessary to  
convert already existing objects.  
•It is not necessary to check the type of a component.  
•The constructed object structure is unlimited.  
•A stack is created, which is made up of specialized,  
heterogeneous nodes.
#### Disadvantages:  
Memory can be an issue, you make alot of objects
Lot of message calls, you traverse a linked list essentially
# Behavioural patterns 
## Strategy pattern
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

### Summary – Strategy pattern
The use of the pattern strategy is in some object-oriented programming languages the only way to exchange the behaviour during execution.  

A strategy class also offers the possibility of combining the interchangeable behavior with status information.

## State pattern
## Mediator pattern
A mediator promotes the loose coupling of objects by avoiding an explicit relationship between the involved objects

The distribution of the behavior to many objects is usually the basis for the good changeability and reusability of object-oriented systems

**But** Too many relationships between too many objects reduce the changeability and reusability because building such object structures is complex.

An object operates as an intermediary between the other objects

Communication between all involved objects always takes place via the intermediary.

Further objects can be connected very easily.
![[Pasted image 20230313090053.png]]
![[Pasted image 20230313090119.png]]
### General structure of a mediator pattern: class diagram
![[Pasted image 20230313090201.png|300]]
### Summary Mediator pattern
#### Advantages:
- The mediator pattern simplifies the protocol between objects: All partner objects call only the methods of the mediator. 
- The mediator pattern abstracts from the collaboration between the objects: All partner objects know only the mediator. 
- The mediator pattern decouples the objects of the system: Further objects as well as further partner classes can be easily integrate
#### Disadvantages:
The mediator fulfills a central task: The complexity of the interaction is replaced by the complexity of the mediator

### Remarks: 
**Comparison with the facade pattern:** 
- A facade provides a more convenient interface to simplify the use. 
- A facade supports a unidirectional protocol between classes. 
- A mediator supports multidirectional protocol to simplify the collaboration of objects
## Iterator pattern
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
### Class diagram Iterator pattern (general view)
![](https://i.imgur.com/7CHPABl.png)

### Iterator pattern - evaluation
#### Advantages:
•The implementation of the data structure underlying the  
aggregate remains hidden.  
•The aggregate objects can be exchanged without modifying  
the application, since the access via the iterator remains  
unchanged.
#### Disadvantages:
•Iterators require additional programming effort.  
•Iterators may need to be informed of changes to the  
aggregate.
### Implementation

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
## Observer pattern
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
### Objective of the Observer pattern
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
### Structure of observer pattern
Please
![](https://i.imgur.com/e4AVerb.png)
### Structure of the Observer pattern – general
notify envoke all objects that are subscribed update method

observer only get notified when there is a change
subject is the one that change the obserable objects state 
![](https://i.imgur.com/7LKBwx1.png)
#### Structure of the Observer pattern –  realization
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
### Description of the order of method calls
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
### Findings from class and sequence diagrams
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
### Events in C\#
• Lightweight implementation of observer pattern  
• A “protected delegate”  - type safe methods, can be passed to other methods
	•Owning class gets full access  
	•Consumers can only hook or unhook handlers  
	•Similar to a property – supported with metadata  
• Used throughout the frameworks  
• Very easy to extend  
• Syntactic sugar using keyword event
#### Event sourcing
![[Pasted image 20230313111956.png]]
#### Event handling
![[Pasted image 20230313112008.png]]
### Summary of the observer pattern
#### Advantages:  
- The observer pattern specifies a protocol on which the  information exchange between objects is oriented.  
- The observer pattern decouples the observed subject from its observers. As a result, further observer classes can easily be created. During the execution, the number of observers is dynamic and not limited.  
- The notification mechanism can be implemented independently of the specific problem.  
#### Disadvantages:  
- If an observer object observes different subjects, the identification of the notifying object can be problematic.
## Publish-subscribe pattern
like game eventbus
# Creational pattern 
## Abstract factory pattern
allows the use of the same procedures for different families of objects

A software product can be used with the largely identical processes in different contexts. The same parts should be maintained unchanged

The software consists of a constant application core and other components, which occur in different variants. 
- Only components that match, that is, belong to a family of products, are selected for a configuration. 
- The components required for a configuration are generated by a special component, the factory, as needed.
![[Pasted image 20230313091842.png|300]]
General structure (objects of application)
![[Pasted image 20230313091920.png|200]]
![[Pasted image 20230313092023.png|300]]
![[Pasted image 20230313092057.png|300]]
![[Pasted image 20230313092120.png|400]]
### Summary of the factory pattern
bricks in breakout
#### Advantages: 
- Very flexible if you want to extent for other systems
- The Abstract factory pattern simplifies the customization of a software product by exchanging groups (families) of objects. 
- The adjustment is made dynamically at runtime. 
- Further product families can easily be added in the framework given by the interfaces

#### Disadvantages: 
- The pre-recognition of a situation which is sustainably supported by an abstract factory is difficult. 
- The construction of an abstract factory is complex. In particular, a suitable description of the scope of the product family must be carried out as preparation. 
- The creation of an abstract factory is only profitable if actually several products can be identified in different families
## Factory pattern
ensures that there is only one single object from a class.
### Motivation
There are classes, of which only one object can exist at runtime. 

Example: 
Assigning unique keys, such as order numbers, customer numbers, ..

The class itself ensures that there is only one object: 
- The implementation depends on the possibilities of the programming language. 
- Access to constructors must be restricted, (e.g. by preventing access: The constructors are agreed privately! 
- Instead of the constructor, special static methods control the creation of only one object
### Implementation
![[Pasted image 20230313091459.png|400]]
![[Pasted image 20230313091619.png|400]]
![[Pasted image 20230313091644.png|400]]
![[Pasted image 20230313091720.png|400]]
