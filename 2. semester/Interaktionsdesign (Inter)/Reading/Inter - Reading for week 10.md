---
date: 04-03-23
day: Sat
week: 10
year: 2023
type: Reading
course: Inter
chapters: 40,41
semester: 2
tags:
Summary: "Evaluation, KLM, Herustic"
---
##### Weekly note
[[Uge 10 - 2023]]
# 40 Introduction to Evaluation
We must ensure that the systems are practical, usable, and accessible, and if they can deliver the value to the people its designers imagined. In HCI, such assessments are called evaluations. This part describes how to conduct evaluations of interactive systems.

Evaluation methods should be systematic so that their results can be trusted, taken seriously, and replicated and scrutinized by others.
## Goals of Evaluation
The other main reason for evaluations is to discover how well an interactive system performs regarding some given objective. The goal here is not to inform the design but to ensure that the system satisfies the objectives. 
## Yardsticks of Evaluation
What is ’good’? If a system is very responsive, does it mean it is usable? It depends. If a user is skilled at using a poorly designed system, does it mean that the system is usable for that person?

The basic question in evaluation, then, is how we set our ‘yardstick’ against which we evaluate systems. Such yardsticks are typically derived from our view of what a good interaction is (see Part IV) or from the design objectives of user interfaces (see Part V).

Some ways of measuring user satisfaction provide reference values (e.g., the System Usability Scale gives a score between 0 and 100; typically, systems score 70.

To use a yardstick for evaluation, it should be operationalized. That means that general constructs (such as finding “no usability problems”) need to be turned into a procedure that allows us to measure a system against the yardstick. For example, usability is often operationalized as a usability test where selected tasks are given to invited participants to complete, while their task completion time, errors, and satisfaction are measured. ‘Error’ can be measured in many ways, such as inaccurate presses, misconceptions, or entering faulty states in the system.

Finally, we need to make conclusions based on the data obtained. If a user fails three times in completing a task out of ten, can the system be considered ’usable’? Because the constructs are about good interaction, many of them have been covered in earlier parts of the book. For instance, they include usability, accessibility, autonomy, awareness, memory load, and many more.

![](https://i.imgur.com/CuYgPEJ.png)
## Evaluation Methods
![](https://i.imgur.com/stCBDGE.png)
Evaluation methods contain at least some yardstick for evaluation, a process for performing the evaluation, tools to support the evaluation, and a standardized way of reporting the evaluation
### Tailoring Evaluation Methods
Evaluation methods can also be tailored to particular activities. The evaluation of games, for instance, has seen the development of particular heuristics
### How to Choose an Evaluation Method?
Professional evaluators master a toolbox of methods and tailor them in a case-specific manner.

analytic methods work best for relatively simple designs and assume that experienced evaluators are available. Due to their high false negative rate, they should not be trusted for complex or safety-critical systems.
### Validity, Reliability, and Impact 
#### Validity
The validity of an evaluation is about whether the evaluation result is the real value of the system. For instance, usability problems predicted by an evaluation method should be real problems for real users doing real tasks; otherwise, the evaluation is invalid.

#### Reliability 
The reliability of an evaluation refers to whether the findings of an evaluation would be changed with another set of evaluators or if it is repeated. If that is the case, the trustworthiness of findings is reduced, and it is unclear if action should be taken on the problems, as they might disappear if the evaluation was run again

#### Impact
Impact is about ensuring that the evaluation results can be used for their purpose, in particular, with regard to formative evaluation. Impactful results will help change systems for the better by being convincing and offering concrete input or ideas on how to solve problems.
## Is Evaluation Needed?
Evaluation is essential for a human-centered development process and, in addition, indispensable for research. The reason is that interactive systems are complex and assuming that they work as intended by their design is naive. Thus, we need to evaluate the systems.
## Summary
• Evaluation is necessary because systems are never perfect and because of the complexity of people, their activities, and physical, social, and organizational context. 

• Evaluation methods have different strengths and weaknesses; they may be tailored to specific technologies and user groups 

• Validity, realiability, and impact are key concerns for evaluation methods
# 41 Analytical Evaluation Methods
![](https://i.imgur.com/qv9EtRh.png)

empirical evaluation: their prime source of data is derived from measurements and observations of real people.

Analytic evaluation methods in HCI are a class of evaluation methods that do not require collecting data on (real) users. Their purpose is to assess the usability of a design and expose probable errors based on good questions, rules of thumb, or models of performance prediction with a user interface. In general, analytical methods consist of (a) a process for performing the evaluation and (b) a set of resources to be used in the process.

The main idea of an analytic method is simple to demonstrate: Let us consider the task of sending a message using your email app. 

- First, take your mobile phone and open the messaging application. 

- Then, decide on a recipient and a message that you would like to send. 

- Then execute this task. While doing that, write down on paper all steps you needed to take; steps such as clicking, touching, scrolling, searching, deciding, etc. 

- Now, repeat the sequence, but this time purposefully introduce one error somewhere in the sequence. For example, you could press the wrong button when you are supposed to send the message. What happened? Did the interface try to prevent you from making an error, for example, by disabling that button? Did it inform that there is an error? Did you easily recognize that you had made a mistake? If so, did the design help you recover from that error?

These considerations exemplify one heuristic evaluation guideline, called “Help users recognize, diagnose, and recover from errors”
### Putting cognition into practice
Design guidelines are heuristics, or rules of thumb, that instruct how to design and how not to design

Analytical evaluation methods are generally used for three purposes

In design, they are used to identifying potential usability problems so that they can be rectified in design before deployment; this is a form of formative evaluation

In evaluation, they are used to assess usability against a baseline design or assess how ready a design is for deployment; this may be formative or summative evaluations.

In accident investigation, they are used to identify factors that can increase the chance of accidents
![](https://i.imgur.com/RpqcUP7.png)
If a heuristic like “Help users recognize, diagnose, and recover from errors” is breached, it may trigger ideas on how to fix the situation.

However, analytical evaluation methods are not a replacement for empirical studies. Compared to empirical studies, analytic methods tend to have high rates of false positives and false negatives.

Cockton and Woolrych [157] found that 65% of the predictions from a heuristic evaluation were incorrect; Hvannberg et al. [361] found that 62% of the problems could not be found in a usability test.

Analytic evaluation methods also do not reliably capture phenomena within their scope; and they never capture those outside of their scope. A common cause for the low hit rate is that their successful application heavily depends on the skill of the evaluator.
## Heuristic Evaluation
capture practitioners’ experience in what causes problems in interaction;

**The term heuristic refers to a ’rule of thumb’. It is a rule of sort,** but typically loosely defined. For example, if you love cooking, you may know a heuristic for checking whether an egg is edible or not. If you place an egg in boiling water, and it floats, instead of sinking to the bottom, it is likely to be inedible

a useful heuristic in computer science is the following: a list of numbers can be sorted in increasing order by following a rule: Pick any item: if it is smaller than the one before it, swap the two

A usability evaluation heuristic is a rule for evaluating a user interface.

They are used to detect probable usability problems. In a heuristic analysis of an interface, an evaluator is provided a set of heuristics and the interface. The task is used to detect breaches of the heuristics; in this case, the heuristics serve as the yardstick for the evaluation

Numerous heuristics have been presented for different platforms and uses, from graphical user interfaces over games to web pages [679]. The most popular heuristic evaluation method is attributed to work by Molich and Nielsen in the 1990s [532, 566].
### Main heuristic set
#### Visibility of system status
The current state of the system should be visible to the user. A simple example is a progress bar that indicates the progress of a long-term operation (such as downloading a large file).
#### Match between system and the real world
The user interface should follow the language and any relevant conventions users are already aware of. If a user has to look up a term to understand it, then usability is reduced.
#### User control and freedom
Users should be encouraged to explore different ways of achieving their goals in the user interface. To allow this, it is important that users can reverse their actions. The ubiquitous undo and Redo functions are examples of interface features introduced to support this heuristic.
#### Consistency and standards
First, user interfaces should follow standard platform, system, and industry conventions.

Second, similar interface features should be consistently labeled and visualized throughout the application or system. This is known as *internal consistency.*
#### Error prevention
The user interface should be designed to prevent errors, for example, by displaying a warning and requiring user confirmation before a non-reversible action is triggered, such as deleting a file.
#### Recognition rather than recall
any information required to trigger common actions, such as labels, buttons, and menu items, should be either immediately visible or easily retrievable.
#### Flexibility and efficiency of use
A simple example is providing keyboard shortcuts for menu items and toolbar buttons that allow an expert user immediate access to these functions, while a novice user can still use direct manipulation to easily locate them
#### Aesthetic and minimalist design
Avoid providing information that is rarely relevant and avoid introducing user interface elements that may distract users.
#### Help users recognize, diagnose, and recover from errors
Provide error messages that are understandable by users and offer a clear solution path to rectify the problem
#### Help and documentation
If possible, present documentation within the context it is required, such as a step requiring the user making a decision.
### How to do a Heuristic Evaluation?
Heuristic evaluation is best learned through an exercise. Take your laptop and open the settings panel of your OS (operating system). Decide a setting you want to change, such as the way your mouse cursor behaves (its ‘transfer function’), and the particular value you want to set it to. Now go to starting view and execute the required (i.e., correct) actions and write down all steps on paper. Then go through each step and compare against each heuristic of Molich and Nielsen given in text. What to do with the result? First, count the number of heuristic violations. Is this an acceptable number? However, counting does not tell much about the real-world relevance of those violations. Second, think about your users: what is important to them and which violations would be harmful to them? Now classify the violations into three classes of severity: (1) critical, (2) important, (3) nuisance. Mark the severity of each violation in the list above. If you have a single critical violation, you can consider that the design failed. Slightly more formally, the resources that evaluators use in a heuristic evaluation are (a) the heuristics and associated training materials, (b) a process for evaluation, (c) a way of going through parts of the interactive system that is being evaluated, and (d) analysis and reporting of the problems identified.
### Choice of heuristic 
the most common is the Molich and Nielsen heuristics described above. This is a safe option. Typically, each of these heuristics is associated with a more extensive explanation or teaching material.

visibility of the system status concerns whether the user knows what an interactive system is currently doing

For instance, showing that the CAPS lock key is on.

However, heuristics that are customized for a particular use situation or user group can have better hit rate.

### Analysis
Based on the heuristics and the choice of system, an evaluator will have made a list of notes on the problems.

A couple of resources can help in the analysis of problems.
**Frequency** 
It is useful for an evaluator to assess how often a problem would occur for prospective users. One *commonly used scale separates :*
(a) rare 
(b) occasionally
(c) frequent

**Severity rating**
how serious a problem is for users

*One commonly used rating scale is* 
(1) Minor: the user is temporarily delayed. 
(2) Serious: the user is delayed significantly but can eventually complete the task. 
(3) Catastrophic: prevents the user from completing a task.
![](https://i.imgur.com/9WtJMGq.png)
**Persistence** 
This assessment concerns whether the problem is a one-off occurrence that users will learn to work around, or something that will bother them time and again.

**Cause**
What is the cause or reason for the problem?

**Redesign suggestion** (solution on the table)
This asks the evaluator to consider how the interactive system might be redesigned to avoid the problem
![|400](https://i.imgur.com/c9cki1R.png)
### The reliability of heuristic evaluation
One core reason for these issues is that evaluators, even experts, are imperfect as ‘signal detectors’.

• High efficiency: Some usability problems can be spotted with little effort and experience 

• Limited scope: Heuristics are limited to aspects of usability that can be attributed to visible parts of the UI. 

• High false positive and false negative rates: Many important problems are not found, and some problems are identified that are not problems. 

• No guarantees: The results cannot be trusted to be comprehensive, reliable (large variability), nor generalizability (except for most obvious usability problems) 

• High variability: Evaluators, even experienced, show drastically varying hit rates.
## Identification of human error potential
Human error identification (HEI) is a class of analytic evaluation methods for identifying the possibilities of human error in interaction.

One key difference from heuristic evaluation is that HEI is preceded by task analysis

In practice, this means that the goals and states of an interface are first identified. A user is then ’simulated’ going through the states toward a goal, while asking what kinds of errors might happen.

A central concept in HEI is state. At any given time, the interface can be in one state where it is ready to receive input from the user.

To utilize HEI, we should first enumerate all states of the UI. We then form a matrix showing possible transitions between states. We then label each sell to show if a transition is available: (1) legal, (-1) illegal (erroneous; should not be done by user), and (0) not available

This state matrix is now used as a basis of simulating users. Take a user persona and a particular task of that persona. Then start from the state in which the user would encounter the device. Then enumerate possible reasons why the user might take wrong action in that state.

HEI provides three main categories to this end, but in principle any cause of error can be used: 
1. User confuses the correct action with something else
2. User confuses the state of the machine 
3. User selects erroneously

![](https://i.imgur.com/3JiHUkj.png)
analysis exposed the following problems with a vending machine, which may be familiar to many of us: 
1. Not understanding what to do 
2. Selecting wrong ticket 
3. Selecting wrong station 
4. Selecting wrong zone 
5. Problems in inserting money 
6. Confusing mode 
7. Pressing wrong buttons 
8. Using a machine that is closed 
9. Confusing return from cancel 
10. Use a machine that is waiting

Comparing these with the ground truth dataset, the authors concluded that one evaluator using the method could identify more than 80% of real usability problems. this i bit better than heuristic evaluation 
## Cognitive walkthrough
builds on a theory of human cognition to propose how to evaluate the learnability of a design

Cognitive walkthrough is an analytical evaluation method based on mental simulation of the way users think.

In cognitive walkthrough, similarly, an artifact is inspected systematically, in a step-bystep manner, and evaluated against criteria. In this sense, it is similar to HEI. What makes the cognitive walk-through special is that evaluation criteria are related to thinking and cognition. The method relies on the evaluator simulating in his/her mind to determine whether a user might succeeds or fails in the interaction. The user is simulated in guessing and exploring how to use an interface. However, walkthroughs are not just any form of imagery, but follow systematic procedures and conceptual apparatuses

expose possible problems impairing the ease-ofuse and learnability of a system. The method is recommended for understanding how novice users may figure out how to use a system.

Its scope is different from other methods discussed in this chapter, which focus on user performance, errors, and usability problems.

Cognitive walkthrough as a method is straightforward but substantially more laborious than heuristic evaluation. The inputs to the method are 
(1) the user interface 
(2) a task scenario that tells what the users are supposed to accomplish
(3) assumptions about the users and the contexts of use, and 
(4) a sequence of actions that complete the tasks. 

Task analysis is needed to prepare point (4). In most cases, the analysis of subtask sequences suffice

predict a significant part of learnability-related problems.
### How to do a Cognitive Walkthrough?
In a walk-through session, tasks are demonstrated to a team in a step-by-step manner, attempting to explain, plausibly, how the user might solve four issues related to use: 

1. Will the user try to achieve the right effect? 
2. Will the user notice that the availability of the correct? 
3. Will the user associate the correct action with the intended effect? 
4. If the correct action is performed, will the user be aware that the task is progressing as intended? 

If a plausible explanation cannot be given, this is recorded as a critical issue
### A theory of how people learn via exploration
According to Polson and Lewis, people first establish goal structure. This goal structure associates sub-goals to the top-level goal.

A key part of the theory concerns the representation of a subgoal. A subgoal is a representation associated to (1) other subgoals, (2) actions, and (3) perceptual cues. Consider the sub-goal of turning on a stove as an example. This subgoal is associated to the top-level goal of making tea, as well as the previous and following subgoals (e.g., putting the kettle on the stove).

Lewis et al. [460] propose four design tactics for improving guessability: 
1. Make the repertory of available actions salient. 
2. Provide an obvious way to undo actions. 
3. Offer few alternatives. 
4. Require as few choices as possible.

## Keystroke-level modeling
a simple mathematical model of experienced users’ performance that predicts users’ task completion time of experienced users

it is a performance evaluation model.
### How to do a KLM analysis
KLM starts by analyzing user’s task to find the most likely way, or ways, of accomplishing it. This task performance is broken down according to three categories of operations: physical, mental, and system

Mental operations refer to events like recalling a command name or verifying that an answer is correct. 

System operation is system response time, the time spent waiting. These operations are counted and the times spent in each are estimated using guidelines and look-up tables. 

Task completion time (T) is then their linear sum:
$$
\begin{aligned}
& T=t_{K}\quad \text{ keystroking } \\
& +t_{P} \quad \text { pointing } \\
& +t_{H} \quad \text { homing } \\
& +t_{D} \quad \text { drawing } \\
& +t_{M} \quad \text { mental operation } \\
& +t_{R} \quad \text { system response } \\
&
\end{aligned}
$$

Keystroking is around .12 - 1.2 s, .28 for most users. An expert typist has an average keystroke time of 1.2 seconds, whereas someone with less exposure to keyboards has 1.2 s. 

Clicking a mouse button is 0.20 s. 

Pointing averages at 1.1 s, but with varying movement distances, should be determined by a Fitts’ law model. 

Homing is the act of moving the hands between the mouse and keyboard. It takes about .4 s. 

Mental operations are in the range of .6 - 1.35 s, but 1.2 s is recommended. 

Mental operations are required when initiating a task, making a strategy decision, recalling something from memory (e.g., password), finding something on the screen, thinking about what to do, or verifying the correctness of inputs. 

System response time must be measured and depends on the per case.

The procedure for KLM modeling includes eight steps: 
1. Choose one or many representative task scenarios. 
2. Specify the design to the point that keystroke-level actions can be listed for the scenarios. 
3. For each scenario, identify the most likely ways users will accomplish the tasks. 
4. List the keystroke-level actions and the physical operators involved in doing the task. 
5. If necessary, include wait operators for those those time when the user is waiting the system to respond. 
6. Insert mental operators for when user has to stop and think. 
7. Look up the standard execution time to each operator. 8. Sum up execution times for the operators. This is the estimated task completion time
### A Worked Example
An expert user is editing a document and wants to replace all words "might" with the word "will":
![|400](https://i.imgur.com/46xvVPv.png)

$$
\begin{aligned}
T= & t_K+t_P+t_H+t_M+t_R \\
= & (0.60+0.48+3 \times 0.20)+(3 \times 1.10)+ \\
& (5 \times 0.40)+(3 \times 1.20)+0.50 \\
= & 11.08
\end{aligned}
$$
the user spends almost one-quarter of the time just moving the hand between the mouse and the keyboard.
### Limits of KLM
Best practices in KLM modeling suggest that it is more important to get the type and number of operations right than to determine the order in which they occur. Moreover, very different interfaces paradigms should not be compared without identifying better values for M. For instance, command-language interfaces and GUIs have different requirements for recall, so using the single constant for both will bias the estimates.

KLM assumes expert performance, a user who is able to directly use the most efficient strategy and carries out tasks without error. In this respect it complements cognitive walkthrough that focuses on how people ’guess’ what to do. 

Second, KLM ignores flexibility in human activity.

Third, KLM ignores the variation in performance. It is known that there are dramatic inter- and intra-individual differences even in the lowest levels of actions, such as in button-pressing. However, KLM collapses that variability to a single-point estimate.
## Automated usability evaluation
where a yardstick for user interfaces is applied automatically to interactive systems.

Aalto User Interface Metrics [601] takes a web page as input and computes its accessibility, aesthetics, and support for accurate color perception, among others. However, it's scope is more limited than that offered by HEI, CW, and KLM


### Interactive Modeling Workbenches
CogTool is a modeling workbench that uses a version of GOMS for predicting how attention, motor control, and memory work during interaction [275, 382].

Generally, computational models are superior to KLM and cognitive walkthrough thanks to their ability to simulate cognitive states, strategies, and motor actions.
## Which Analytical Evaluation Method to Use?
no serious project should rely just on them

Blandford et al [81] conducted one of the most comprehensive comparisons of analytic methods so far. They compared eight methods in the case of a human–robot interaction task. They propose a few dimensions to consider when picking an analytical method:

**Scope** What kinds of usability problems should be found? 
**Suitability** What type of interaction and user group is in question?
**Reliability** What is the minimum reliability that should be achieved?
**External validity** How important is the transfer of findings to real use? 
**Efficiency** How much information is gained per unit of resource use? Resources here can refer to the work time of an expert evaluation, human participant etc. 
**Persuasiveness** How to communicate the results in a way that convinces the audience?

no single method offered superior coverage of problems, but rather each conquered its own ’niche’ in the space of usability problems

**heuristic evaluation** identified a broad range of issues, but was most unreliable. The interpretation of the heuristic (e.g., what is ’consistent’?) is left to the evaluator, producing large inter-rater variability.

**cognitive walkthrough** complemented other methods by exposing issues related to user misconceptions, consistent with the cognitive exploration theory

**cognitive models, especially GOMS and thereby KLM,** best support the identification of system-related problems, such as the lack of ’undo’, redundant operators, or long action sequences, as well as some problems in synchronizing users’ actions with that of the system.
## Summary
• Analytic evaluation relies on expert analyst systematically going through a design and procedurally checking system responses against some criteria. 

• Analytic methods have low reliability when applied outside of their scope or by inexperienced analysts. 

• There are analytic methods for covering different aspects of usability from performance to errors and learnability. Walkthrough methods are being developed to assess inclusiveness of a design against persona-based criteria. 

• Analytic methods are best utilized as cost-efficient complements in earlier parts of design; they are not a replacement for empirical evaluation methods.