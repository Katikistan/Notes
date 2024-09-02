---
<%*
let title; 
let dato;
let course; 
let stat;
const _course = "MLA";
course = "MLA"
const file_type = await tp.system.suggester(
    ["Lecture","Reading","Wiki"],
    ["Lecture","Reading","Wiki"]
);
if (file_type == "Lecture") {
    dato = tp.date.now("W")
    stat = ""
    title = _course + " - " + "Lecture " + tp.date.now("ddd - W");
}
if (file_type == "Reading") {
    dato = await tp.system.prompt("What week?", tp.date.now("W"))
    stat = ""
    title = _course + " - " + "Reading for week " + dato;
}
if (file_type == "Wiki") {
    dato = await tp.system.prompt("What week?", tp.date.now("W"))
    stat = "open"
    title = "WIKI uge " + dato + " - " + tp.date.now("ddd - HH-MM-SS - (YYYY)");
}
-%>
date: <% tp.date.now("DD-MM-YY") %>
day: <% tp.date.now("ddd") %>
week: <% dato %>
year: <% tp.date.now("YYYY") %>
type: <% file_type %>
course: <% course %>
status: <% stat %>
semester: 5
tags:
Summary: ""
---
##### Weekly note
[[Uge <% dato %> - <% tp.date.now("YYYY") %>]]
<% tp.file.rename (title) %>
# 