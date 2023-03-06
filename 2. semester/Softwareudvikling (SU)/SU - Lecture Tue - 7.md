---
date: 14-02-23
day: Tue
week: 7
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 7 - 2023]]

# Equality 
equal objects should yield the same string if we call to string
equal objects should yield the same int if we call to gethashcode
# Arrays
```csharp 
var  ints = new int[10];
```
c sharp fills arrays with zeros by default 
# Implementing an array

```csharp
class ArrayStack {
	private object?[] items = new object?[10]; // i need null
	private count = 0;
	public void push(object item) {
		items[count++] = item
	}
	public object? Pop() {

}

```
