# Design
![[Pasted image 20230620090304.png|300]]
![[Pasted image 20230620090335.png|300]]
![[Pasted image 20230620090345.png|300]]
Tightly coupled -> Hard debugging
![[Pasted image 20230620090438.png|400]]
Methods from C use methods/variables from D → classes C and D coupled.

**Hvad er design patterns?**
det er nogle generelle ideer til løsning af problemer, i udvikling af software støder man tit på lignende problemer, design patterns giver nogle generelle løsninger til disse problemer. Disse design patterns skal tweakes til at passe til det bestemte scenarie  (Lignende løsninger til lignende problemer, skal dog tailors til ens specifikke use case.)


System Sequence Diagrams considered interactions between the actors

In use case analysis, we consider the system as a “black box. In domain analysis, we consider the system as a “transparent box”
## Patterns
Lignende løsninger til lignende problemer, skal dog tailors til ens specifikke use case.
### facade


**Forklar Hvad facade pattern er, fordele og ulemper?**
Det er et hvor man laver et simpelt interface til at kunne tilgå og benytte et komplekst subsystem. f.eks. for at kunne lave et niveau: map, legend og meta data skal læses, Blocks skal dernæst laves med disse læste data, dernæst skal en timer laves, validation checks skal laves af niveauet. istedet for at skulle kalde alle metoder for at lave niveauet giver et facade pattern et simpelt interface til at tilgå og kalde alle disse metoder i korrekt sekvens osv. 

*Fordele:* 
- Adgang til subsystemet bliver simplificeret, ved at enkapsulerer det i en facade. 
- Classer i subsystemet kender ikke til facaden
- man kan sagents tilgå og benytte subsystemet uden facaden
- ved at samle kald i facaden kan man måske forbedre performance
*Ulemper:*
- Strukturen af systemet kan blive mere kompliceret fordi  man tilføjere hieraki og et ekstra lag i systemet.
- Facaden kan blive et såkaldt guds objekt

**Hvad er det prime directive?**
if you deviate from style guide, it has to be documented!!
## Uml  (Unified Modeling Language)
**Hvad er formålet med uml diagram:**
beskrive/illusterer den statiske struktur af et systems objekter, attributer eller associationer.
En objekt model er et klasse diagram, klasser repræsenterer koncepter.  
**Hvad indeholder/enkapsulerer en klasse**:
En klasse enkapsulerer state (attributes eller fields, variabler) og behavior (operations eller metoder)

**Hvad menes med associationer**
Det er hvilke klasser der interagere med hianden, ændre hiandens states (coupling), multiplicitet af en association fortæller noget om hvor mange objekter kilde objektet kan referer. MISSING

**Typer af associationer?**
- Svage associationer
- aggregation “has a”/”uses a” den ene kan godt leve uden den anden The *aggregate* is the *parent class*, the *components* are the *children class***. Udseende gennemsigtig diamant

- composition: “owns a”, objektet kan ikke leve uden anden. Udseende udfyldt diamant

- inheritance: nedarvning, den stærkeste form for association af dem alle. composition er altid forstrukket, har samme state og behavior måske noget ekstra fra forældren. 

**Hvad inkluderes i et UML diagram**
kun relevante detaljer, hvad der er relevant afhænger af formålet med at lave diagrammet.

# Testing
## TDD
Being confident due to TDD is true only in moment when you know your tests are bulletproof - most of beginners practitioners won't have that level of confidence you would have after years of TDD though

**Hvad er principperne bag TDD**
- Lav tests først, de vil fejle
- lav implementation, du ved det er korrekt når tests passer
- refactor for at få koden til at være pæn og optimal
## Test doubles
**Hvad er test doubles?**
Nogle gange har systemet man tester nogle dependencies, men hvis man tester ved at bruge disse dependencies kræver det også at man tester dependcies, derved for man ikke rigtige unitests hvor man tester isoleret. derfor kan man lave falske implementationer (test doubles)

**Hvad kunne være test doubles**
- Stubs: 
- Drivers: imiterer en dependency, for at se om en unit sender information korrekt til dependencies

**Hvad inkluderes i funktionelle tests** 
- unit test
- integration test

**Hvad inkluderes i system testing**
Ikke funktionelle tests som
- playtesting 
- stresstesting
- performance testing
- aceptance testing
- usability testing

**Hvad er test strategier**
- white box - finds unreachable code, infinite loops
- Black box - opfører koden sig som forventet, er dokumentationen tilstrækkelig, bliver specifikationer opfyldt.
## Unit
**Hvad går Equivalence Partitioning and Boundary Value Analysis ud på?**
Det gøres for at streamline testing processen 
Equivalence Partitioning: deler inputs ind i grupper (equivalence classes)

Boundary value analysis: fokuserer på boundaries i de her ekvivalens klasser, det er hvor fejl hyppigt sker.

the stub allows the testing to proceed without waiting for the complete system to be available. 

Stubs  return pre-defined values or follow a predefined behavior, often hardcoded, to simulate the interaction with the missing component.

Stubs are typically used when the module being tested depends on other modules that have not been developed or integrated yet

Drivers
It helps in simulating the behavior of the missing higher-level component to test the lower-level component in isolation.

A driver, on the other hand, is used to replace a higher-level module or component that calls or invokes the component being tested.

Drivers are used when the module being tested is dependent on lower-level modules that have not yet been developed or integrated.
## integration
**Processen i Integration-Testing:** 
1. Baseret på strategy, udvælg et component som skal testes. 
2. Sammensæt componenten med drivers og stubs 
3. Functional testing: Test alle use cases med componentet 
4. Structural testing: Enten White-Box eller Black-Box
5. performance testing

**Unit testing eller Integration testing?**
Nogle gange tror folk de laver unit test, de laver i virkeligheden bottom up integration testing.

- Unit test: isolerer moduler (units: klasser eller metoder) og tester dem. moduler isoleres fra dens dependecies ved brug af stubs. 
- Integration bruger ikke stubs, men bruger de rigtige dependcies istedet for test doubles
**forskellen, fordele og ulemper ved  top down og bottom up?**
Bottom up: man tester med lavest niveauer af systemet, de har typisk ikke dependencies og man behøver derfor ikke stubs.  Man kommer først til at teste vigtige dele til sidst

Top down: man tester øveste del af systemet først, kræver man laver drivers og stubs hvilket kan være svært. vigtige dele testes først. 
## System testing
**validation testing** 
Tester om funktioner or performance characteristic følger specifikation
hjælper at have formelle specifikationer her fordi man nemt kan bruge black box og teste om formelle specifikationer mødes. 

**Aceptance testing**
Asserts at koden gør hvad brugeren forventer
evaluerer systemet i virkeligheds lignede scenarie
Hvis man fejler acceptance test er der ingen grund til at gå videre til rigtige bruger

**Alpha testing**
har nogle kendte brugerer og guide dem i gennem systemet, 

**beta testing**
mindre hand holding

**REGRESSION testing**
Når du finder en bug så lav en test. lav en test der kan bruges til at tjekke at buggen ikke kommer tilbage (regression), man kører disse tests på hvert build for at tjekke at bugs ikke kommer tilbage. 
Et subset af tests der dækker hele systemet og kan be kørt på hvert build
## White box
**hvad er white box testing**
det er en testing stategi
Man har adgang til kilde koden 
tester for at finde bugs
Man går efter at finde død kode
kigger i koden og prøver at gå ramme alle branches i control flow
C0 - statement coverage
C1 - branch coverage
## black box
**hvad er black box testing**
det er en testing stategi
Man har ikke adgang til kilde koden
tester baseret på specifikationer og dokumentation
man finder defects

Specification-driven construction of a test suite: Based on analysis of specification
First-level partitioning: Valid vs. invalid inputs 
• Valid: Satisfies precondition 
• Invalid: Not valid

Partition valid inputs into equivalence classes

Create a test case for at least one value from each equivalence class

Two inputs are considered equivalent if we expect the program to process them in the same way, i.e. follow the same path through the code.

If all elements of an equivalence either lead to no error or to an error, then testing is complete: it no errors are found, code is correct

Equivalence 1: partition each component independently (e.g. negative, zero, positive) and form their products • (neg x neg, neg x zero, neg x pos, zero x neg, zero x zero, zero x pos, pos x neg, pos x zero, pos x pos)
Input type: int x int (Cartesian product)

Equivalence 2: partition inputs by type of file being retrieved (HTML, GIF, JPEG, Plain Text, etc.)
![](https://i.imgur.com/86f5Dmy.png)

When choosing values from an equivalence class to test, use the values that are most likely to cause the program to fail

Good practice for choosing values from equivalence class: Include
• ‘typical’ value 
• values on the boundary to other equivalence classes

Don't get so wrapped up in testing boundary cases that you neglect to test "normal" input values

Intuition will often lead you toward boundary cases, but not always
Try loading a corrupted file

# Code quality
Fagan‘s snail curve: The longer defects remain in the system, the more expensive they become

**Hvad går Maintainability (ease of maintenance) ud på** 
• Software must evolve to meet changing needs 
• Software costs more to maintain than it does to develop. For systems with a long life, maintenance costs may be several times development costs
Det kan blandt andet opnås ved at følge Open closed princippet

**Hvad er kategorier af defekter**
- funktionelle: features virker ikke som de skal
- UI defects: usabiltiy problemer
- Performance defect: For langsomt, bruger for meget memory osv
- Error handling: Kan ikke håndtere fejl e
- load: kan ikke klare mange bruger, meget data
- konfikuration: virker ikke på alle OS, browser osv
- Race conditions: behaviour afhænger af andre i gangværende processer
- Dokumenation: dokumentationen er ikke forståele, upræcis, mangelfuld osv

# Code complexity
Øget kompleksitet øger risiko for fejl. 
høj kompleksitet gør det svært at teste og maintaine
Metrics kan bruges til at vurderer kompleksiset og dermed hvor svært og lang tid dev processen vil være
## Metrics
### Blackbox
Function points, vurdering af vigtighed og kompleksitet af funktioner: vælg arbitræt
COOCOMO: bruges til kost og tids estimering, 

![|400](https://i.imgur.com/kG0nRG8.png)
![|300](https://i.imgur.com/lrkoIGb.png)
LOC is optimistic for bigger programs
![|300](https://i.imgur.com/l5VqxM2.png)
# Software development life cycle
## agile
**Hvad er fokus i agile**
Simplicity 
incremental changes
respond to changes quickly and efficiently
itterativ udvikling

**Hvordan forgår agile development**
Dele af softwaren udvikles i korte intervaller - sprints

Incremental delivery The software is developed in increments with the customer specifying the requirements to be included in each increment.

Expect the system requirements to change and so design the system to accommodate these changes

Focus on simplicity in both the software being developed and in the development process. Wherever possible, actively work to eliminate complexity from the system.

### code reviews
code reviews  Non-functional requirements/code qualities - walkthrough: informal discussion of code between author and a single reviewer. bad design, Lack of clarity, style guide

is this maintainable, for if we have to change things
### code quality
Software becomes obsolete very quickly 
• because of fast evolution of technology, requirements or knowledge, equires continuous innovation and evolution

# Debugging
**Hvad er en bug, hvad er en defekt?** 
Bug: En fejl i koden
Defect: afvigelse fra requirements
**Metoder?**
- Ved at bruge Test driven deleopment kan man bruge test resultater som en guide line for om man har bugs. 
- print statements
- Debugger: man sætter breakpoints op og kører koden, variabler og andet gemmes i stack trace som kan analyseres for at finde fejl
# Specifying Program Properties
**What are the two main specification techniques used in formal methods? (Software Development, Specifying Program Properties, Slides 15-28)**:
Algebraic approach, the system is specified in terms of its operations and their relationships. 

Model-based approach, the system is specified in terms of a state model that is constructed using mathematical constructs such as sets and sequences. Operations are defined by modifications to the system’s state.

Informel: nemmere at lave, men kan fortolkes 
Formelt: svære at lave, men bulletproof.
# Code review

![[Pasted image 20230620092200.png]]
Reviewer gives suggestions for improvement on a logical and/or structural level, to conform to previously agreed upon set of quality standards.
Feedback leads to refactoring, followed by a 2nd code review. 
Eventually reviewer approves code


![[Pasted image 20230620092317.png]]

![[Pasted image 20230620092330.png]]

A code review checklist change depending on what type of error we have 
- data reference errors
	- Is an un-initialized variable referenced?
	- s a variable assigned a value that’s of a different type than the variable?
- data declaration errors
	- If a variable is initialized at its declaration, is it properly initialized and consistent with its type?
- computation errors
- control flow errors
- comparison errors
![[Pasted image 20230620092645.png]]
<!--⚠️Imgur upload failed, check dev console-->
![[Pasted image 20230620092706.png]]
Defects: 
- Functional (programmet fungerer ikke som forventet) 
- Performance (Er koden langsom / ram brug) 
- Error Handling (Hvordan håndtere man fejl?) 
- Configuration (Fungerer det på alt hardware og software) 
- Race conditions (Sker der fejl afhængig af rækkefølgen)