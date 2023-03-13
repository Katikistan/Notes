---
date: 07-03-23
day: Tue
week: 10
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
	Summary: "Design patterns: Adapter, Facade, Composite"
---
##### Weekly note
[[Uge 10 - 2023]]

# Design patterns 
The problems, which occur when designing software, are always similar.

There are always similar solutions for similar problems.

This solution is generalized to an approach and is  
described as a so-called design pattern.

**Advantages of using design patterns**  
•A shortened development period, since a known solution approach is used  
•An improved quality of software,  
	since a suitable solution approach is used  
•An improved intelligibility,  
	since the solution approach has been documented in advance and is known to many developers  
•A kind of standardization of the created software

**Classification based on the considered structuring unit:**  
•Classes and their relationships at type level:  
	Class-related patterns  
•Objects and their relationships during execution:  
	Object-related patterns

**Classification based on the problem solved by the  design pattern:**  
•*Structural* connection of classes or objects:  
	Structural patterns  
•*Interaction* between objects:  
	Behavioral patterns  
•*Creation* of objects:  
	Creational patterns
## Types of design patterns
![](https://i.imgur.com/TVfhKnu.png)
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

