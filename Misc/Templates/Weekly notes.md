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
# Daily notes
```dataview
TABLE day, summary 
where type = "daily" and week = <% theweek %>
```
# AD
## Exercises 
### Monday
### Weddensday
## Assignment:

## Notes from this week
```dataview
TABLE type, status, tags, summary
where course = "AD" and week = <% theweek %>
```

# Data science
## Exercises 
### Tuesday
### Thursday
## Assignment:

## Notes from this week
```dataview
TABLE type, status, summary
where course = "Data science" and week = <% theweek %>
```
<% tp.file.rename ("Uge " + theweek +" - " + tp.date.now("YYYY")) %>
