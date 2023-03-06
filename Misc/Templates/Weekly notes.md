---
<%*
let theweek;
const task = "#task"
const file_type = "weekly"
if (file_type == "weekly") {
    theweek = await tp.system.prompt("Which week?",tp.date.now("W",7))
}
-%>
week: <% theweek %>
year: <% tp.date.now("YYYY") %>
semester: 2
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
# SU
## Assigned reading
<% task %>
 - [ ] [[SU - Reading for week <% theweek %>#Chapter]]
## Exercises 
### Tuesday 
### Friday
## Assignment:

## Notes from this week
```dataview
TABLE type, status, tags, summary
where course = "SU" and week = <% theweek %>
```

# Inter
## Assigned reading
<% task %>
 - [ ] [[Inter - Reading for week <% theweek %>#Chapter]]

## Exercises 
### Monday
### Wednesday 
## Assignment:

## Notes from this week
```dataview
TABLE type, status, tags, summary
where course = "Inter" and week = <% theweek %>
```
<% tp.file.rename ("Uge " + theweek +" - " + tp.date.now("YYYY")) %>
