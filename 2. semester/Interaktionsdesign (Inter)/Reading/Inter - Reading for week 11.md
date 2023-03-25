---
date: 12-03-23
day: Sun
week: 11
year: 2023
type: Reading
course: Inter
chapters: 23-29
semester: 2
tags:
Summary: "User interfaces, Interaction teqniques, GUI, Command and navigation"
---
##### Weekly note
[[Uge 11 - 2023]]
# 23 Introduction to User Interfaces
The part of an interactive system that ’faces’ users is called a user interface
## Definition and Elements
A user interface can be broken down into four constitutive elements

**Devices**
Input devices allow the user to provide input to the system in a variety of ways.

input devices include mice, keyboards, touchscreens, microphones etc.
**Interaction techniques**
Interaction techniques translate inputs from input devices, and possibly context sensors, into changes in the rest of the user interface.
**Representations**
determine how data, events, objects, and actions appear to the user. The design and appearance of icons and menus are examples of representations
**Organization**
is a less well-defined term that is used to refer to the broader set of principles that organize the data environment (e.g., commands in an operating system, objects in a virtual world) in the user interface.

Note that this definition does not mention processing. The internal mechanisms of how the system processes information about the user are not part of the definition. Instead, the user interface is the part of the technical system that is perceivable and actionable from a user’s perspective.

**user interface and its broader technical operating context are jointly called an interactive system.**
### Types of User Interfaces
Some GUIs, such as Integrated Development Environments, may mix all four Elements

Output devices, or often just ’displays’, allow the system to provide information and feedback to the user.
### Forms
The use of forms is considered another interaction style.

Many of the conventions of the forms are still in place today, such as the use of the Tab key to move between different forms.

Menu Interfaces Another central interaction style is menu interaction.
### Graphical User Interfaces
Graphical user interfaces (GUIs) allow users to directly interact with objects in the user interface. This ability is known as direct manipulation.
### Reality-based interaction
Mobile interfaces
Tangible user interfaces
Ubiquitous computing interfaces
Virtual reality
Mixed and augmented reality
## Design Objectives
![](https://i.imgur.com/1vuuNrf.png)

Therefore user interfaces should support users in achieving their goals and, conversely, avoid impeding the progress towards those goals

Usability refers to qualities of the user interface that allow users to achieve their goals effectively, efficiently and enjoyably

Accessibility refers to equivalent levels of usability across user groups

Efficiency with which users can complete tasks is perhaps the most common measurement and objective.

There is a fundamental trade-off between speed and accuracy that is encapsulated in the term performance. The faster the user interactions with the user interface, the more likely the user and the system generate errors.

Learnability: Another central objective of a user interface is to allow users to learn how to use it and become proficient and use it to enable users to achieve their goals.

Discoverability and explorability: Some user interfaces should support exploratory learning of the functionality offered [675, 857]. 

a central concern is that the user interfaces are easy to learn

Discoverability and explorability: Some user interfaces should support exploratory learning of the functionality offered [675, 857]. In exploratory learning, users investigate the system on their own initiative, trying out features and strategies for solving real tasks or for learning about the system.

Consistency means that the representations (see above) are similar across the user interface or with other (reference) interfaces.

Se nielsen: [[Inter Overview#Nielsen|Nielsens model]]
### Tradeoffs
![](https://i.imgur.com/1H4SNtp.png)

This introduces a central challenge of user interfaces: you cannot both eat the cake and save it.

Consistency is a classic example. Consistency is essentially about ensuring familiarity. However, it compromises novelty, another design objective.
### Supporting Novice, Intermediate and Expert Performance
First, a central concern is that user interfaces are easy to learn.

Second, another central concern is that users can become proficient with the user interface.

seamlessly transition from novice to expert
## Design Space Analysis
How to get a grasp of a user interface without getting lost in the details? Design space analysis refers to a semiformal representation of constituents user interfaces
![](https://i.imgur.com/HGuDABX.png)
It offers an abstraction of user interface that is not tied to the particular technology the interface is implemented on
### Morphological Analysis
Morphological analysis refers to the idea of representing user interfaces as points in a parametrically described design space.

Following this line of thinking, user interface design is simply a set (Zwicky) or sequence (Simon) of decisions
Formally, then, its morphological design space is a tuple: *< M, In, S, R, Out, W >*

*M* is a manipulation operator (physical action by the user that produces inputs)

*In* is the input domain (range of possible values produced by the input manipulation operator)

*S* is the current state of the device

*R* is a resolution function mapping from input domain set to the output domain set

*Out* is the output domain set

*W* is a general-purpose set of device properties that describe additional aspects of how a device works

consider a binary toggle that is operated by touching finger within its bounding box a touchscreen display. It presently set to leftmost position and is off. Morphological analysis:

• M is a x and y coordinates of a touchpoint registered within the bounding box of the toggle 

• In is a binary event: a touch occured (x and y coordinates are ignored) 

• S is 0 (off) 

• Out is 0 (on) or 200 (off); if ’on’, the toggle indicator turns green; if ’off’, it turns gray
### Joint System Analysis
adds human to the picture 

A user interface can also be thought of as a joint system that links users with computing technology

Properties of user interfaces are described as parameters, some of which are controllable by the designer (color of a button), but some of which not (e.g., user experience)

*A controllable parameter* is a design parameter that the designer can directly influence, such as the colors, size, animation and behavior involved in the design of a push button.

*Critical distance* is the maximum change in the value of a controllable parameter that causes an undesirable drop in some design objective.

*an uncontrollable parameter* is a parameter that the designer cannot directly influence, but nonetheless is relevant to users achieving their goals in a user interface. An example of an uncontrollable parameter is the system delay in a web browser

*Critical parameter* is a subtype of uncontrollable parameters. A critical parameter is an uncontrollable parameter that is deemed critical to the success of a system. page loading time can be considered critical for some web applications.

*Sensitivity analysis* is used to understand how robust the user interface is in the presence of perturbation to these design parameters.

An individual user interacting with a specific user interface design forms an *operating point* in such a design space.

There are essentially two ways an operating point can be set for any user interface. 

- it can be set explicitly by the designer. This means the designer is aware of most relevant controllable and uncontrollable parameters of the design and trade-offs are therefore carefully considered in the design process.

- the operating point can be set *implicitly* by the design itself. This happens when the designer is unaware of critical controllable and uncontrollable parameters of the user interface. This may still result in an acceptable user interface but it introduces a higher risk that the user interface may not perform as well as initially hoped and, in some cases, can lead to dangerous user interfaces that can result in financial losses, injuries or even death.
no designer is able to be aware of all parameters of a user interface design.
### QoC: Questions, Options, Criteria
Questions structure the space of alternatives, Options are possible alternative answers to Questions, and Criteria are used for evaluating and choosing among Options

consider a scrollbar:
1. The scrollbar is normally invisible and appears only when scrolling action is taken. 
2. The scrollbar is narrow. 
3. The scrollbar indicates the position of the view in the window. 
4. The scrollbar indicates the relatively size of the view in the window.

Each of these could have been formulated as a question. For example: 1. How to display? Permanent or appearing. If appearing, how should it appear?

According to QoR, options should be compared against criteria, which also should be documented.
1. Screen should be compact
2. Scrollbar should be easy to find 
3. Scrollbar should be easy to drag 
4. Scrollbar should tell intuitively how much there is to scroll still

Options should then be assessed against all criteria that are relevant. How to do that? Evaluations can be based on experimental studies (43), analytical methods
## Summary
- User interfaces are what the user comes into contact with when using an interactive system. 
- User interfaces comprise input devices, displays, interaction techniques, representations, and substrates. 
- The design of user interfaces faces a tradeoff between different, conflicting criteria.
# 24 Input Devices
## Summary
- Input devices allow users to provide information into a computer system. At a high level, they involve three levels: computation, representation, and implementation. 

- Design factors for input devices include their temporal and spatial resolutions, accuracy, sensing modality, sensing interaction potential, sensing validity, integrality and separability, and accessibility. The choice of appropriate input devices will typically require a design decision involving these factors. 

- Input devices span a wide range but can be roughly divided into key-based devices, direct and indirect pointing devices and uncertain control devices. These input devices provide different opportunities and challenges for design, and thus some are more suitable for particular interaction context than others.
# 25 Displays
**Hue** is how we usually speak about color. We refer to hue when we say "yellow" or "green". The RGB system for specifying colors relies on the hues red, green, and blue. 

**Value** concerns the lightness or darkness of a color. It is sometimes called the luminance or brightness of the color. Value is thus the intensity of the color going from an absence of light (dark) to the full brightness of a color. 

**Saturation** concerns the depth or intensity of the color. If we in a color picker sets one of the values of R, G, or B to full and the rest to none, we will have a fully saturated color. As we go towards a more even mix of R, G, and B values, the color becomes less saturated and will—when the R, G, and B values are the same—be white. Some books refer to this as intensity or chroma.
## Summary
- Displays turn digital information into physical phenomena that users should be able to perceive accurately. 

- A key consideration is their match to the human visual system. Any change in a display, be it visual or otherwise, may not be perceived or perceived proportionally by the user
# 26 Interaction Techniques
All basic interactive tasks that we carry out with computers are facilitated by interaction techniques, such as pointing, scrolling, menu, entering text, and navigating. Some familiar techniques we discuss in this chapter include scrolling, word autocompletion, panning, and zooming, and gain functions in pointing.

an interaction technique is a computation that couples input and output, to support elementary interactive tasks

these four are essential:
• Moving the active area or cursor in the user interface, often called pointing techniques. 

• Selecting or manipulating an object; this includes menu techniques 

• Entering numbers and text, often called text entry techniques. 

• Changing which part of an information space the user sees, often called camera control or navigation techniques
## Objectives for Interaction Techniques
![](https://i.imgur.com/YabZpVp.png)

### Tradeoffs in the design of interaction techniques

## Pointing techniques
A pointing facilitation technique maps changes registered in an input device to the movement of a cursor or the presentation of potential targets on display.
## Selection and manipulation techniques
Selection and manipulation techniques affect an object once it has been identified, for instance through pointing. 
### Simple selection
Usually, selection in graphical user interfaces is simple. You click the mouse over an object or tap it with your finger. However, sometimes this is difficult; recall the chapter on motor control (see Chapter 4). The target might be small.
### Menu selection
An interactive menu system organizes a collection of items on display so that the user can explore the menu and select the desired items
### Manipulation of Objects
In addition to selection, users may want to manipulate an object that has been pointed to in numerous other ways. For instance, the use of an expansion or contraction of a finger spread—a pinch gesture
### Text entry
Text entry techniques use computational methods to facilitate the task of entering text. The goal is make text entry more efficient, less effortful, or enable it in circumstances it would not normally be possible
## Two perspectives: Control and Learnability
On the one hand, advanced interaction techniques are not surprisingly common in everyday use of computers. We use them when scrolling, selecting targets, or entering text. However, it is challenging to create a new interaction technique that users would adopt.
### Control
A minimal analysis starts with the following elements:

• Goal: The user has a goal in mind, a state that the computer should be driven to, such as selecting a particular target on display; 

• Feedforward: The user sends a control signal via the input sensor to change the state; 

• Transfer function: A program that maps changes in the feedforward signal to changes on the display; 

• Feedback: The state-change is now visible on display; 

• Comparator: The feedback is compared against the goal state in order to determine the new feedforward signal.
### Learnability
A second hurdle concerning interaction techniques concerns human learning. In a nutshell, users are already familiar with some technique and must now invest time to learn another one
## Summary 
- An interaction technique is a computer program that couples input and output processing, with the purpose of improving or enabling elementary interactive tasks.

- Many interaction techniques are about striking a desirable tradeoff between learnability and performance. Consider hotkeys versus menus, for example. 

- Changing from one technique to use another one introduces a learning cost, which users may be unwilling to endure despite long-term benefits. 
- Users do not need to learn how the algorithm of the interaction technique works. Instead, they learn through experience to predict the consequences of their actions (internal models theory). This takes time. However, by an appropriate feedback design, the learning process can be facilitated. 
- Design should focus not only on ultimate performance but on incentivizing users to start and persist learning the technique 
- Oft-researched interaction techniques include the pie menu, the marking menu, speed-dependent semantic zomoing, the CD gain function, and hypertext. 
- Interaction techniques must be evaluated with realistic tasks and by relevant user groups to estimate their achievable performance.
# 27 Commands and Navigation
We need to name objects and actions in the user interface: A wrong word can cause a user to pick a wrong option

The central concern about commands is appropriate naming of actions and objects.
## Naming Objects and Actions
vocabulary problem :
polysemy (the same word means different things)
### Techniques for Finding Names
The first approach is to pick the names that users employ in real life for objects and actions. Such names may be found during user research (see Part 3). This is a straightforward idea

The basic idea in *elication studies* is to elict from users how they will execute a particular command and study the agreement across users on those commands to decide on a distinct set of commands that users will produce spontaneously with the highest likelihood. F
### Menues and  techniques
**A finite set of options** Typically between a handful and a few hundred, but can go up to a few thousands in professional software; 

**Visual and textual presentation** Options are presented visually on display using text, icons, and interactive feedbacks (e.g., hoverover cues); 

**Interactive exposition of options** Menu options can be shown fully or exposed interactively as a response to the user’s input; 

**Transience** Menus are often expanded in place and dismissed after use, saving screen estate
In general, a menu is a set of selectable options, like a menu of desserts in a restaurant. An interactive menu displays its options on a computer display for selection with a pointing device 
### ordering information 
The most general guideline is to group items that belong together.

Oftentimes, we have so many items to organize that placing them into a hierarchy is unavoidable.

Place the most informative items of a group to the top of a panel.
## Notational Systems
A notational system is a system with graphical elements composed according to rules, sometimes referred to as a visual grammar
### Cognitive Dimensions of Notation
Cognitive dimensions of notation form a design vocabulary that help designers and researchers to discuss, assess and critique notational systems.

**Viscosity**
Resistance to change. *Repetition viscosity* means that a change requires many actions of the same type, such as for example, selecting each cell in a spreadsheet individually and assigning them a color attribute. The more involved and complex it is for a user to make changes in a system, the higher the viscosity

**Visibility**
Ability to view components easily. The overall visibility provided by the system is determined by the [[Inter - Reading for week 6#Visual saliency|saliency]] of visual elements in the interface and the ability to reveal visual elements easily

**Premature commitment**
Constraints on the order of doing things. The degree of flexible a user has in carrying out operations in any preferred order

**Hidden dependencies**
Important links between entities are not visible. If certain elements in the system rely on other elements, such dependencies should ideally be evident to the user.

**Role-expressiveness**
e. If certain elements in the system rely on other elements, such dependencies should ideally be evident to the user.

**Error-proneness**
The notation invites mistakes and the system gives little protection.

**Abstraction**
Types and availability of abstraction mechanisms. Abstractions are definitions of underlying notations

**Secondary notation**
Extra information in means other than formal syntax, such as code comments.

**Closeness of mapping**
Closeness of representation to domain. The closeness of mapping describes how well the notation maps to the phenomena that the system is attempting to capture. The better the match between the notation and these phenomena, the higher the closeness of mapping.

**Consistency**
Similar semantics are expressed in similar syntactic forms

**Diffuseness**
Verbosity of language. Notations can be overly redundant, resulting in overly long expressions in a text-based notation or disproportionate use of screen real estate. The more redundant the notation, the higher the diffuseness.

**Hard mental operations**
High demand on cognitive resources. The more difficult it is for the user to conceptualize and understand tasks or components in the system, or the system as a whole, the higher the demand on the user’s cognitive resources.

**Provisionality**
Degree of commitment to actions or marks. The ability of the system to allow the user to temporarily explore different solutions or designs is measured by its provitionality.

**Progressive evaluation**
Degree of commitment to actions or marks. The ability of the system to allow the user to temporarily explore different solutions or designs is measured by its provitionality. For example a syntax checker for code.


The easiest method to understand how cognitive dimensions of notations can be applied in practice, is to use them to analyze and contrast how two different notational systems support the user in achieving a set of tasks.
## Recognition versus Recall
When users recognize, they identify an item of relevance based on some cue for what they want to do among a set of items. This is what we all do when we use menus

When users recall, they come up spontaneously with names for commands or descriptions of objects.

from an HCI perspective, the difference between recognition and recall in user interfaces represents a fundamental tradeoff.
## Summary 
- In user interfaces, naming the objects and actions is a important activity, in particular because users are likely to call objects and actions different things, the so-called vocabulary problem
# 28 Graphical User Interfaces
## Design Objectives
### Visibility
GUIs should strive to have high visibility. This means that in order to support users in achieving their goals these goals, and the necessary steps to achieve the goals, should be visible to users.

**What You See Is What You Get**

**Visibility of Commands** Another example of this principle is to ensure that commands are visible.

**Visibility of Status** Visibility of status means ensuring that the GUI shows the status of entities relevant to the user’s goals. An example of visibility of status is an indicator of whether a remote user is available or busy in a communication program

**Visibility of Dependencies**

### Consistency
consistency is an important design objective

Consistency means that representations are similar across the user interface
### Minimizing Errors
**GUIs allow users to reverse the results** if their actions are later found to be undesirable.

**Preempting Errors** GUIs should adhere to sound GUI design principles, such as those mentioned in this section

**Explaining Outcomes and Confirming Actions**
dialog boxes
### Accessibility
GUIs should be accessible to all users
## The Principle of Direct Manipulation
Shneiderman [739] states that a direct manipulation interface has the following three properties: 
1. Continuous representations of the objects and actions of interest with meaningful visual metaphors 
2. Physical actions or presses of labeled buttons, instead of complex syntax
3. Rapid, reversible, incremental actions whose effects are on the objects of interest are visible immediately
### Benefits and limits of direct manipulation
Distance refers to mental effort required to translate goals into actions and then evaluate their effects.

Directness = Distance + Engagement

Distance refers to mental effort required to translate goals into actions and then evaluate their effects.

Norman has named these as the gulfs of execution and evaluation

Engagement refers to the locus of control within the system. Users should feel like being the agents within the system.

difficult to perform repetitive actions, which in command language interfaces can be done with scripting.

Concurrent actions are also difficult because there is a single pointer only.
## Anatomy of a Graphical User Interface
### Graphical User Interface Elements
**Windows**
encapsulates an application or a task
**Panels**
An arrangement of panels is used to create an application GUI.
**Menus**
**Icons**
An icon is a graphical depiction that represents some capability of the GUI
## Designing a Graphical User Interface
### Characteristics of design processes
#### Common GUI guidelines
**Task support:** GUIs should prioritize support for tasks that are frequent, important, or risky.

**Simplicity:** ‘’Keep it simple, stupid” (KISS).

**Responsiveness:** Simple interactions like manipulations of widgets should have responses within a few tens of milliseconds.

**Consistency:** Users are not tabula rasa. They approach your design with priors. In other words, based prior exposure to related UIs, they have formed expectations about your design’s structure and behavior.

**Recoverability:** Does your interface allow users to undo, veto, or recall their actions?

**Assistance:** Do not ask users to do things that can be done automatically for them.

**Scaffolding:** Offer support for developing skills

**Ability-based design:** GUI design should support users with different motor, perceptual, and cognitive abilities.
### Visual Organization
#### Visual hiearchy
**Visual Hierarchy:** Elements on a graphical layout should be organized logically. 
![](https://i.imgur.com/x29tON5.png)

Visual hierarchies use visual cues to define which elements belong together and in which order they should be looked at.

Gestalt laws are useful for visual grouping

Grid line is the most important organizing principle of layouts

#### Visual guidance 
Visual Guidance : GUI design should have a visual flow that matches the user’s task flow ([[Inter - Reading for week 8#Task analysis|see Chapter 15 for task analysis]]).

Visual flow refers to the order in which users are likely to scan the regions of a UI. By contrast, *perceptual clutter* is a state where everything is competing for the user’s attention, and it is not clear where to start a task.

Negative space - that is, the use of white space - can be used to guide attention, too

We learned in [[Inter - Reading for week 6#Visual saliency|Chapter 3]] about visual saliency and clutter, which provide a systematic concept for understanding what grabs a user’s attention.
### Icons
Icon design needs to take into account a number of factors. First, an icon may serve to represent many purposes at once as an icon can be a representation of a digital object, an underlying action, a receivable action, or all.

the bin icon: an empty bin communicates to the user, while a bin with contents signals that there are files in it. If the user clicks the bin icon, then the system will open a file explorer window.

Second, the design of an icon must be understandable by the user.
### Metaphors
design concepts, processes and actions in a graphical user interface around the user’s prior knowledge, such as designing digital office tasks: note taking, file mangement etc.
## Summary 
- Graphical user interfaces were invented more than 40 years ago but is still the main interaction style in many computer systems. 

- Direct manipulation is a key principle of graphical user interfaces. 

- Graphical user interfaces exploit a number of visual design principles, including visual hierarchy, grid lines, and undo.

# 29 Reality-Based Interaction
To address these limitations, researchers have worked on several ways to positively characterize new opportunities for user interfaces. Several researchers have attempted to articulate in a principled way why, and how, user interfaces should be developed beyond the model of the desktop computer and its focus on windows, icons, menus, and pointers.
![](https://i.imgur.com/Xy1nEq6.png)
In practice, this vision boils down to research on interfaces that in various ways break key assumptions about desktop-based computing.

• Mobile interaction that breaks the assumption that interaction means that a user is primarily stationary. 

• Multimodal interaction that breaks the assumption that interaction with computer systems primarily involves input using one modality and output using another, such as a visual display. 

• Ubiquitous computing that breaks the assumption that users must command computers to get things done. Ubiquitous computing exploits context sensing to enhance and automate interactions for the user. 

• Mixed reality and tangible interaction that break the assumption that virtual reality and physical reality are separate.
## Summary 
• In reality-based interaction, users’ physical surroundings contribute to interaction either explicitly (by being represented in the interface) or implicitly (by affecting it via other factors). While mimicking reality is a great starting point, it also has limitations. 

• In mobile interaction, physical surroundings not only cause pertubations and noise, but engage users’ to multitask, which limits their attention to the device itself. 

• In ubiquitous computing, sensor data is used to infer a user’s context or goal, with the goal of better embedding computers into everyday situations. 

• In mixed reality interfaces, virtual content becomes associated with physical reality, or vice versa, allowing ‘mixing’ of content in novel ways. • In tangible interfaces, computations are associated to physical manipulations of physical objects.