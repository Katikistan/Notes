---
date: 12-02-24
day: man
week: 7
year: 2024
type: Wiki
course: AD
status: open
semester: 4
tags: 
Summary:
---
##### Weekly note
[[Uge 7 - 2024]]

**Divide** the problem into one or more subproblems that are smaller
instances of the same problem.

**Conquer** the subproblems by solving them recursively.

**Combine** the subproblem solutions to form a solution to the originalproblem.
# [[Merge sort]]
The recursion reaches the base case when the subarray A[p : r] to be sorted has just 1 element: when p equals r. As noted for loop invariants, a subarray comprising just a single element is always sorted.

# [[Quick sort]]
• A=Arrayet
• p= Det første element
• r= Det sidste element

**Partition:** Partition, har en hvor man omrokkerer $A[p \ldots r]$ og returnerer et index q. Det vil så sige at $A[1 \ldots q-1]$ indeholder de elementer der er mindre end $r$ og $A[q+1 \ldots r]$ indeholder de elementer der er større end $q$.
![](https://i.imgur.com/bUfAtJp.png)
Bedst case vil køretiden have en omkostning på Θ(n log(n)) - partition fortager et næsten lige split

Worst case vil køretiden have en omkostning på Θ(n2 - dette vil ske hvis der er størst mulig ubalance når der fortages et split med Partition. Dette kan ske hvis arrayet allerede er sorteret.

Quicksort er en del og hersk sorterings algoritme, algoritmen fungere ved at man vælger et Pivot element, og derefter sortere arrayet, ved at opdele elementerne ned i to sub-arrays, afhængig af om elementerne er større eller mindre end pivot elementet.

Der findes flere forskelige måder man kan vælge pivot elementet:
- Vælg altid det første element som en pivot.
- Vælg altid det sidste element som en pivot (Det de gør i CRLS)
- Vælg et tilfældigt element som pivot.
- Vælg midten som omdrejningspunkt.

Det vil sige at alle elementer der er mindre end det valgte pivot element vil blive indsat ind til venstre for pivot elementet, mens alle elementer der er større bliver indsat til højre for pivot elementet.
- Worst case for quick sort er når splittene er så ubalanceret som muligt
