### Group
1. Is closed 
2. Is associative 
3. Has an identity
4. Has an inverse
#### subgroup
A subgroup is a group which contains all elements of some other group:
$G=\{\mathbb{Z},*\}~~~G'=\{2\mathbb{Z},*\}$
Here G' is a supgroup because the set in it contains all the elements of the set in G and it satisfy the 4 axioms of groups
##### coset
groups are symmetric with respect to their supgroups: shifted copies of supgroup appear in group. example:  $2\mathbb{Z}=<2>$ ,1+<2> is the odd numbers, 3+<2> is also a valid way to denote the odd integers, here we get the odd numbers with a shift of 3 instead of 1.
### Semigroup
1. Is closed 
2. Is associative 
### Monoid
1. Is closed 
2. Is associative 
3. Has an identity

# Mathematical structures
Ways of understanding collections of mathematical objects, such as numbers, shapes, or functions, in a specific way. e
## Examples
Groups: a set with a binary operation that satisfies certain properties such as associativity, identity element and inverse element

Vector spaces: a set of vectors that can be added together and scaled (multiplied by a scalar) and form a field

[[Intro to graph theory|Graphs]]: a set of vertices and edges, which may have direction and/or weight

[[Lattices, isomorphism & BOOLEAN ALGEBRA|Lattices]]: a partially ordered set in which any two elements have a unique least upper bound(LUB) and greatest lower bound(GUB)

[[#Monoids|Monoids]]: a set with a binary operation that is closed, associative and has an identity element.
# Binary operations
![|400](https://i.imgur.com/zCQqRen.png)
since a binary operation is a function, only one element of A is assigned to each ordered pair. Thus we can say that a binary operation is a rule that assigns to each ordered pair of elements of A a unique element of A.

Let $A = \mathbb{Z}$. Define $a ∗ b$ as $a + b$. Then ∗ is a binary operation on $\mathbb{Z}$.

Let $A = R$. Define $a ∗ b$ as $\frac{a}{b}$. Then ∗ is not a binary operation, since it is not defined for every ordered pair of elements of A. For example, 3 ∗ 0 is not defined, since we cannot divide by zero.

Let $A = \mathbb{Z^+}$. Define $a ∗ b$ as $a − b$. Then ∗ is not a binary operation since it does not assign an element of $A$ to every ordered pair of elements of $A$; for example, $2 ∗ 5 \notin A$.

An operation that combines two objects is a binary operation. An operation that requires only one object is a unary operation.

Set intersection is a binary operation since it combines two sets to produce a new set.
![300](https://i.imgur.com/HUaOhOo.png)
# Groups 
Groups have the following properties:
- Closed
- Associative 
- Have an identity
- Have an inverse of that identity

Groups are monoids with an additional property: they have an [[#Inverse|inverse]]

addition forms a group under the integers, multiplication dosen't.
addition and multiplication forms a group under the rationals, we distinguish between which operator is used as such: $\mathbb{Q}^+,\mathbb{Q}^\times$

the order of a group is how many elements a group has and is written as such: $|\mathbb{Q}^+|\mathbb{Q}^\times|\mathbb{Z}|=\infty$

it's expected from good group theories to know that the group where we multiply is all the rationals except zero
#### Abelian groups
a group is an abelian group if the group operation is commutative:
$\{\forall a,b \in G|ab = ba\}$  
## Example x
is $G=(S=\{0,1\},XOR)$ a group?
1. check if it's closed
2. check if it associative 
3. check if it has an identity
4. check if it has an inverse
| XOR | 0|  1  |
| - | - |-|
| 0   | 0   |  1  |
| 1   | 1   |  0  |
|     |     |    |
1. We se that all inputs results in an input there is in S, it is closed. 
2. (1 XOR 0) XOR 0  = 1 XOR (0 XOR 0), -> (1) XOR 0  = 1 XOR (0) and so on.
3. 0 is an identity because 0 XOR 0 = 0 and 0 XOR 1 = 1.
4. ($0^{-1}=0$), ($1^{-1}=1$) because 1 and 1 gives the identity. 
it is an abelian group
# Monoids
A monoid is a semigroup (S, ∗) that has an identity

The set P(S), where S is a set, together with the operation of union is a commutative monoid.
has the identity ∅, since  
∅ ∗ A = ∅ ∪ A = A = A ∪ ∅ = A ∗ ∅  
for any element A ∈ P(S). Hence P(S) is a monoid.
# Semigroups
A semigroup is a nonempty set S together with an associative, closed binary operation ∗ defined on S. We shall denote the semigroup by (S, ∗) or, when it is clear what the operation ∗ is, simply by S. We also refer to a ∗ b as the product of a and b. The semigroup (S, ∗) is said to be commutative if ∗ is a commutative operation. 

The set Z with the binary operation of subtraction is not a semigroup, since subtraction is not associative.

Let (L , ≤) be a [[Lattices, isomorphism & BOOLEAN ALGEBRA|lattice]]. Define a binary operation on L by a ∗ b = a ∨ b. Then L  
is a semigroup.
# Closure
A structure  is closed with respect to an operation if that operation always produces another member of the collection of objects. 

whenever we do an operation the result has to be in the set which we perform the operation on, $g=\{\mathbb{Z}_3,+\}$ $\mathbb{Z}_3=\{1,2,3\}$ we want the result to be either 1,2 or 3. 

The structure (odd integers, +, ∗) is not closed with respect to addition. The sum of two odd integers is an even integer($(2n+1)+(2n+1)=4n+2$). This structure does have the closure property  for multiplication, since the product of two odd numbers is an odd number. 
# Associative
Order doesn't matter therefore the parentheses dont matter (ab)c = abc  

A binary operation $(A,*)$ is said to be associative if  
$a ∗ (b ∗ c) = (a ∗ b) ∗ c$  
$\forall a, b, c \in A$.
# Commutative
A binary operation on a set A is said to be commutative if  
$a ∗ b = b ∗ a$
for all elements a and b in A

binary operation of + is commutative and - is not, because 1+2 is the same as 2+1, but 1-2 is not the same as 2-1.

A binary operation that is described by a table is commutative if and only if the entries in the table are symmetric with respect to the main diagonal.

a is not commutative because  $a*b =c, b*a=b$
![|100](https://i.imgur.com/cpTj9Xx.png)
b is commutative.
![|100](https://i.imgur.com/sCE1ASV.png)
# Identity or neutral
Find an element that takes everything back to itself, for example 0 in additon is an identity element because 0 + 1 takes 1 back to 1. 0 + 2 = 2 and so on.

An element e in a group (S, ∗) is called an identity element if  
$\{\forall a \in S |e ∗ a = a ∗ e = a\}$
an identity element must be unique, there can't be multiple identity elements in a group.([[#Bevis for at der kun er et identitets element i en gruppe|Proof]])

The number 0 is an identity in the semigroup ($\mathbb{Z}$, +).
## SJOVT: Bevis for at der kun er et identitets element i en gruppe. 
Der bruges [[Proof by contradiction|proof by contradiction]] til at bevise at der der kun kan være 1 identitets element i en gruppe: 

Antager at der er to identitets elementer $e$ og $e$'  en gruppe $G=(S,*)$ 
En identiet defineres på følgende måde: 
$e*a=a*e=a$
$e'*a=a*e'=a$
de er kommunikative dvs:
$e*e'=e'$
fordi det er kommunikativt kan vi og så skrive 
$e'*e=e$
det vi ser er at $e=e'$ hvilket er et modstrid eftersom vi antager at $e \neq e'$

Derfor kan vi se med modstrid at der ikke kan være 2 identiteter i en gruppe. **QED**
# Inverse
An element you can apply to another element and get the identity, since applying the neutral element to some element a gives a, you could say that applying the inverse is like undoing an operation. $a*b*c*c^-1=a*b*e=a*b$

The inverse is commutative.
$a*a^{-1}=e=a^{-1}*a$

here we se that the inverse of the inverse $a$ is actually just $a$, $(a^{−1})^{−1} = a$.
$a*\cancel{a^{-1}*(a^{-1})^{-1}} = a*a^{-1}*(a^{-1})^{-1} = \cancel{a*a^{-1}*} (a^{-1})^{-1} \Rightarrow a = (a^{-1})^{-1}$  
example: $a \in \mathbb{Z}$, $a=3$, $a^{-1}=-3$, $(a^{-1}){-1}= -(-3)$

$(ab)^{−1} = b^{−1}a^{−1}$.

inverses are also unique 
$a_2^{-1}*\cancel{a*a^{-1}}=\cancel{a_2^{-1}*a*}a^{-1} \Rightarrow a_2^{-1}= a^{-1}$ 

(ab)−1 = b−1a−1


![|200](https://i.imgur.com/Ks9YKx6.png)
now if we want to check for inverses we want to find for each horizontal green number a vertical green number that returns the identity. 
0 + 0 = 0
1 + 2 = 0 
2 + 1 = 0
here + is not for addition but represent an operator
# dihedral
In group theory, a dihedral group is a specific type of group that is formed by the symmetries of a regular polygon. The dihedral group of a regular polygon with n sides is denoted by $D_n$.

The elements of $D_n$ are the symmetries of the regular polygon, which include rotations and reflections. There are n rotations of the regular polygon. There are also n reflections of the regular polygon, each of which takes the polygon to itself by reflecting it in a line of symmetry.

The group operation in $D_n$ is the composition of symmetries.

The dihedral group D_n is a finite group, which means it has a finite number of elements. 

In particular, the number of elements in $D_n$ is 2n. It is an important example of a non-Abelian group.
![|300](https://i.imgur.com/C13aykq.gif)
# Tables
![](https://i.imgur.com/KGR9VIG.png)
![](https://i.imgur.com/VHqGG4b.png)
# Isomorphism and Homomorphism
## Homomorphism
*In group theory, a homomorphism is a function between two groups (G, *) and (H, +) that preserves the group structure. This means that for any two elements a and b in G, the function maps the operation a * b in G to the operation f(a) + f(b) in H.*

in simpler terms: two groups that are similar 
![|300](https://i.imgur.com/W4mT1wS.png)
see more: [Homomorphism](https://www.youtube.com/watch?v=cYzp5IWqCsg)
## Isomorphism
Genrally speaking, an isomorphism refers to a relationship between two mathematical structures that preserves certain properties of the structures. The structures can be of different types, such as groups, vector spaces, topological spaces, etc. The specific properties that are preserved depend on the type of structure. For example, for groups, the isomorphism preserves the group operation and identity element, for vector spaces it preserves the operations of vector addition and scalar multiplication, etc.

Sometimes groups are more than just similar ([[#Homomorphism]]), they are identical, this is what we call an isomorphic group.  

[[Relations|Relations]] and [[Lattices, isomorphism & BOOLEAN ALGEBRA|lattices]] are places where we encounter isomorphism also

Let (S, ∗) and (T, ∗′) be two semigroups. A function f : S → T is called an  
isomorphism from (S, ∗) to (T, ∗′) if it is a one-to-one correspondence from S to  
T , and if  f (a ∗ b) = f (a) ∗ ′ f (b)  for all a and b in S.

To show that two semigroups (S, ∗) and (T, ∗′) are isomorphic, we use the  
following procedure:  
Step 1 Define a function f : S → T with Dom( f ) = S.  
Step 2 Show that f is one-to-one([[Relations#Injective|Injective]]).  
Step 3 Show that f is onto([[Relations#Surjective|Surjective]]).  
Step 4 Show that f (a ∗ b) = f (a) ∗′ f (b).


An isomorphism is a type of homomorphism. 

It is a [[Relations#Bijective|bijective]] homomorphism between two groups, which means that it is a [[Relations#Bijective|bijective]] function between two groups (G, *) and (H, +) that preserves the group structure. 

while a homomorphism is a function that preserves the group operation between two groups but it could be not bijective.
## examples
Let T be the set of all even integers. Show that the semigroups (Z, +) and (T, +)  
are isomorphic.

Step 1 We define the function f : Z → T by f (a) = 2a.  

Step 2 We now show that f is one to one as follows. Suppose that f (a1) = f (a2).  
Then 2a1 = 2a2 , so a1 = a2 . Hence f is one to one.  

Step 3 We next show that f is onto. Suppose that b is any even integer. Then  
a = b/2 ∈ Z and f (a) = f (b/2) = 2(b/2) = b, so f is onto.

Step 4 We have  
f (a + b) = 2(a + b) = 2a + 2b = f (a) + f (b).  
Hence (Z, +) and (T, +) are isomorphic semigroups.

f S and T are finite semigroups, their  
respective binary operations can be given by tables. Then S and T are isomorphic  
if we can rearrange and relabel the elements of S so that its table is identical with  
that of T .
![](https://i.imgur.com/9tFZXv6.png)

Theorem 2:
Let (S, ∗) and (T, ∗′) be monoids with identities e and e′, respectively. Let  
f : S → T be an isomorphism. Then f (e) = e′.

Theorem 3:
Let (S, ∗) and (T, ∗′) be monoids with identities e and e′, respectively. Let  
f : S → T be a homomorphism from (S, ∗) onto (T, ∗′). Then f (e) = e′

theorem 3 is stronger than 2

If f is a homomorphism from a commutative semigroup (S, ∗) onto a semigroup  
(T, ∗′), then (T, ∗′) is also commutative

# Øvelse
Er $G=\{2\mathbb{Z},\times \}$ en monoid semigruppe eller en gruppe:
G beskriver multiplikation på alle de lige tal. 
1. Vi ved at multiplikation er closed, at gange 2 lige tal giver altid et lige tal tilbage ($(2x) \cdot y =2xy$)
2. Multiplikation er associativt $a \cdot (b \cdot c) = (a \cdot b) \cdot c$
3. Der er ingen identiet.  $G=\{\mathbb{Z},\times \}$ har 1 som identiet eftersom alt ganget med 1 giver sig selv, dette virker ikke mere eftersom $1 \notin 2\mathbb{Z}$. 
Derfor er dette en semigruppe. 
---
#grouptheory #groups #abstractalgebra #abstract #algebra 
[Researchers Use Group Theory to Speed Up Algorithms — Introduction to Groups](https://www.youtube.com/watch?v=KufsL2VgELo&t=133s)
[Group theory, abstraction, and the 196,883-dimensional monster - 3Blue1Brown](https://www.youtube.com/watch?v=mH0oCDa74tE&t=1s)

