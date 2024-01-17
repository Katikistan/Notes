# Data Representation and Cache
## Locality
## Stride
## row major vs column major
## Arithmetic
### IEEE FLOATING POINT
### TWOS COMPLEMENT
# Networking
## Applications lag
HTTP
	message format
	response format
HTTPS
web caching
## Transport lag
UDP
Packet switching vs circuit switching
Multiplexing and demultiplexing
TCP
	TCP communication diagrams
	Packet loss 
	WIndow size 
	Two way handshake (relliable data transerf
	Congestion control
client server
P2P
DNS
Socket programmingo way handshake (relliable data transerf
	Congestion control
client server
P2P
DNS
#### KR chap 3 p40
S. (398) figure 3.5.1 forklarer hvordan TCP congestion control virker

- a) slow start fra 0 til 6
- b) congestion avoidance ved 6 til 16 og ved 18 til 23
- c) det er et segment loss eftersom den ikke dropper helt til bunden
- d) der er et timeout den dropper helt til bunden så den laver slow start indtil den når halvdelen af den window size den havde før timeout
- e) man kan se slowstart stopper ved 32 window size og congestion avoidance starter derfor er threshold 32.
- f) den vil være halvdelen af hvad window size var før, den var 29 så den vil være 14 fordi den bliver rundet ned. 
- g) 
- h) den bliver fordoblet for hver transmission round er først 1, 2, 4 og så 8, derefter er der triple ack, derfor halvere den window size, det bliver derfor 4, den begynder fast recovery og congestion window bliver 4+3 * 1 = 7. den går i gang med fast recovery 
- i og j) tcp tahoe har ikke fast recovery (KR s. 300) og når den får triple ack eller timeout bliver cwnd bare 1 og den vil lave sætte threshold til halvdelen og lave slowstart regardless 

#### KR chap 4 p5
#### KR chap 4 p811100001 01111111 11111111 111
| Destination Address Range           | Link Interface |
| ----------------------------------- | -------------- |
| 11100000 00000000 00000000 00000000 |                |
| through                             | 0              |
| 11100000 00111111 11111111 11111111 |                |
|                                     |                |
| 11100000 01000000 00000000 00000000 |                |
| through                             | 1              |
| 11100000 01000000 11111111 11111111 |                |
|                                     |                |
| 11100000 01000001 00000000 00000000 |                |
| through                             | 2              |
| 11100001 01111111 11111111 11111111 |                |
| otherwise                                    | 3               |
- a) Provide a forwarding table that has five entries, uses longest prefix match-ing, and forwards packets to the correct link interfaces.
Her kigger jeg på de adresses der skal gå iggennem 0 matcher på 10 bits
*11100000 00***000000 00000000** 
*11100000 00***111111 11111111 11111111**
her kan man se at de matcher op til 10 bit derfor kan vi bruge de 10 bits som et prefix : 11100000 . 00, hvis vi har en adresse der har et match med det prefix skal er den i range mellem de 2 adresser den har en value der ligger imellem de 2 og skal derfor igennem 0.

11100000 01000000 og 
11100000 01000001 matcher, derfor er man nødt til at medtage de 16 bits i prefix tabellen

specielt er
*1110000*0 01000001 00000000 
*1110000*1 01111111 11111111 11111111
de matcher op til 7. bit, men efter det i *1110000*1 0111... kan 0'tallet godt være 1 og det ville faktisk gøre tallet større end den range vi vil have derfor er vi nødt til at have flere cases, der er et tilfælde hvor prefixet matcher og efterfulgt er 10 og det ville være inde for range derfor skal det mappe til 2, men hvis det er 11 vil det være ude for rangen og derfor skal det linke til 3, 01 ville være inde for range, det behøver vi ikke speciel case til

| Prefix match  | Interface |
| ------------- | --------- |
| 11100000 . 00 | 0         |
| 11100000 01000000 | 1         |
| 1110000       | 2         |
| 11100001 1    | 3         |
| otherwise              | 3          |
man kunne også tilføje flere cases for otherwise

- b) Describe how your forwarding table determines the appropriate link inter-face for datagrams with destination addresses:
		11001000 10010001 01010001 01010101 <- 5th entry : link 3 
		11100001 01000000 11000011 00111100 <- 3rd entry : link 2
		11100001 10000000 00010001 01110111 <- 4th entry : link 3
den kigger på om der er match med nogle prefixes: 11001000 matcher ikke med nogle prefixes og bliver derfor linket til 3 

## Netværks lag
### Routing
### Forwarding
### Distance Vector Algorithm
### routing table
### Count to Infinity problem
### switching
### Packet scheduling
### IPv4 structure and adressing
### Subnets
## Security
### non cryptographic hashing function
asymmetric, public-key encryption
man in the middle
playback

# Computer arkitektur
## Pipelining
## Full fowarding
### OUT OF ORDER EXECUTION
det tager sådan en 1 uge fuld fokus at blive god og det giver kun 4% på eksamen så ikke rigtigt worth at smide en uges oplæsning på 4%