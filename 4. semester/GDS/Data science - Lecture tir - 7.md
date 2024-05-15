---
date: 13-02-24
day: tir
week: 7
year: 2024
type: Lecture
course: Data science
status: 
semester: 4
tags:
Summary: ""
---
##### Weekly note
[[Uge 7 - 2024]]

# Regular experssions
| $\mathrm{a}$ | Match 'a' (normal text) |  |
| :--- | :--- | ---- |
| $\mathrm{ab}$ | Match 'a' followed by 'b' (normal text) |  |
| $[\mathrm{abc}]$ | Character class. Match one character: <br> either 'a' or 'b' or 'c' |  |
| $\left[{ }^{\wedge} a b c\right]$ | Character class. Match one character: <br> anything except 'a' or 'b' or 'c' |  |
| $[\mathrm{a}-\mathrm{z}]$ | Character class. Match one character: <br> anything between 'a' and 'z' |  |
| ^ and $\$$ | Matches beginning and end of line |  |
| $\backslash A$ and $\backslash Z$ | Matches beginning and end of entire string |  |
| $*$ | zero or more times |  |
| + | one or more times |  |
| $?$ | zero or one time |  |
| $\{n\}$ | $n$ times |  |
| $\{n\}$, | at least $n$ times |  |
| $\{, n\}$ | at most $n$ times |  |
| $\{n, m\}$ | between $n$ and $m$ times |  |
| (expr) | Group an expression |  |
| (expr1 \| <br> expr2) | Match either expr1 or expr2 |  |
| $\backslash$. | Matches a literal '.' (escaping) |  |
| $\backslash ?$ | Matches a literal '?' (escaping) |  |
| ^ and $\$$ | Matches beginning and end of line |  |
| $\backslash \mathrm{A}$ and $\backslash Z$ | Matches beginning and end of entire <br> string |  |
| $\backslash$ d | digit character | $[0-9]$ |
| $\backslash D$ | non-digit character | $[\wedge 0-9]$ |
| $\backslash w$ | alphanumerical character | $\left[a-z A-Z 0-9 \_\right]$ |
| $\backslash W$ | non-alphanumerical character | $\left[\wedge a-z A-Z 0-9 \_\right]$ |
| $\backslash s$ | white-space character | $[\backslash t \backslash n \backslash r \backslash f \backslash v]$ |
| $\backslash S$ | non-white-space character | $[\wedge \backslash t \backslash n \backslash r \backslash f \backslash v]$ |


![](https://i.imgur.com/24MhhT0.png)
![](https://i.imgur.com/O2UzQeW.png)
![](https://i.imgur.com/Z4MCvso.png)
![](https://i.imgur.com/Yn5BCzy.png)

A lexical analyser, also called a lexer or scanner, will as input take a string of individual letters and divide this string into a sequence of classified tokens. Additionally, it will filter out whatever separates the tokens (the so-called white-space), i.e., lay-out characters (spaces, newlines etc.) and comments.