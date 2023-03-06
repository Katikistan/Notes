---
<%*
const task = "#task"
-%>
alias: <% tp.date.now("DD-MM-YY") %>
date: <% tp.date.now("DD-MM-YY") %>
day: <% tp.date.now("ddd") %>
week: <% tp.date.now("W") %>
type: daily
tags: 
summary: ""
---
[[Uge <% tp.date.now("W - YYYY") %>]]
<% tp.file.rename (tp.date.now("DD - MM - YY")) %>
#
## Tasks for the day 
<% task %>
- [ ] Meditate
- [ ] Stretch 
