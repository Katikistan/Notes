---
date: 03-01-24
day: ons
week: 1
year: 2024
type: Lecture
course: CompSys
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 1 - 2024]]

#  Forwarding  & Routing 
Det er to vigtige ting ved netværks laget, det er vigtigt at kende forskellen:
![[Pasted image 20240103102326.png]]
Rotuing: planlægge en tur
forwarding: følge en rute som man har planlagt

IP lover kun en best effort bit rate
![[Pasted image 20240103102508.png]]
Garantier fås ved de højere lag, såsom transport eller applications laget, f.eks kan tcp håndtere packet loss og derfor behøver ip ikke håndtere det. 
# IP pakke struktur (IPv4)
	![[Pasted image 20240103102833.png]]
**IP Header: Version, Length, ToS**:

**IP Version number (4 bits)**
	• Necessary to know what other fields to expect: how to parse?
	• “4” (for IPv4), “6” (for IPv6)
**Header length (4 bits)**
	• # of 32-bit words in header
	• Typically “5” for 20-byte IPv4 header, more if “IP options”
**Type-of-Service (8 bits)**
	• Allow packets to be treated differently based on needs
	• E.g., low delay for audio, high b/w for bulk transfer
**• Total length (16 bits)**
	• # of bytes in the packet
	• Max size is 63,535 bytes (216 -1)
	• Links may have harder limits: Ethernet “Max Transmission Unit” (MTU) commonly 1500 bytes
**• Fragmentation information (32 bits)**
	• Packet identifier, flags, and fragment offset
	• Split large IP packet into fragments if link cannot handle size
**• Time-To-Live (8 bits)**
	• Helps identify packets stuck in forwarding loops
	• … and eventually discard from network
**Potential robustness problem**
	• Forwarding loops can cause packets to cycle forever
	• Confusing if the packet arrives much later
	• Time-to-live field in packet header
		• TTL field decremented by each router on path
		• Packet is discarded when TTL field reaches 0...
		• ...and “time exceeded” message (ICMP) sent to source
**• 8 bit protocol (8 bits)**
fortæller hvilke portocol der bruges:
![[Pasted image 20240103103458.png]]

# IP Header: To and From Addresses
**• Two IP addresses**
	• Source and destination (32 bits each)
**• Destination address**
	• Unique identifier for receiving host
	• Allows each node to make forwarding decisions
**• Source address**
	• Unique identifier for sending host
	• Enables recipient to send a reply back to source
![[Pasted image 20240103105029.png]]
## IPv6
128-bit addresses

No fragmentation, no checksum, options optional

Similar CIDR methodology, but 128-bit instead of
32-bit addresses are used

**Address notation**
8 groups of 4 hexadecimal digits (16-bits in a group)
	2001:0db8:85a3:0000:0000:8a2e:0370:7334

Leading zeros omitted and leftmost string of zero groups
compressed to ::

2001:db8:85a3::8a2e:370:7334
## Spoofing
![[Pasted image 20240103103903.png]]
# IP Adresse
unique 32-bit number

Identifies an interface (on a host, on a router, …)

Represented in dotted-quad notation (128.120....)
![[Pasted image 20240103104027.png]]

# Grouping
The Internet is an “inter-network”
• Used to connect networks together, not hosts
• Needs way to address a network (i.e., group of hosts)
![[Pasted image 20240103104211.png]]
Suppose hosts had arbitrary addresses
• Then every router would need a lot of information
• …to know how to direct packets toward every host

Have a scalability problem?
	Introduce hierarchy…
![[Pasted image 20240103104459.png]]
![[Pasted image 20240103104601.png]]
# Subnet
Recipe
	• to determine the subnets, detach each interface from its host or router, creating islands of isolated networks
	• each isolated network is called a subnet.
# IP calculations
Consider the following IP address of a host: 220.224.30.82/24