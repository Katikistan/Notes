---
date: 23-10-23
day: man
week: 43
year: 2023
type: Lecture
course: CompSys
status: 
semester: 2
tags:
  - Networking
Summary: ""
---
##### Weekly note
[[Uge 43 - 2023]]

# Introduction to networking
![](https://i.imgur.com/R4HodHr.png)


## Protocols
Man sender en request for at få information og får det tilbage, men man skal sørge for at man følger en standard for at senderen af informationen kan forstå hvad man beder om.

Hvis du spørger om tiden i danmark, venter man og får et response, men hvis man begynder at snakke fransk vil man ikke få et svar. 

We agree on a certain syntax and language 


"proctols are always a bit shit"  (- David)

There are always some tradeoffs

You need to know how many bytes to read, but when getting send things from the internet we don't know therefore we need to specify how many bytes we are sending, this is what a protocol is used for

This IPV4 proctol is a proctol used to structure a packet, here we see a 20 byte header caring information on the payload. 

Without this standardisation we have no idea what we are recieving 
![](https://i.imgur.com/Id3YUhV.png)
another example HTTP:
This is when you want to get an internet page
![](https://i.imgur.com/vACYPZx.png)
## Layers
![](https://i.imgur.com/M6Sly2D.png)
![](https://i.imgur.com/fuIEqj2.png)
![](https://i.imgur.com/NJRwjUw.png)
# Resource allocation
Dividing scarce resources among competing parties

Memory, link bandwidth, wireless spectrum, paths
## Circuit switching
![](https://i.imgur.com/Cn5GzNf.png)
![](https://i.imgur.com/7o3J9oL.png)
![](https://i.imgur.com/G6anfYH.png)

## Packets and packet switching
![](https://i.imgur.com/sRLRfeM.png)
Port foward: man venter til at man har fået hele pakken før den sender den videre til modtageren.
![](https://i.imgur.com/uwyx2Lq.png)
Man reserver kun pladsen når man bruger den, modsat circut switching hvor man reserverer under hele sessionen.

Forstil dig at man står i kø på maccen, hvis man bruger packet switching står man ikke i køen når man overvejer ens bestilling, man står kun i køen når man bestiller. Circuit switching står man i køen imens man overvejer ens bestilling også hvilket resulterer i kødannelse.
![](https://i.imgur.com/Mwvjvtz.png)

![](https://i.imgur.com/PRrXa4W.png)

Den information man sender afsted ud i netværket, 


# Delay
## Packet loss and queing delay
packets queue in router buffers
• packet arrival rate to link exceeds output link
capacity
• packets queue, wait for turn
![](https://i.imgur.com/jSMT8No.png)


![](https://i.imgur.com/Bp9cfpN.png)
Transmission delay comes from the actual delay it takes to deliver information through the physical cables and such. Were propagation delay describes the delay that comes from delivering through the system.

![](https://i.imgur.com/vrjfydJ.png)
Den her pakke man vil sende ud i internettet vil ryge ind i en queue, det tager tid at sætte det ind i queuen og hvis der ikke plads i queuen skal noget enten ud af queuen eller får din pakke ikke lov til at komme ind i køen, either way risikere man at en pakke bliver tabt. 
![](https://i.imgur.com/hVU7OKT.png)
# Summary
• Internet is a network of networks
	• Inter-operability, power to the edges
• Key concepts in networking
	• Protocols, layers, resource allocation, and naming
• Circuit switching
	• FDM (Frequency-division multiplexing)
	• TDM (Time-division multiplexing)
• Packet switching
	• Store-and-forward (can only send one piece information at time, will wait to the packet is fully recieved before sending it)
	• Delay, loss, throughput
# Multiplexing
In [telecommunications](https://en.wikipedia.org/wiki/Telecommunications "Telecommunications") and [computer networking](https://en.wikipedia.org/wiki/Computer_network "Computer network"), **multiplexing** (sometimes contracted to **muxing**) is a method by which multiple [analog](https://en.wikipedia.org/wiki/Analog_signal "Analog signal") or [digital signals](https://en.wikipedia.org/wiki/Digital_signal "Digital signal") are combined into one signal over a [shared medium](https://en.wikipedia.org/wiki/Shared_medium "Shared medium"). The aim is to share a scarce resource – a physical [transmission medium](https://en.wikipedia.org/wiki/Transmission_medium "Transmission medium").[_[citation needed](https://en.wikipedia.org/wiki/Wikipedia:Citation_needed "Wikipedia:Citation needed")_] For example, in telecommunications, several [telephone calls](https://en.wikipedia.org/wiki/Telephone_call "Telephone call") may be carried using one wire. Multiplexing originated in [telegraphy](https://en.wikipedia.org/wiki/Multiplexing#Telegraphy) in the 1870s, and is now widely applied in communications. In [telephony](https://en.wikipedia.org/wiki/Multiplexing#Telephony), [George Owen Squier](https://en.wikipedia.org/wiki/George_Owen_Squier "George Owen Squier") is credited with the development of telephone carrier multiplexing in 1910.

The multiplexed signal is transmitted over a communication channel such as a cable. The multiplexing divides the capacity of the communication channel into several logical channels, one for each message signal or data stream to be transferred. A reverse process, known as demultiplexing, extracts the original channels on the receiver end.
![](https://i.imgur.com/gw5Y47X.png)
