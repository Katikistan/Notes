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

# Linær algebra
## Assigned reading
<% task %>
 - [ ] [[LinAlgDat - Reading for week <% theweek %>#Chapter]]

## Exercises 
### day 1
### day 2
## Assignment:

## Notes from this week
```dataview
TABLE type, status, summary
where course = "LinAlgDat" and week = <% theweek %>
```
<% tp.file.rename ("Uge " + theweek +" - " + tp.date.now("YYYY")) %>
