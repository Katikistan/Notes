---
alias:
week: 
year:
open:
course:
type: lecture,reading,wiki
tags:
date: 2023-01-27
---
Excalidraw/Template.excalidraw
[obsidian syntax](https://www.youtube.com/watch?v=d8fXEhWy_rY)

[[#math|intern ref]]

````F#
let f (x:int) (y:int) : int = x + y 
	match n with
	0 -> printfn "wow" 
	|_ -> printfn "no"
````
lav en hotkey for math block

# math
````math
x^2
\sqrt 2
{2+3}/2
\frac{2+3}{2+3}
\sum 
````

$\begin{bmatrix}   1 & 2\\   a & b   \end{bmatrix}$
$\overrightarrow{v} = \begin{bmatrix}   1\\   a   \end{bmatrix}$

$$\begin{equation*}
A_{m,n} = 
\begin{pmatrix}
a_{1,1} & a_{1,2} & \cdots & a_{1,n} \\
a_{2,1} & a_{2,2} & \cdots & a_{2,n} \\
\vdots  & \vdots  & \ddots & \vdots  \\
a_{m,1} & a_{m,2} & \cdots & a_{m,n} 
\end{pmatrix}
\end{equation*}$$
X<sup>2</sup> X<sub>2</sub>

```python
def fun(x,y):
	return x+y
```

```ad-<type> # Admonition type. See below for a list of available types. 
title: # Admonition title. 
collapse: # Create a collapsible admonition. 
icon: # Override the icon. 
color: # Override the color. 
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla et euismod nulla. 
```
example



````ad-info
title: Codeblock test
collapse: open 
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla et euismod nulla
```ad-bug
# simple program
~~~python
def foo(x,y):
	return x+y
foo(2,7)
~~~
```
```f#
let foo x y =
	x + y
printfn "%A" (foo 2 7)
```
````

````ad-info

```ad-bug
title: I'm Nested!
~~~javascript
throw new Error("Oops, I'm a bug.");
~~~
```

```javascript
console.log("Hello!");
```

````

> [!bug]+

```ad-example
collapse: open
an example could be this:
~~~python
def foo(x):
	return x+x
if __name__ == "__main__":
	print (foo(2))
~~~
this was added easily with ctrl+p, which brings up the command pane , where i type in addmonition, and choose add admonition
```


> [!INFO]
> Here's a callout block.
> It supports **Markdown**, [Links](https://help.obsidian.md/How+to/Use+callouts), and [[Vigtig syntax|embeds]]!

```

```F#
let foo x y =
	x + y
printfn "%A" (foo 2 7)
```

```python
def foo(x,y):
	return x+y
foo(2,7)
```

footnotes with ctrl+alt+f[^1]

blockquote
```md
> Human beings face ever more complex and urgent problems, and their effectiveness in dealing with these problems is a matter that is critical to the stability and continued progress of society.

\- Doug Engelbart, 1961
```
skift farve på tekst

bedre måde at lave def a mat termer.
# This is a heading
## This is also a headning
### This is a heading aswell
#### now this is a cool heading
##### what they need is to be indented
###### This is the last straw

[^1]: dette er en fodnote
