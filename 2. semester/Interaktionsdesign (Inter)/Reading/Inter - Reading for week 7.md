---
date: 12-02-23
day: Sun
week: 7
year: 2023
type: Reading
course: Inter
status: Closed
semester: 2
tags: ForståMennsker
Summary: "Cognition, Experience, Normans model, utility og usability, needs and motivation"
---
##### Weekly note
[[Uge 7 - 2023]]

# Læseplan
![](https://i.imgur.com/Spnh7la.png)

# Chapter 5
The main function of cognition in HCI is to help a user control a computer to do
what they want.
## elementary cognitive capabilities: 5 elementary cognitive capacities 
### Supervisory control
Adaptively deciding goals, (what to do), allocation of cognitive
resources to tasks, and change of course of action when needed.
### Memory
Forming, maintaining, and accessing beliefs about objects that are not directly perceivable.
### Attention
Selectively processing some part of the perceptual field, for example by deploying
visual attention on a screen or by sensing a tactile display sweeping fingertips
on it.
![](https://i.imgur.com/EraKCQg.png)
### Reasoning
Applying transformation rules to beliefs to form new beliefs.
### Decision-making
Interaction often requires deciding. For example, a user might decide to install application A and not application B because A appears to be more favorable with respect to features and costs.
## General Findings about Cognition
### Cognition sets goals and maintains focus on them
A goal is some desirable state of affairs. In HCI, a goal often relates to something that people would like the computer to do for them.
### Cognition is limited
We can only keep active in mind a few mental representations. According to research, the typical working memory capacity is about 2-4 items.
### Cognition computes on representations of reality
The hallmark of cognition is its ability to reason about things that are not directly perceivable.
### Cognition is learns and adapts
For some time, it was believed
that human action is driven by plans and reasoning. That is, we plan sequences of
actions and execute them. Suchman [749] challenged this view in her studies of repair and maintenance personnel of Xerox copymachines. She found that even in a highly regulated profession, a worker’s action is not heavily scripted, but requires constant readaption and replanning. While planning is done, they are often noncommittal sketches. We also need to adapt. cognition is not simply passively processing information from external environments and reacting to it.
### Cognition consumes energy. (Mental effort relates to the use of energy we need when controlling thinking to achieve our goals).
Mental effort relates to the use of energy we need when controlling thinking to achieve our goals [227].

Mental effort is distinguished into two components: 

*Task effort* refers to responses to increase computational demands.

*State effort* refers to the energy required to protect performance from
physiological fatigue, which can be caused by sleep deprivation, for example.

Although effort may sound like a negative concept – effort is something that limits performance, it also serves a positive function. The feeling of effort protects us from overconsuming energy in less important activities.
## Cognitive Control
Cognitive control refers to our ability to direct thinking and action toward some goal.

The problem of cognitive control: At any given time, innumerable stimuli bombard our senses and we have several options on how to share our limited resources
among them. 

if a notification pops up, do you immediately attend it or rather complete what
you were doing?

### Activating goals
Cognitive control is also needed to activate the right subgoals at the right time. Faced with a complex task with multiple goals, cognition must break it down into simpler, better manageable parts.

Altmann and Trafton [16] explain this in their goal activation
model. According to the authors, contextual cues prime subgoals. For example, when we see a familiar intersection on the way home, it subconsciously activates the next subgoal. Priming is about subconscious activation of concepts by perceived cues.
### Activating task representations
When a task is performed, cognition needs to make relevant task representations available.

Cognitive control operates through two mechanisms: *activation* of relevant representations in memory and *inhibition* of irrelevant representations.

example:  searching for an application icon on a desktop; this task was very challenging and that you have already looked at several locations. Need cognitive control to select (activate) which place to look next, but also inhibit revisiting locations you have already visited. *This is called inhibition of return.* without this you would keep looking in the same place. 
### Choosing actions
Cognition is necessary to choose what to do.

how do we know which one to pick right now if the goal is not immediately available but distal?

First, through experience, users learn to associate an action to *recurring contextual cue*

For example, when you start using phone, at first it is hard to find where things are. After, you can find things you often use faster and more directly.

The other mechanism is *reasoning about and simulating possibilities in mind*. For
example, before selecting what to do, we may think about possible routes in a virtual environment. This requires cognitive control: you need to activate representations and compare the options. This is effortful.
### Multitasking
Cognitive control is vital for multitasking
Multitasking is a resource-sharing problem.

The resources include those defined by attention, motor system, and working memory. However, some of these resources can only be shared in an all-or-nothing fashion, while some can be shared in a graded manner:

you only have one dominant hand

Visual attention, likewise, can be focused on a single location in space at a time

auditory attention can be somewhat better shared among sound sources

The multiple resource theory (MRT) of Wickens [831] provides a rough but useful
heuristic for understanding how resource conflicts arise in multitasking. 

thee ”Wickens’ cube” can be used to see if 2 tasks can be done at the same time

The MRT cube: you mark all segments that the to-be-done tasks need. If two or more tasks end up occupying the same segment, conflict emerges and will deteriorate performance. (see [[Inter - Lecture Mon - 7|Lecture monday week 7]])

texting and gaming is hard beacuse you rely on visual modality 
![](https://i.imgur.com/liYKmjk.png)
### Predictive control
When the task environment is dynamic (changing on it own without user) cognitive control needs to be proactive. 

The internal model should be able to predict what might happen if an action was taken.

internal model should not determine action. [[Perception]] should also have a role to play.

According to the Bayesian brain hypothesis, we use prior experience with a task
environment in a near-optimal way to predict events in it [407].

we do not hold a single representation in mind, but several with varying probabilities.

when gamers estimate when to press a button to intercept an object, they give different weights to visual information, auditory information, and their own estimates of the object’s movement (prior) [445].
### Cognitive workload
Having to continuously decide
what to do is mentally demanding. Doing this for an extended period of time may cause fatigue and stress.

The experience that follows from effort and stress is called cognitive workload.

Over time, with experience, people develop minimum effort task strategies,
routines that diminish perceived workload
## Memory and Learning
Current neuroscience evidence suggests that several distinct memory systems are
involved in interaction, each with different functions, purposes, and neural bases [735].
### Working memory
Working memory (WM) refers to temporary maintenance and manipulation of representations in mind needed for action [569].

Currently, it is thought that the capacity of WM is perhaps just 3-5 items in young adults [163].

**Tasks using WM**
copying text from one application to another. You need not only remember what
to copy, but also keep track of where you are in the to-be-copied text.

*interruptions.* We get notifications and change tasks all the time. Interruptions are the more disruptive, the more we rely on working memory at the time of interruption. 

**One takeaway to design** 
avoid relying on working memory. This can be done in cases where representations can be encoded to the long-term memory.
### Long-term memory
Long-term memory (LTM) refers to memory systems that are responsible for exploiting past experiences.

Declarative memory refers to long-term memories that can be consciously experienced, or explicit memory, while non-declarative memory are implicit memories: They affect our behavior without conscious recollection.

for a password that we have entered several times, we may have forgotten the semantic representation of the password and rely on our ability to ’just type it’. if the keyboard changes, it will be difficult to type a familiar password.
![](https://i.imgur.com/Jp0RVnc.png)
Priming refers to an unconscious effect of previously seen stimuli on responses to a subsequent stimulus. Contextual cues ’prime’ or make us readier to give certain responses. For example, asking a user to press left arrow button in a gaming context may lead to faster responses among gamers than doing that in a form-filling context.

Conditioning is an unconscious association between the environment (cue) and the response.
### A three-stage view to memory functioning
Both declarative and non-declarative LTM can be understood in terms of three stages organized in time:
1. **Encoding** memory traces are formed during interaction;
2. **Storage** the traces are retained in-between encoding and retrieval, some are forgotten;
3. **Retrieval** the traces are retrieved at later stage, for example when using the same user interface again
### Forgetting
The more time that has elapsed since a memory was activated, the less probable it is that it can be retrieved.

According to interference theory, memory traces become confused
with each other. When we try to retrieve a memory trace, another (false) memory is activated at a similar level. Memories are not simply forgotten, they become mixed up.
### Learning over time
What used to be hard and taxing becomes more automatic, and therefore more effortless and requires less cognitive control.

increasing practice provides diminishing returns.

*Automaticity* refers to fast and effortless performance of skills.
### Stages of skill development
Skill development in HCI is often described in three stages: Novice, Intermediate, and Expert.
### Knowledge in the world, knowledge in the head
users are not at the mercy of what they remember.
The essential distinction is between knowledge-in-the-world and knowledge-in-the-head [278].

to avoid tell our passwords, we would like to store and maintain
them in long-term memory. This is knowledge-in-the-head. However we often store passwords on slips of paper, etc.; knowledge-in-the-world. Our cognitive functioning has become dependent on us having access to that environment.
## Reasoning and Decision-Making
Reasoning is about thought processes that allow us to conclude something that we do not already know.

Reasoning about what will happen if you issue a particular command to a software
that you have not done before.

inference, where we form a new belief based on observations.

Predictions are reasoning about the future.
### Mental models
Mental models are memory-based representations of interactive devices that are used for reasoning, inference, and prediction.

They are representations of systems and the way users’ inputs affect them.

mental model of a thermostat may tell how the temperature set by the user affects the felt warmth in a room.

mental representations of devices should allow users to simulate what happens to the internal state of a device when a certain input is given.

Mental models are rarely complete models.
### Decision-Making
Prospect theory posits that choices with gains and loses are evaluated relative to a reference point [387].

they are willing to gamble with losses.
### Decision heuristics
Kahneman [385] : we have two systems of decision-making. ”System 1” is a fast system driven by intuition, emotion, imagery, and associative memory. ”System 2” is a slow system that can monitor System 1 and intervene
if intuition is not sufficient for the task.

A cognitive heuristic is a rule of thumb used to identify a quick solution to a complex problem. For example,

**Anchoring** occurs, when we center our choice around a known reference solution.

**Decoying** occurs when a reference point we have prevents us from seeing another one ’behind’ it.

**Availability** heuristic refers to people’s estimates of the probability of an event. Similar to the anchoring, the availability of a memory makes it more likely to be entered as a solution.

**Status quo** bias refers to the prevailing solution, such as a famous or popular option.

**The bandwagon bias** occurs when we see our peers following an option.

availability heuristic: name a great smartphone; you would be more likely to name
something that quickly comes to mind.

heuristics generate a quick soulution but lead to biases
## Cognitive models
describe formally what happens in a person’s mind during an interactive task.

a model takes some input that represents the taks, and has some formal mechanism to link that input to predictions about behavior: A model can be expressed in different ways:

**Rule systems** Sets of rules or logical clauses that describe how information is processed with this in mind. For example, mental models are described as logical statements.

**Mathematical models** 

**Simulations** 

**Data-driven models** are models that are learned from sample data, or via trial and error. For example, artificial neural networks (ANNs) are used to understand [[Inter - Reading for week 6#Summary Chapter 3|visual saliency]].
### Cognitive architecture models
GOMS is a cognitive architecture model of cognition. It simulates the processing
of information in separate modules of mind, and the flow of information
between them. Modules have internal capacity limits and processing times.
## Putting cognition into practice
![](https://i.imgur.com/9qQ8HrA.png)

## Summary
- The main function of cognition in interaction to help users deal with complex systems and situations.
- Cognition is limited, yet learning and adaptive.
- Theories of cognition help understand several key questions of information-rich task
- Environments, for example what makes multitasking situations demanding, what happens when users learn to use a user interface, why they may fail to remember something they have seen before, and how they draw conclusions based on their beliefs about systems that are opaque to them.
- Many of HCI’s guidelines and evaluative models are rooted on theories of cognition.
# Chapter 6
Maslow’s famous hierarchy posited five needs ’stacked’ in the shape of a pyramid. From lower to higher:
1. Physiological needs, such as food, water, warmth, rest;
2. Safety needs, such as security;
3. Belongingness and love needs, pursued via intimate relationships and friends;
4. Esteem needs, pursued via prestige and feeling of accomplishment;
5. Self-actualization, pursued by achieving one’s felt potential and via creative activities.
Despite its popularity, Maslow’s theory is not considered current among psychologists and practitioners.

According to this theory, an individual’s basic conditions would need to be satisfied for a person to be interested in a social media application, but still poor people may express strong needs for self-actualization and esteem in social media
## Psychological Needs
there are basic psychological needs that drive interactive behavior
![](https://i.imgur.com/tFpRjH5.png)
## Motivations
Needs explain why people universally reject certain types of technology —consider for example surveillance. Motivations explain why technology that becomes adopted in one user group in one context is rejected in other circumstances.
### Wants and Desires
What people say they want may be very different from what they
find satisfying to actually do. this essential for user research
### Quasi-needs
How can wants and desires be incorrect? they are learned. 

Primary reinforcers: basic needs like food and water. 
Secondary reinforcers: money or good grades, they are learned. 

A quasi-need refers to a statement of need that appears like a need, but is not one. "i need my gucci to feel happy"
### Uses of Theories of Needs and Motivations in HCI
fulfilling previously undiscovered needs.

allows us to analyze and classify user research by using models of needs and
motivations to help see larger patterns in user reports and the essential drivers of what people want and do.
### Self-determination Theory
Proposed by the psychologists Richard Deci and Edward Ryan

SDT starts with the idea of people as active organisms pursuing self-growth, mastery, and fulfillment. 

**Self-determination assumes three basic psychological needs:**
1. *Autonomy:* the sense that actions are performed willingly, in alignment with one’s self, and not directed by external forces;
2. *Competence:* the feeling of achieving mastery and controlling the outcomes of action;
3. *Relatedness:* the sense of reciprocal belonging in relation to other humans.

People are seen as actively seeking new opportunities to master – as opposed to satisfying deficits(Maslow).
### Motivations
Motivation concerns what moves people to action.

According to SDT, motivations are ultimately rooted to a sense of self-determination.
**Two types of motivations**
1. *Intrinsic motivation:* consists of activities that a person has integrated into sense of self. 
2. *Extrinsic motivation:* refers to external regulation of motivation.
It gets people to actively pursue technology use.
The opposite is *amotivation*
![](https://i.imgur.com/aX9auzp.png)
Internalization is the process of transforming an extrinsic motive into personally
approved activities.
- External regulation
- Introjected regulation
- Identified regulation
- Integrated regulation
According to STD, when we study ”user needs” we actually study motivations.
![](https://i.imgur.com/tpuHdZx.png)
One user may be pursuing autonomy more than relatedness or competence.
These can be found out via surveys.
![](https://i.imgur.com/uX1U4g0.png)
In the case of a mobile game, the user would assess if the application has functional significance such as usefulness, and how success in the game would be perceived by others. According to SDT, via cognitive evaluation, people associate external rewards (like success in a game) to a basic need satisfaction.
## Behavior Change
The rise of self tracking - behavior change.

next discuss some key principles in doing so and some ethical considerations around behavior change:
### Stages in Behavior Change
Transtheoretical Model: behavior changes through 5 phases.

used the model to develop feedback mechanisms for energy
consumption
![](https://i.imgur.com/0KyQTwn.png)
### Other Factors in Behavior Change Several models of behavior change do not separate phases
Self-determination theory([[Inter - Reading for week 7#Self-determination Theory|SDT]]) may also be seen as a way to conceptualize behaviour change. if the needs and motivational processes are supported with tech might help bring about some behaviour 

One common
application of self-determination theory is to justify the use of gamification,
### Ethics of Behavior Change
messing with users’ needs and wants and motivations caries ethical implications.

A dark pattern comprises user interface elements “that benefit an online
service by coercing, steering, or deceiving users into making unintended and potentially harmful decisions”
## Summary
- User needs are not simply about deficit-minimization.

- Self-determination theory proposes universal psychological needs that are manifestedin behavior via motivations.

- Besides the identification of user needs, the main use of needs theories lies in behavior change applications, which is an ethically contested application.

- The theory of motivations discussed in this chapter warns against the naive view that experiences can be designed. Because of the very complex relationship between internal and external processes in behavioral regulation, there is no deterministic relationship between design and experience. Only by thoroughly understanding both the prevailing state and the psychological processes in a particular case, one can hope to positively influence the formation of experiences.
# Chapter 7
## What is Experience?
In a study of students’ experiences before, during, and after spring break, among other things, the researchers asked about students’ overall subjective experience [842].
They asked them to rate the statement “I will be satisfied with this vacation” on a 1–5 scale. the satisfaction with the vacation was higher after the vacation than during the vacation. Satisfaction before the vacation influenced not only the experience during the vacation, but also how the experience afterwards.
### Experiencing and experiences
the ongoing, moment-to-moment experiencing, from aggregated accounts of an experience. experiences seem to influence the desire to redo the vacation more directly than experiencing.

HCI, experiencing has been defined as “momentary, mainly evaluative feeling (good-bad) while interacting with a product or service” [308, p. 12]. feelings, memories, and thoughts, available to us through introspection

In HCI, experience is commonly defined as “a person’s perceptions and responses that result from the use or anticipated use of a product, system or service” [362]. accounts of episodes of interaction, they are summaries of a series of experiencing.

Sequencing effects mean that the order in which we are experiencing things is important for our experience. 

The peak-end rule: people tend to anchor their assessment of experience to ends and peaks. 
‘Ends’ are the most recent experiences, like the last time you used a particular IT system

Peak experiences, are the best or worst experiences associated with the system.

Even very short experiences can have a strong influence on the stated experience.
These effects matter in HCI.
### Consequences of Experiences
purchases made to provide users with an experience were valued more
than those made for material possessions [788]: key argument for experiences being an important part of HCI [309].
### Processes in Experience
![](https://i.imgur.com/udTp6X5.png)
## 3 Types of Experience
### The Pragmatic and the Hedonic
Pragmatic experiences are those that concern practical matters and the achievement of goals. Simple, clear, or understandable. getting from A TO B.

Hedonic experiences are focues on stimulation, novelty, curiosity, aesthetics, and pleasure. Not getting from A to B, but about the pleasure involved in getting there.

### Pleasure
consider pleasure as a sensation that is good or desirable.
four kinds of pleasure: 
1. *Physio-pleasure* concerns the pleasures derived from the senses, including the tactile quality of a keyboard or the smell of a car.
2. *Socio-pleasure* concerns the pleasure that comes from our relationships with other people and groups.
3. *Psycho-pleasure* is about the pleasure of thinking and feeling.
4. *Ideo-pleasure* is about the pleasure derived from the values they embody or help us embody.
Jordan [381] chapter 7 refs
### Emotions
two approaches have been prominent in HCI to understanding emotions.
One prominent model of core affect separates valence and arousal. The general idea of this model is that there are two fundamental dimensions.

1. *Valence,* which describes positive vs. negative emotions. Positive emotions are energizing emotions, such as being happy or proud.
2. *Arousal,* which describes the level of energy involved or the degree of activation. High-arousal states are related to being alert or attentive.

basic emotions include fear, anger, surprise, disgust, happiness, and love.
## Assessing and Measuring Experience
### Rich reports on experiences
One method is to ask people to report their experiences. This can be through open-ended questioning, for example, in an interview session
### Measures
![](https://i.imgur.com/ngw9fvc.png)
## Can experiences be designed?
would it be possible to design an interactive system that makes users feel pride? 

Designers have no control over experiences, they are individual and idiosyncratic.

therefore the notion of "user experience design" is not appropriate.
## Summary
peak-end-rule suggest that we should pay particular attention to the end of experiences to achieve the impact we want.

- Experiences are created through inference from ongoing experiencing.
- Experience is not a single monolithic thing but comprises, among other things, pragmatic and hedonic aspects.
- Affect is a special aspect of experience characterized by positive and negative dimensions—valence.
- Experiences are indirectly influenced by the designer—they cannot be directly designed.
- 
# Chapter 16
## What is a Theory of Interaction?
we need to discuss what makes a good theory in HCI.

HCI’s theories, should contain statements that link humans and technology to some outcomes (e.g., ’poor usability’, ’high user experience’). Propositions characterize entities and link them to
other entities, some of which are conceptual and some of which can be measurable.

Consider the following propositions of Fitts’ law, which we discussed in Chapter 4:
1. ”Human motor system is a limited capacity information channel”
2. ”Attempts at reaching a target are limited by the speed and variance (accuracy) of the movement involved”
3. ”If the user tries to increas speed, accuracy will be compromised, and vice versa: an increase in accuracy reduces speed”
4. ”The difficulty of selecting a target is proportional to its distance and inversely proportional to its width (index of difficulty)”
5. ”Average movement time can be predicted as linear regression to the index of difficulty”

The theory starts with a high-level metaphor: the limitedcapacity channel. From there on, it derives propositions about the relationship between performance and interface design via the construct of a ’target’.
## Summary
- Interaction is a core notion in HCI and refers to the mutual influence between people and computers
- Phenomena in interaction are emergent; i.e., they are not attributable to either of the partners alone.
- Theories of interaction explain emergence of interactive behavior by reference to factors relating to the human, the computer, and the environment. Some of those factors can be latent; that is, they are not directly observable.
- Theories of interaction have different theoretical commitments and they encompass different time scales and purposes.
- Theories of interaction helps design and evaluate interactive systems.
# Chapter 18 Dialogue
## Normans Seven Stage Model
one can compare Fitts’ theory of aimed movements with Donald Norman’s theory of interaction, both of which we discuss in this Part. Fitts’ theory of aimed movements has high statistical accuracy but low
coverage. Donald Norman’s theory, on the other hand, has high coverage but low accuracy.
### Execution
1.  Forming a goal about something that you want to accomplish.
2.  Forming an intention to act.
3.  Selecting a sequence of actions that will lead you to your goal.
4.  Execution of the action.
### Evaluation
5.  Perception of the state of the world resulting from the action.
6.  Interpretation of this perception based on your expectations.
7.  Evaluating whether or not the goal was reached.
It considers interaction as goal-directed, turn-based dialogue. The model includes seven stages in a communication turn: a user formulating a goal, specifying and executing the actions needed to move toward the goal, and perceiving the resulting system state and relating that to the goal. These stages are presented linearly, one stage’s output serving as input to the next.

gulf-of-execution and gulf-of-evaluation

**Gulf-of-execution** This gulf is about knowing what to do to have a desired state change
in the computer. For example, what should you do to get a piece of text copied to
clipboard pasted in a particular spot?
![[Pasted image 20230215085504.png]]

### Kirsch model
Kirsh:  Norman’s model makes an unrealistic assumption: the user is assumed to know the
environment and its options and is merely picking an option them. However, we do not
always known what the options mean or, even, which ones are available. Kirsh argued
that users need to actively explore interfaces to become aware of the available functionality
and how they work.

Kirsh argues that discoverability of such options is as important
as visibility; however, discoverability is not covered by Norman’s theory

Kirshs alternate model: every stage in Norman’s model can have an interactive relation with the environment:
We learn about options by exploring the interface; We learn about how to specify actions by trying
out actions and seeing what happens; we position our bodies to be better able to perceive
the response of the environment; and we change the environment to be better able to
evaluate those responses.
![[Pasted image 20230215084406.png|300]]
We explore our environments to learn about what is possible
## Summary
- Dialogue is about the organization of communication as a series of turns between communication partners.
- The core elements of dialogue are: a communication turn, communication context, and interpretation (of the turn).
- Dialogue interaction includes both speech-based and graphical interaction.
- Dialogue is understood as computation, as goal-directed action, as communication, and as embodied action. Each perspective provides its own methods to bear on the analysis and design of dialogues.
# Chapter 19
First, understanding computers as tools emphasizes the utility of a tool, by which wemean how well it supports what people want to do. Second, tools may be more or less easy to manipulate when used. This is called usability. Tools may also be more or less accessible to their users. This is orthogonal to the utility: Tools may be useful, but difficult to operate for an individual.
![[Pasted image 20230215090254.png]]
![[Pasted image 20230215090327.png]]
## Utility
The utility interactive system concerns its match with the tasks users want to do. If that match is good, the tool has high utility; if the tasks that users want to do are not supported, the tool has low utility.

Users may realize their wants only when using a system, which makes the prediction of utility inherently hard.
## Usability
Some tools are easy to operate: they make it plain what they may do, it is easy to learn
to use them, and they may be safely used
### Characteristics of Usability
One insight is that usability is relational; it arises as an interplay between people, tasks (problems), and interactive systems (tools).

usability is sometimes called quality-of-use, to emphasize that it is a quality of interactive systems, like maintainability and reliability.

system may be usable for some task and less for others; it may be usable for some users but not for others.
### Models of Usability
two models of the dimensions appear particularly useful. One is the ISO 9241, part 11, model of usability. It defines usability as comprising effectiveness, efficiency, and satisfaction. Table 19.1 shows the definition of these dimensions as well as examples of how they may be measured. Another model for thinking about usability is that of Nielsen [570]. It separates five dimensions of usability (see Table 19.1)
### How to select goals for measuring usability?
ISO 
Nielsen
![[Pasted image 20230215090514.png]]
### How to select goals for measuring usability?
How do one select or prioritize between dimensions and measures for a particular case? For instance, is the time it takes to complete a task always a good indicator of usability and one that we should seek to minimize? Is effectiveness always more important than satisfaction or is it the other way around? The answer is that the selection of usability measures is an exercise of judgment, which the models in themselves does not support. Rather, it is a matter of validity and of identifying the critical parameters.

Newman and Taylor [567] presented a concrete approach to selecting usability measures, which the call selecting critical parameters, that is, “performance parameters that measure how well the system serves its purpose”. In particular, the critical parameters for a particular system are those that allow designers and evaluators to to establish whether an interactive system serves its purpose and compare one design with another.

The categories of satisfaction in the ISO model and subjectively pleasing in Nielsen’s model both refer to the experience of using a tool to accomplish a task. Rather than looking at the total experience, such as expectations, memories, and general affect, satisfaction is historically been understood as more narrowly concerned with the experience of using a tool to accomplish a task.

The sidebar shows one of the most popular questionnaires for doing, the System Usability Scale. It gives a satisfaction rating between 1 and 100 for an interactive system. Questionnaires with different levels of breadth exist for satisfaction:
### System usability scale
![](https://i.imgur.com/y1Vvl1j.png)
### Acceptability
**Practical acceptability** includes cost, the reliability of the interactive system, and its compatibility with other systems. The perceptions of utility and usability may also enter the judgment of practical acceptability. This follows the model of inference about experiences that was outlined in chapter 7.

**Social acceptability**, in contrast, concerns whether interactions map well to the social norms and roles in the settings where they are used. Koelle et al. [420] surveyed approaches to social acceptability and found that indicators included "disturbing", "inappropriate", "creepy", and "impolite". These indicators would contribute to a user, or indirect users such as onlookers, would not find an interaction social appropriate. An example of considerations related to social acceptability occurred with early smart glasses, that is, eye wear with computational capabilities, in particular cameras [419].
### Technology Acceptance Model
TAM claims that decisions to adopt a technology are driven by two kinds of perceptions: (1) perceptions of how easy to use a system is and (2) perceptions of how useful it will be to use it [178].
![](https://i.imgur.com/uRPe2Nq.png)

From an HCI view point, TAM has a number of strengths and limitations [349]. It says very little about interaction, which in the end is the basis of the two critical types of perceptions. It also has very few non-trivial implications to design. It may tell which factors of tool use is more important: utility or usability. However, it does not tell what makes a system useful or usable.

## Accessibility
we want to ensure that products may be used by as large a group of users in as diverse situations as possible. We call that want accessibility. One prominent definition of accessibility is given in the standard ISO 9241-171. It defines accessibility as “the usability of a product, service, environment or facility by people with the widest range of capabilities”. Accessibility is also called universal design, universal usability, and inclusive design
### Designing Accessible Interfaces
## Summary
- The use of interactive systems may be seen as tool use, using the system to achieve a particular objective.
- The fit of a tool describes how well its functionalities match the demands of the task and the capabilities of the user.
- Tools should be accessible to their users, provide value in the world, be acceptable, and be usable.