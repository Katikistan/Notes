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
# COMPSYS
## Assigned reading
<% task %>
 - [ ] [[CompSys - Reading for week <% theweek %>#Chapter]]
## Exercises 
### Monday
### Weddensday
## Assignment:

## Notes from this week
```dataview
TABLE type, status, tags, summary
where course = "CompSys" and week = <% theweek %>
```

# MatIntro
## Assigned reading
<% task %>
 - [ ] [[MatIntro - Reading for week <% theweek %>#Chapter]]

## Exercises 
### Tuesday
### Thursday
## Assignment:

## Notes from this week
```dataview
TABLE type, status, summary
where course = "MatIntro" and week = <% theweek %>
```
<% tp.file.rename ("Uge " + theweek +" - " + tp.date.now("YYYY")) %>
