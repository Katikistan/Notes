---
<%*
let theweek;
const task = "#task"
const file_type = "weekly"
if (file_type == "weekly") {
    theweek = await tp.system.prompt("Which week?",tp.date.now("W"))
}
-%>
week: <% theweek %>
year: <% tp.date.now("YYYY") %>
semester: 4
block: 3
type: weekly 
tags: 
summary: ""
---

# MLA
## Exercises 

## Assignment:

## Notes from this week
```dataview
TABLE type, status, tags, summary
where course = "MLA" and week = <% theweek %>
```
<% tp.file.rename ("Uge " + theweek +" - " + tp.date.now("YYYY")) %>
