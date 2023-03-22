---
date: 04-03-23
day: Sat
week: 10
	year: 2023
type: Reading
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 10 - 2023]]

# AC - Chapter 4
## Polymorphism
object can have many forms or they can by identified by more than one type

a car can be a vechile, a machine or transporation method. 

In this example, vehicles are assumed to have an engine that can be started and stopped, some provision for steering, and the ability to accelerate.
![](https://i.imgur.com/x1SmXIQ.png)
Polymorphism allows client code to hold a reference to an IVehicle interface and treat all concrete types as if they were the same. 

Do you need to know how the engine of your car works in order to start and stop the engine? No, not at all. Those are all implementation details that can have no bearing on your knowledge of driving. That is good interface design.

Polymorphism enables each pattern to be useful for any class that fulfils an expected interface, whether it has already been written or is yet to be conceived.