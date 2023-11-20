---
date: 25-10-23
day: ons
week: 43
year: 2023
type: Lecture
course: CompSys
status: 
semester: 2
tags:
  - Networking
Summary: Sockets
---
##### Weekly note
[[Uge 43 - 2023]]

# Reading files
When reading bytes locally, it isnt nessacary to check if the bytes you asked to be read is actually read, however when doing network programming we cant be sure that all bytes have been read. 
# A Programmer’s View of the Internet
Hosts are mapped to a set of 32-bit IP addresses
- 128.2.203.179

The set of IP addresses is mapped to a set of identifiers called Internet domain names
- 128.2.217.3 is mapped to www.cs.cmu.edu

A process on one Internet host can communicate with a process on another Internet host over a connection

This is very similar to the pipes we briefly introduced in the concurrency lectures.
# Global IP Internet (upper case)
IP (Internet Protocol) :

Provides basic naming scheme and unreliable delivery capability of packets (datagrams) from host-to-host
UDP (Unreliable Datagram Protocol)
- Uses IP to provide unreliable datagram delivery fromprocess-to-process
TCP (Transmission Control Protocol)
- Uses IP to provide reliable byte streams from process-to-process over connections
- Accessed via a mix of Unix file I/O and functions from the sockets interface

32-bit IP addresses are stored in an address struct
- IP addresses are always stored in memory in network byte order (big-endian byte order)
True in general for any integer transferred in a packet header from one machine to another.

E.g., the port number used to identify an Internet connection
# Ip adresses
![](https://i.imgur.com/QLddCoC.png)
# Dotted Decimal Notation
![](https://i.imgur.com/E7kJui5.png)

Its always a host to host connections, even thoug it seems like you are connected to multiple people though 1 connection, but you have multiple connections.
![](https://i.imgur.com/Wvshdjq.png)

# Sockets
![](https://i.imgur.com/tN0EuXJ.png)

![](https://i.imgur.com/HCkKpQx.png)
![](https://i.imgur.com/WjBvoA4.png)

There are many different address domains, each with a corresponding struct.

See link for complete list: https://man7.org/linux/man-pages/man2/socket.2.html

In this course we will stick with IPv4 

![](https://i.imgur.com/4yjBjM4.png)
