# The 5 Different layers shortly described
The OSI (Open Systems Interconnection) model is a framework that is used to understand and describe the different layers of a computer network. The OSI model consists of 7 different layers, each with its own specific functions and responsibilities.
### Application Layer
The highest layer of the OSI model, the application layer is
responsible for providing the interface between the network and the applications that run on it. This layer is responsible for providing services to the user such as email, file transfer(HTTP), and web access.

This layer interacts directly with the application and end-user, and
provides services such as email, file transfer, and web access. Protocols that apply to this layer include HTTP (Hypertext Transfer Protocol), FTP (File Transfer Protocol), and SMTP (Simple Mail Transfer Protocol).
### Transport Layer
The transport layer is responsible for providing end-to-end
communication between devices on the network. It is responsible for providing reliable communication, flow control, and error recovery.

This layer provides end-to-end communication between applications. Protocols that apply to this layer include TCP (Transmission Control Protocol) and UDP (User Datagram Protocol).
### Network Layer
The network layer is responsible for providing routing and switching
services. It is responsible for determining the best path for data to travel from one device to another and for managing the flow of data across the network.

This layer is responsible for routing and forwarding packets through a network. Protocols that apply to this layer include IP (Internet Protocol) and ICMP (Internet Control Message Protocol).
### Link Layer
The link layer is responsible for providing communication between
devices on the same network segment. It is responsible for providing services such as error detection, flow control, and addressing. 

This layer provides a reliable link between devices on a network. Protocols that apply to this layer include MAC (Media Access Control) and LLC (Logical Link Control).

### Physical Layer 
The lowest layer of the OSI model, the physical layer is responsible for providing the physical connection between devices on the network. This layer is responsible for the transmission of bits over the physical medium such as copper or fiber-optic cables.

This layer deals with the physical connection between devices, such as cables and switches. Protocols that apply to this layer include Ethernet and Wi-Fi.
# Network core
## CDN
Content Distribution Networks (CDN s) are a system of distributed servers that are deployed in multiple data centers around the world. The goal of a CDN is to provide faster delivery of content to users by caching a copy of the content on servers that are closer to the user's location.

CDN s can be used to speed up the delivery of a wide variety of content, including web pages, images, videos, audio and video streaming, software downloads and more. They work by intercepting requests for content from users and redirecting them to the nearest server that has a cached copy of the content. This reduces the distance that the data needs to travel, which can result in faster delivery times.
## CDN and P2P
CDN vs. Peer-to-peer:
A Content Delivery Network (CDN) is a system of distributed servers that are used to deliver web content to users based on their geographic location. The goal of a CDN is to reduce latency and improve the performance of web content delivery. This is
accomplished by caching frequently requested content on servers located in strategic locations around the world, so that users can access the content from a server that is geographically closer to them.

Peer-to-peer (P2P) is a decentralized type of network, where each node (peer) acts as both a client and a server. In a P2P network, files and other resources are shared directly between users, rather than being stored on a central server.

The main difference between CDN and P2P is the way content is delivered. CDN uses a centralized system where content is stored on servers that are strategically placed, while P2P uses a decentralized system where content is shared directly between
users. CDN is typically used for delivering static content such as images and videos, while P2P is typically used for sharing files such as music and movies. CDN is mainly used by large companies and websites with high traffic, while P2P is mainly used by
smaller groups of people for sharing files among themselves.

## Packet switching
To send a message from a source end system to a destination end
system, the source breaks long messages into smaller chunks of data known as packets. Between source and destination, each packet travels through communication links and packet switches (for which there are two predominant types, routers and link-layer switches). Packets are transmitted over each communication link at a rate equal to the full transmission rate of the link. So, if a source end system or a packet switch is sending a packet of L bits over a link with transmission rate R bits/sec, then the time to transmit the packet is L / R seconds.
![[Pasted image 20240121165741.png]]
Store-and-forward transmission means that the packet switch must receive the entire packet before it can begin to transmit the first bit of the packet onto the outbound link.

in addition to the store-and-forward delays, packets
suffer output buffer queuing delays.

an arriving packet may find that the buffer is completely full with other packets waiting for transmission. In this case, packet loss will occur—either the arriving packet or one of the already-queued packets will be dropped.
## Delay 
**Processing Delay**
The time required to examine the packet’s header and determine where to direct the packet is part of the processing delay. The processing delay can also include other factors, such as the time needed to check for bit-level errors in the packet that occurred in transmitting the packet’s bits from the upstream node to router A.

**Queuing Delay**
At the queue, the packet experiences a queuing delay as it waits to be transmitted onto the link. The length of the queuing delay of a specific packet will depend on the number of earlier-arriving packets that are queued and waiting for transmission onto
the link. If the queue is empty and no other packet is currently being transmitted, then our packet’s queuing delay will be zero. On the other hand, if the traffic is heavy and many other packets are also waiting to be transmitted, the queuing delay will be long.

**Transmission Delay**
Assuming that packets are transmitted in a first-come-first-served manner, as is common in packet-switched networks, our packet can be transmitted only after all the packets that have arrived before it have been transmitted. 

Denote the length of the packet by L bits and denote the transmission rate of the link from router A to router B by R bits/sec. For example, for a 10 Mbps Ethernet link, the rate is R = 10 Mbps;
for a 100 Mbps Ethernet link, the rate is R = 100 Mbps. The transmission delay is L/R. This is the amount of time required to push (that is, transmit) all of the packet’s bits into the link.

**Propagation Delay**
Once a bit is pushed into the link, it needs to propagate to router B. The time required to propagate from the beginning of the link to router B is the propagation delay. The bit propagates at the propagation speed of the link. The propagation speed depends
on the physical medium of the link (that is, fiber optics, twisted-pair copper wire, and so on).
**Propagation Delay vs Transmission Delay**
The transmission delay is the amount of time required
for the router to push out the packet; it is a function of the packet’s length and the transmission rate of the link, but has nothing to do with the distance between the two routers. The propagation delay, on the other hand, is the time it takes a bit to propagate from one router to the next; it is a function of the distance between the two routers, but has nothing to do with the packet’s length or the transmission rate of the link.
**Nodal delay**
$$
d_{\text {nodal }}=d_{\text {proc }}+d_{\text {queue }}+d_{\text {trans }}+d_{\text {prop }}
$$
## Throughput
In addition to delay and packet loss, another critical performance measure in computer networks is end-to-end throughput. To define throughput, consider transferring a large file from Host A to Host B across a computer network. This transfer might be, for example, a large video clip from one computer to another. The instantaneous throughput at any instant of time is the rate (in bits/sec) at which Host B is receiving the file.
## Circuit switching
In circuit-switched networks, the resources needed along a path (buffers, link transmission rate) to provide for communication between the end systems are reserved for the duration of the communication session between the end systems.

When the network establishes the circuit, it also
reserves a constant transmission rate in the network’s links
# Application layer
## HTTP
![[Pasted image 20240121133223.png]]
![[Pasted image 20240121133259.png]]

Get, POST, HEAD, PUT, and DELETE
### GET
The GET method is used when the browser requests an object, with the requested object identified in the URL field.
### Host
The header line Host: www.someschool.edu specifies the host on which the object resides.
### Connection
By including the Connection: close header line, the browser is telling the server that it doesn’t want to bother with persistent connection
### User-agent
The User-agent: header line specifies the user agent, that
is, the browser type that is making the request to the server
### Accept-language
the Accept-language: header indicates that the user prefers to receive a French version of the object, if such an object exists on the server; otherwise, the server should send its default version.

### POST
An HTTP client often uses the POST method when the user fills out a form—for example, when a user provides search words to a search engine. With a POST message, the user is still requesting a Web page from the server, but the specific contents of the Web page depend on what the user entered into the form fields.

### HEAD
When a server receives a request with the HEAD method, it responds with an HTTP message but it leaves out the requested object. Application developers often use the HEAD method for debugging.
### PUT
The PUT method is often used in conjunction with Web publishing tools. It allows a user to upload an object to a specific path (directory) on a specific Web server. The PUT method is also used by applications that need to upload objects to Web servers. The 
### DELETE
DELETE method allows a user, or an application, to delete an
object on a Web server.

### Common status codes
- *200 OK:* Request succeeded and the information is returned in the response.
- *301 Moved Permanently:* Requested object has been permanently moved; the new URL is specified in Location: header of the response message. The client software will automatically retrieve the new URL.
- *400 Bad Request:* This is a generic error code indicating that the request could not be understood by the server.
- *404 Not Found:* The requested document does not exist on this server.
- *505 HTTP Version Not Supported:* The requested HTTP protocol version is not supported by the server.

## Persistent vs non-persistent
should each request/response pair be sent over a separate TCP connection, or should all of the requests and their corresponding responses be sent over the same TCP connection? **non-persistent connections**; and in the latter approach, **persistent connections**.

HTTP is said to be a stateless protocol. We also
remark that the Web uses the client-server application architecture

### Non persistent
1. The HTTP client process initiates a TCP connection to the server www.someSchool.edu on port number 80, which is the default port number for HTTP. Associated with the TCP connection, there will be a socket at the client and a socket at the server.
2. The HTTP client sends an HTTP request message to the server via its socket. The request message includes the path name /someDepartment/home.index.
3. The HTTP server process receives the request message via its socket, retrieves the object /someDepartment/home.index from its storage (RAM or disk), encapsulates the object in an HTTP response message, and sends the response message to the client via its socket.
4. The HTTP server process tells TCP to close the TCP connection. (But TCP doesn’t actually terminate the connection until it knows for sure that the client has received the response message intact.)

### Persistent:
Non-persistent connections have some shortcomings. First, a brand-new connection must be established and maintained for each requested object. For each of these connections, TCP buffers must be allocated and TCP variables must be kept in both the client and server. This can place a significant burden on the Web server, which may be serving requests from hundreds of different clients simultaneously.

With HTTP/1.1 persistent connections, the server leaves the TCP connection open after sending a response. The default mode of HTTP uses persistent connections with pipelining.


an HTTP server is stateless, but often desirable for a Web site to identify users: Cookies. allow sites to keep track of users
![[Pasted image 20240121134742.png]]
including in the HTTP response a Set-cookie: header, which contains the identification number: Set-cookie: 1678

## Web cache
A Web cache—also called a proxy server—is a network entity that satisfies HTTP requests on the behalf of an origin Web server. The Web cache has its own disk storage and keeps copies of recently requested objects in this storage.
![[Pasted image 20240121134901.png]]
## HTTP2
The primary goals for HTTP/2 are to reduce perceived latency by enabling request and response multiplexing over a single TCP connection, provide request prioritization and server push, and provide efficient compression of HTTP header fields. HTTP/2
does not change HTTP methods, status codes, URLs, or header fields. Instead, HTTP/2 changes how the data is formatted and transported between the client and server.

developers of Web browsers quickly discovered that sending all the objects in a Web page over a single TCP connection(HTTP1) has a Head of Line (HOL) blocking problem (side 144).

One of the primary goals of HTTP/2 is to get rid of (or at least reduce the number of) parallel TCP connections for transporting a single Web page. This not onlyreduces the number of sockets that 
need to be open and maintained at servers, but also allows TCP congestion control to operate as intended.
# Transport layer
## UDP
![[Pasted image 20240121174044.png|250]]
One way data transfer, dosent guarantee delivery, since there are no handshaking. no congestion or flow control

Includes a checksum, but no way of knowing if packets are in correct order or lost. No retransmit. 

UDP is typically used for applications that do not require a reliable, ordered delivery of data. This means that it's not good for something like video streaming or gaming. 
## TCP
### Structure of TCP
**The 32-bit sequence number field** and the **32-bit acknowledgment number** field are used by the TCP sender and receiver in implementing a reliable data transfer service.

**The 16-bit receive window field** is used for flow control. Used to indicate the number of bytes that a receiver is willing to accept.¨

**The 4-bit header length field** specifies the length of the TCP header in 32-bit words. The TCP header can be of variable length due to the TCP options field.

**The optional and variable-length options field** is used when a sender and receiver negotiate the maximum segment size (MSS) or as a window scaling factor for use in high-speed networks.

**The flag field contains 6 bits**. The ACK bit is used to indicate that the value carried in the acknowledgment field is valid; that is, the segment contains an acknowledgment for a segment that has been successfully received. The RST, SYN, and FIN bits are used for connection setup and teardown
![[Pasted image 20240121160906.png]]
### Connection-oriented vs Connectionless
TCP is a connection-oriented protocol, which means that a connection must be established between the sender and receiver before any data can be sent. UDP, on the other hand, is connectionless, which means that data can be sent without establishing a connection first.
### Error checking
TCP has error checking and correction mechanisms built in to
ensure data integrity. UDP has minimal error checking, and any errors must be handled at the application level.

TCP has more overhead than UDP because it establishes and maintains connections, performs error checking, and ensures data integrity. This can make TCP slower than UDP for some applications.
![[Pasted image 20240121161354.png]]
### Fast Retransmit
One of the problems with timeout-triggered retransmissions is that the timeout period can be relatively long. When a segment is lost, this long timeout period forces the sender to delay resending the lost packet, thereby increasing the end-to-end delay. Fortunately, the sender can often detect packet loss well before the timeout event occurs by noting so-called duplicate ACKs. A duplicate ACK is an ACK that reacknowledges a segment for which the sender has already received an earlier acknowledgment.
![[Pasted image 20240121161630.png]]

### Is TCP a GBN or an SR protocol?
TCP acknowledg-ments are cumulative and correctly received but out-of-order segments are not individually ACKed by the receiver. TCP looks a lot like a GBN-style protocol. But there are some striking differences between TCP and Go-Back-N. Many TCP implementations will buffer correctly received but out-of-order
segments
#### *example:*
the sender sends a sequence of segments 1, 2, . . . , N, and all of the segments arrive in order without error at the receiver the acknowledgment for packet n < N gets lost, but the remaining N - 1 acknowledgments arrive at the sender before their respective timeouts. GBN would retransmit not only packet n, but also all of the subsequent packets n + 1, n + 2, . . . , N. TCP, on the other hand, would retransmit at most one segment, namely, segment n. Moreover, TCP would not even retransmit segment n if the acknowledgment for segment n + 1 arrived before the timeout for segment n.
### Transmission rate for TCP --------- :)
### Bandwidth for TCP --------- :)

### Use case
TCP is typically used for applications that require a reliable, ordered delivery of data, such as web browsing, email, and file transfer. ordered delivery of data, such as streaming video and audio, online gaming, and DNS queries.
has reliable data transfer.

## Multiplexing and Demultiplexing
Now let’s consider how a receiving host directs an incoming transport-layer segment to the appropriate socket. Each transport-layer segment has a set of fields in the segment for this purpose. At the receiving end, the transport layer examines these fields to identify the receiving socket and then directs the segment to that socket. This job of delivering the data in a transport-layer segment to the correct socket is called demultiplexing. The job of gathering data chunks at the source host from different sockets, encapsulating each data chunk with header information (that will
later be used in demultiplexing) to create segments, and passing the segments to the network layer is called multiplexing.

we know that transport-layer multiplexing requires (1) that sockets have unique identifiers, and (2) that each segment have special 
 fields that indicate the socket to which the segment is to be delivered. These special fields, illustrated in Figure 3.3, are the source port number field and the destination port number field. (The UDP and TCP segments have other fields as well, as discussed in the subsequent sections of this chapter.) Each port number is a 16-bit number, ranging from 0 to 65535. The port numbers ranging from 0 to 1023 are called well-known port numbers and are restricted, which means that they are reserved for use by well-known
### HTTP 
application protocols such as HTTP (which uses port number 80) and FTP (which uses port number 21).
### UDP
Each socket in the host could be assigned a port number, and when
a segment arrives at the host, the transport layer examines the destination port number in the segment and directs the segment to the corresponding socket. The segment’s data then passes through the socket into the attached process. As we’ll see, this is basically how UDP does it. However, we’ll also see that multiplexing/demultiplexing in TCP is yet more subtle
### TCP
TCP socket and a UDP socket is that a TCP socket is identified by a four-tuple: (source IP address, source port number, destination IP address, destination port number). Thus, when a TCP segment arrives from the network to a host, the host uses all four values to direct (demultiplex) the segment to the appropriate socket.

In particular, and in contrast with UDP, two arriving TCP segments with different source IP addresses or source port numbers will (with the exception of a TCP segment carrying the original connection-establishment request) be directed to two different sockets.
## TCP Congestion control
congestion window=cwnd
ssthresh (short-hand for “slow start threshold”)
![[Pasted image 20240121163025.png]]
Congestion control adjusts the sending rate of the sender based on network conditions to prevent packet loss and delays. 

Congestion control, is a mechanism used to prevent network
congestion by regulating the rate at which data is sent into the network. Congestion occurs when too much data is sent into the network, causing network resources such as bandwidth and buffer space to become exhausted. Congestion control is mainly used at the transport layer. (Har mere at gøre med den fysiske “tykkelse” på ledingen og hvor meget der kan sendes.)
![[blobid21-60f546786ae24.jpeg]]
![[Tcp_westwood.gif]]
### Every step in the reno protocol:
- slow start
- triple duplicate loss
- Fast recovery ssthresh = control window/2 ((new control window = control window/2) + 3)
- congestion control
- triple duplicate loss
- Fast recovery Fast recovery ssthresh = control window/2 ((new control window = control window/2) + 3)
- congestion control
- timeout (control window = control window/2)
- slow start
TCP Tahoe dosent have fast recovery 
![[Pasted image 20240121162934.png]]
## TCP Connection Management
Suppose a process running in one host (client) wants to initiate a connection with another process in another host (server)

**Step 1.** The client-side TCP first sends a special TCP segment to the server-side TCP. This special segment contains no application-layer data. But one of the flag bits in the segment’s header (see Figure 3.29), the SYN bit, is set to 1.

**step 2.** Once the IP datagram containing the TCP SYN segment arrives at the server host, the server extracts the TCP SYN segment from the datagram, allocates the TCP buffers and variables to the connection, and sends a connection-granted segment to the client TCP. the SYN bit is set to 1. Second, the
acknowledgment field of the TCP segment header is set to client_isn+1. Finally, the server chooses its own initial sequence number (server_isn) and puts this value in the sequence number field of the TCP segment header. saying, in effect, “I received your SYN packet to start a connection with your initial sequence number, client_isn. I agree to establish this connection. My own initial sequence number is server_isn.” The connection-granted segment is referred to as a SYNACK segment.

**Step 3.** Upon receiving the SYNACK segment, the client also allocates buffers and variables to the connection. The client host then sends the server yet another segment; this last segment acknowledges the server’s connection-granted segment. The SYN bit is set to zero, since the connection is established. This third stage of the three-way handshake may carry client-to-server data in the segment payload
![[Pasted image 20240121162755.png]]
Once these three steps have been completed, the client and server hosts can send segments containing data to each other. In each of these future segments, the SYN bit will be set to zero.
![[Pasted image 20240121162828.png]]
## Reliable data transfer
![[Pasted image 20240121160801.png]]
TCP provides a reliable connection, which means that data sent using TCP is guaranteed to reach the receiver. In contrast, UDP does not guarantee that data will reach the receiver, and packets can be lost or delivered out of order.
![[Pasted image 20240121140150.png]]
## Flow control 
TCP uses flow control mechanisms to prevent the sender from overwhelming the receiver. UDP does not have flow control mechanisms, so the sender can potentially overwhelm the receiver.

Flow control is a mechanism used to prevent a fast sender from overwhelming a slow receiver. It ensures that the receiver can handle the data being sent to it, by regulating the rate at which the sender sends data. Flow control is mainly used at the data link layer. ( only has to do with the receiver). It is done by having the receiver send a window of how much it can receive with its messages.  Flow control is thus a speedmatching service

TCP provides flow control by having the sender maintain a variable called the receive window.

Flow control in TCP helps with congestion control by allowing the receiver to limit the amount of data that the sender can send, preventing the sender from overwhelming the network.
Both flow control and congestion control are necessary for
efficient and stable network communication.

**Recap GBN vs SR:**
both: Receive window/sending window
GBN: Packets not recieved in order are retransmitted. 
GBN: Triple ACK, sender starts again by providing seq 
SR: Buffer for out of order packets
SR: Triple ACK, packet is resend at seq. 
### Sliding window
N is often referred to as the window size and the GBN protocol itself as a sliding-window protocol
### Go-back-N
It is a type of sliding window protocol, which means that it uses a fixed-size window to control the flow of data between devices.

In Go-Back-N, the sender sends multiple packets of data in sequence, and the receiver acknowledges receipt of each packet. If the sender does not receive an acknowledgement for a packet within a certain period of time, it will assume that the packet was lost and retransmit it. 

If the receiver receives a packet out of order, it will discard it and request a retransmission of that packet. 

Once the sender receives an acknowledgement for a packet, it will slide the window forward to the next unacknowledged packet, allowing it to continue sending data. 
![[Pasted image 20240121155206.png]]
constrained to have no more than some maximum allowable number, N, of unacknowledged packets in the pipeline

Go-Back-N is efficient in terms of network bandwidth usage, as it does not require the sender to wait for an acknowledgement for every packet sent, but if a packet is lost, all packets sent after it will be retransmited which leads to waste of bandwidth.

In our GBN protocol, the receiver discards out-of-order packets. Although it may seem silly and wasteful to discard a correctly received (but out-of-order) packet, there is some justification for doing so. the only piece of information the receiver need maintain is
the sequence number of the next in-order packet. If packet n is expected, but packet n + 1 arrives data must be delivered in order, the receiver could buffer (save) packet n + 1 and then deliver this packet to the upper layer after it had later received and delivered packet n. However, if packet n is lost, both it and packet n + 1 will eventually be retransmitted as a result of the GBN retransmission rule at the sender. Thus, the receiver can simply discard packet n + 1.

**Invocation from above:** When rdt_send() is called from above, the sender first checks to see if the window is full, that is, whether there are N outstanding, unacknowledged packets. If the window is not full, a packet is created and sent, and variables are appropriately updated. If the window is full, the sender
simply returns the data back to the upper layer, an implicit indication that the window is full. The upper layer would presumably then have to try again later

**Receipt of an ACK:** In our GBN protocol, an acknowledgment for a packet with sequence number n will be taken to be a cumulative acknowledgment, indicating that all packets with a sequence number up to and including n have been correctly received at the receiver.

**A timeout event:**. The protocol’s name, “Go-Back-N,” is derived from the sender’s behavior in the presence of lost or overly delayed packets. As in the stop-and-wait protocol, a timer will again be used to recover from lost data or acknowledgment
packets. If a timeout occurs, the sender resends all packets that have been previously sent but that have not yet been acknowledged.
![[Pasted image 20240121160102.png]]
### Selective repeat protocol (SR)
GBN(Go-back-N) avoids this stop-and-wait protocol, however this can also cause performance problems. If window size and bandwith delay are big, many packets can be in the pipeline, thus if there is a packet error a whole bunch of packets must be retransmitted.


In Selective Repeat, the sender sends multiple packets of data in sequence, and the receiver acknowledges receipt of each packet. However, unlike Go-Back-N, if the receiver receives a packet out of order, it will buffer it and request a retransmission of only the missing packets. This allows the receiver to continue processing the correctly received packets, reducing the delay caused by retransmitting all packets.
![[Pasted image 20240121160550.png]]
![[Pasted image 20240121160711.png]]
#### Eksamens opgave
![[Pasted image 20240121222638.png]]

| c0  | Sent packet 0 | 
| --- | ------------- |
| c1  | Sent packet 1 (packet is lost              |
| c2  | sent packet 2              |
| c3  | Recieve ack0 and send packet 3              |
| c4  | recieve ack2              |
| c5  | recieved ack2 before ack1: packet 1 timeout and resend packet 1              |
| c6  | no ack3. p3 timeout and resend p3              |
| c7  | recieve ack1 send p4              |
| c8  | send p5              |

| s0 | Acknowledged packet 0 |
| ---- | ---- |
| s1 | ack2 |
| s2 | ack3 (ack3 is lost) |
| s3 | ack1 |
| s4 | ack3 |
| s5 | ack4 |
we assume that the window size is 3. 3 bursts of packets are send after each other without waiting for ack. 

# Link layer
## IP protocol
![[Pasted image 20240121163424.png]]
An IP address is considered hierarchical because it is divided into different fields that represent different levels of the network hierarchy. The most common format of an IP address is IPv4, which is a 32-bit address divided into four octets. Each octet represents a different level of the network hierarchy:

An octet is a unit of digital information that consists of eight bits. In the context of IP addresses, an octet refers to one of the four 8-bit fields that make up an IPv4 address. Each octet is represented by a decimal number between 0 and 255, and is separated by a period. In IPv6 addresses, an octet is represented by a 16-bit field (2 bytes) instead of 8-bit field.

- The first octet represents the network address, also known as the "class" of the IP address
- The second and third octets represent the subnet address
- The fourth octet represents the host address
This hierarchical structure allows for efficient routing and 
management of IP addresses.

The hierarchical structure of IP addresses solves several problems:

**Routing scalability:** The hierarchical structure of IP addresses allows routers to make forwarding decisions based on the network address rather than the entire IP address. This improves
routing scalability and reduces the amount of memory and processing power required for routers.

**Address aggregation:** The hierarchical structure of IP addresses allows for address aggregation, which is the process of combining multiple subnets into a single routing entry.

**Hierarchical addressing:** The hierarchical structure of IP addresses allows for a hierarchical addressing scheme, which is a way of allocating IP addresses that reflects the topological structure of the network. This allows for efficient routing and management of IP addresses, and makes it easier to add and remove devices from
the network.

### IPv6 
A prime motivation for this effort was the realization
that the 32-bit IPv4 address space was beginning to be used up

The approach to IPv4-to-IPv6 transition that has been most widely adopted inpractice involves tunneling
## Dynamic Host Configuration Protocol (DHCP)
DHCP allows a host to obtain (be allocated) an IP address automatically. A network administrator can configure DHCP so that a given host receives the same IP address each time it connects to the network, or a host may be assigned a temporary IP address that will be different each time the host connects to the network. In addition to host IP address assignment, DHCP also allows a host to learn additional information, such as its subnet mask, the address of its first-hop router (often called the default gateway), and the address of its local DNS server.  

DHCP is a client-server protocol.
![[Pasted image 20240121165327.png]]

Often referred to as a plug-and-play or zeroconf(zero-configuration) protocol. This capability makes it very attractive to the network administrator who would otherwise have to perform these tasks manually!

the student who carries a laptop from a dormitory room to
a library to a classroom. It is likely that in each location, the student will be connecting into a new subnet and hence will need a new IP address at each location. DHCP is ideally suited to this situation, as there are many users coming and going, and addresses are needed for only a limited amount of time.
## DNS (Domain Name System)
The DNS protocol runs over UDP and uses port 53.

It is a hierarchical, decentralized system for resolving domain names, such as www.example.com, into IP addresses. The IP address is the numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication. DNS allows users to access websites and other resources by typing domain names instead of IP addresses. DNS servers are responsible for resolving domain names to IP-addresses and caching the results for a certain period of time.

DNS information is not stored in one location, but a collection of servers worldwide. These exist at different abstraction layers with root servers at the top serving all below. Top-level domains server specific domain names (eg. .com, .dk). Individual organisations have their own DNS servers at the bottom. This makes the system more robust by removing a central failure point, and quicker to respond by having servers closer to worldwide requests.

### Iterative and Recursive DNS
**Iterative DNS and Recursive DNS are two different methods of resolving domain names to IP addresses.**

Iterative DNS is a method in which the client queries a DNS server, and the server gives referrals if it does not have the answer, whereas Recursive DNS is a method in which the DNS server takes the responsibility of finding the answer for the client and don't
give referrals. 

The recursive DNS is more efficient in terms of network and client resources, but the iterative DNS is more secure because it does not rely on a single DNS server.
## Network Address Translation (NAT)
here are hundreds of thousands of home networks, many using the same address space, 10.0.0.0/24. Devices within a given home network can send packets to each other using 10.0.0.0/24 addressing. However, packets forwarded beyond the home
network into the larger global Internet clearly cannot use these addresses (as either a source or a destination address) because there are hundreds of thousands of networks using this block of addresses. That is, the 10.0.0.0/24 addresses can only have meaning within the given home network. But if private addresses only have meaning within a given network, how is addressing handled when packets are sent to or received from the global Internet, where addresses are necessarily unique? The
answer lies in understanding NAT.

The NAT-enabled router does not look like a router to the outside world. Instead the NAT router behaves to the outside world as a single device with a single IP address. In Figure 4.25, all traffic leaving the home router for the larger Internet has a source IP address of 138.76.29.7, and all traffic entering the home router must have a destination address of 138.76.29.7. In essence, the NAT-enabled router is hiding the details of the home network from the outside world.

the home network computers get their addresses and the router gets its single IP address: the answer is the same—DHCP! The router gets its address from the ISP’s DHCP server, and the router runs a DHCP server to provide addresses to computers within the NAT-DHCP-router-controlled home network’s address space.

If all datagrams arriving at the NAT router from the WAN have the same destination IP address (specifically, that of the WAN-side interface of the NAT router), then how does the router know the internal host to which it should forward a given datagram? The trick is to use a NAT translation table at the NAT router, and to
include port numbers as well as IP addresses in the table entries.

There are some detractors. First, one might argue that, port numbers are meant to be used for addressing processes, not for addressing hosts. This cause problems for servers running on the home network, since, server processes wait for incoming requests at well-known port numbers and peers in a P2P protocol need to accept incoming connections when acting as servers. How can one peer connect to another peer that is behind a NAT server, and has a DHCP-provided NAT address? Technical solutions to these problems include NAT traversal tools.
## Fowarding tables
When a source end system wants to send a packet to a destination end system, the source includes the destination’s IP address in the packet’s header. As with postal addresses, this address has a hierarchical structure. When a packet arrives at a router
in the network, the router examines a portion of the packet’s destination address and forwards the packet to an adjacent router. More specifically, each router has a forwarding table that maps destination addresses
### Making a forwarding table (KR chap 4 p8)
Consider a datagram network using 32-bit host addresses. Suppose a router has four links, numbered 0 through 3, and packets are to be forwarded to the link interfaces as follows:

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
**a) Provide a forwarding table that has five entries, uses longest prefix match-ing, and forwards packets to the correct link interfaces.**

The addresses that go through link interface 0, match on 10 bits:

*11100000 00***000000 00000000** 
Adresses from $\uparrow$ to $\downarrow$  have to be linked through 0. 
*11100000 00***111111 11111111 11111111**
The adresses match with 10 bits, therefore we can use these 10 bits as a prefix:  
11100000 . 00 (we use the dot notation since it's ip addresses)

if an address matches the prefix it will be routed through link 0. 


for link 1 we have the following:
*11100000 01000000* **00000000 00000000**
*11100000 01000000* **11111111 11111111**
they have 16 matching bits therefore the prefix will be:
*11100000 . 01000000*

link 2 and 3 are a bit tricky:
*1110000*0 01000001 00000000 
*1110000*1 01111111 11111111 11111111
they match for 7 bits, but *1110000*1 **0**111... have the 0 that can be flipped which would give *1110000*1 **1**111. that would make the address bigger than the range (11100000 . 01 to 11100001 . 01). Therefore we need an extra prefix:

*1110000* will link through 2 
*1110001 11* will link through 3 as it's outside range and bigger than the range for link 0, 1 and 2. 
*1110001 01* would be within the range of link 2 and dosent need a special prefix

That way we get the following forwarding table:

| Prefix match        | Interface | Entry |
| ------------------- | --------- | ----- |
| 11100000 . 00       | 0         | 1st      |
| 11100000 . 01000000 | 1         | 2nd      |
| 1110000             | 2         | 3trd      |
| 11100001 1          | 3         | 4th      |
| otherwise           | 3         | 5th      |

**b) Describe how your forwarding table determines the appropriate link inter-face for datagrams with destination addresses:**
`11001000 10010001 01010001 01010101`:
Matches no prefixes, therefore 5th entry. Address is routed through link 3. 

`11100001 01000000 11000011 00111100`:
matches prefix of entry 3. Address is routed through link 2 

`11100001 10000000 00010001 01110111`
matches prefix of entry 4. Address is routed through link 3. 
## Mac
MAC (Media Access Control) addresses are unique identifiers assigned to network interfaces, such as Ethernet cards, Wi-Fi adapters, and so on. They are used to identify devices at the Data Link Layer of the OSI model, which is responsible for providing a reliable link between devices on a local area network (LAN).

The main purpose of MAC addresses is to provide a unique identifier for each device on a LAN, so that data can be properly delivered to the correct device. When a device on a LAN
wants to send data to another device, it uses the destination device's MAC address to identify it. The data is then transmitted over the LAN in a special format called an Ethernet frame, which includes both the source and destination MAC addresses. 

MAC addresses are not hierarchical because they are not divided into fields that represent different levels of the network hierarchy. Instead, they are fixed-length identifiers that are assigned to devices by their manufacturers. This makes them unique on the LAN, but they are not unique globally, as there's no concept of "network" or "subnet" on the MAC address. 

MAC addresses are also not hierarchical because they are not used for routing purposes. Unlike IP addresses, which are used to route data between networks, MAC addresses are used only for identifying devices on a single LAN. The data is then delivered to the correct device based on the MAC address, but it is not used for routing the data between different networks.

In summary, the purpose of MAC addresses is to identify devices on a LAN and to ensure that data is delivered to the correct device. They are not hierarchical in nature and are not used for routing purposes.
## Routing algoritms
![[Pasted image 20240121174909.png]]
Control plane is responsible for routing, while the actual forwarding happens at the data plane.

Today, the routing is often implemented in software and a centralized server (Remote Controller) tells the router how datagrams should be forwarded. It is however, possible to manually alter a forwarding table in each router.
### Link state
Dijkstra's algorithm is a graph search algorithm that solves the single-source shortest path problem for a graph with non-negative edge weights, producing a shortest path tree. This means that the algorithm finds the shortest path from one particular source
node to all other nodes in the graph. The algorithm repeatedly selects the node with the lowest distance, calculates the distance through it to each unvisited neighbor, and updates the neighbor's distance if smaller. It's better for static systems
#### Practical 
D(v): Cost of least path from u (source) to v in this iteration
p(v): Previous node of v along least-cost path
N’: subset of nodes, that are part of shortest path
![[Pasted image 20240121175113.png|250]]
Asked to start at node A:

| Step | N'  | D(B),p(B) | D(C),p(C) | D(D),p(D) | D(E),p(E) | D(F),p(F) |
| ---- | --- | --------- | --------- | --------- | --------- | --------- |
| 0    | A   | 4,A       | 8,A       | inf       | inf       | inf       |
| 1    |     |           |           |           |           |           |
| 2    |     |           |           |           |           |           |
| 3    |     |           |           |           |           |           |
| 4    |     |           |           |           |           |           |
| 5     |     |           |           |           |           |           |
Since we only know of A's distance to it's neigbors since A is the only node in the shortest path (N'). 

We now chose the note with the shortest path to A, that is B and add it to N', now we know of the cost to travel to it's neighbors. If two notes have the same shortest path we just choose randomly.

| Step | N'  | D(B),p(B) | D(C),p(C) | D(D),p(D) | D(E),p(E) | D(F),p(F) |
| ---- | --- | --------- | --------- | --------- | --------- | --------- |
| 0    | A   | 4,A       | 8,A       | inf       | inf       | inf       |
| 1    | A,B | 4,A       | 8,A       | 5,B       | inf       | inf       |
| 2    |     |           |           |           |           |           |
| 3    |     |           |           |           |           |           |
| 4    |     |           |           |           |           |           |
| 5     |     |           |           |           |           |           |
We learn that we can travel from A to D through B and the cost is 4+1=5. Now we add the shortest path to N', B is already in N', we therefore add D. 

| Step | N'    | D(B),p(B) | D(C),p(C) | D(D),p(D) | D(E),p(E) | D(F),p(F) |
| ---- | ----- | --------- | --------- | --------- | --------- | --------- |
| 0    | A     | 4,A       | 8,A       | inf       | inf       | inf       |
| 1    | A,B   | 4,A       | 8,A       | 5,B       | inf       | inf       |
| 2    | A,B,D | 4,A       | 8,A       | 5,B       | 14,D      | 7,D       |
| 3    |       |           |           |           |           |           |
| 4    |       |           |           |           |           |           |
| 5     |       |           |           |           |           |           |
We add F to N' since it's the shortest path of those not in N'

| Step | N'      | D(B),p(B) | D(C),p(C) | D(D),p(D) | D(E),p(E) | D(F),p(F) |
| ---- | ------- | --------- | --------- | --------- | --------- | --------- |
| 0    | A       | 4,A       | 8,A       | inf       | inf       | inf       |
| 1    | A,B     | 4,A       | 8,A       | 5,B       | inf       | inf       |
| 2    | A,B,D   | 4,A       | 8,A       | 5,B       | 14,D      | 7,D       |
| 3    | A,B,D,F | 4,A       | 8,A       | 5,B       | 10,F      | 7,D       |
| 4    |         |           |           |           |           |           |
| 5     |         |           |           |           |           |           |
We found a shorter path to E through F and update the table accordinly.

| Step | N' | D(B),p(B) | D(C),p(C) | D(D),p(D) | D(E),p(E) | D(F),p(F) |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0 | A | 4,A | 8,A | inf | inf | inf |
| 1 | A,B | 4,A | 8,A | 5,B | inf | inf |
| 2 | A,B,D | 4,A | 8,A | 5,B | 14,D | 7,D |
| 3 | A,B,D,F | 4,A | 8,A | 5,B | 10,F | 7,D |
| 4 | A,B,D,F,C | 4,A | 8,A | 5,B | 9,C | 7,D |
| 5 | A,B,D,F,C,E | 4,A | 8,A | 5,B | 9,C | 7,D |
No shorter paths where found therefore we are done.

- Shortest path from A to B is by taking edge (A,B) and here the total cost is 4
- Shortest path from A to C is by taking edge (A,C) and here the total cost is cost 8
- Shortest path from A to D is by taking edge (A,B) and here the total cost is cost 5
- Shortest path from A to E is by taking edge (A,C) and here the total cost is cost 9
- Shortest path from A to F is of cost 7. We see that the previous node on this path is D and we know that the shortest path to D is by taking edge (A,B). Hence shortest path from A to F is by taking edge (A,B).

‘edge’ here means standing at A in which direction should you go such that you end up taking the shortest path to the destination node.
![[Pasted image 20240121180651.png|150]]
### Distant vector
Distance vector routing is a method used by routers in a computer network to determine the best path for forwarding packets. In distance vector routing, each router maintains a table of the shortest distances to every other network, as well as the next hop on the path to that network. The basic function of distance vector routing is for each router to share its table of distances with its neighbors, and for each router to update its own table based on the
information received from its neighbors. It's best suited for dynamic systems, but suffer from the counting to infinty problem.

This process is known as distance vector algorithm or Bellman-Ford algorithm. The algorithm is iterative and each router continues to update its distance vector until the values in the vector stabilize and no further updates are made.
#### Practical
![[Pasted image 20240121182814.png|300]]

- Initialize distance vector for each node with distance to reachable neighbours
- Distance to self is simply 0
- If a neighbour is unreachable, initialize to infinity
![[Pasted image 20240121183302.png]]
Continuing shorter distances are found A to B then B to C (6+4=10) is cheaper than A to C (18), do the same for all node tables:
![[Pasted image 20240121183439.png]]
![[Pasted image 20240121183836.png]]
As there are no more optimizations, changes have propagated and we stop and get the following routing table
![[Pasted image 20240121183946.png]]
We take row A from node A table
We take row B from node B table
We take row C from node C table
We take row D from node D table
#### Count to infinity problem
The count-to-infinity problem is a problem that can occur in distributed systems, particularly in distance-vector routing algorithms. It is a problem that can happen when two or more
nodes in a network are trying to determine the best path to a destination. 

The problem arises when two nodes, A and B, both have an incorrect distance to a destination, C. Each node assumes that the other node has the correct distance and starts incrementing its own distance in an attempt to converge on the correct value. However, since both nodes have incorrect distances, they will continue to increment their distances indefinitely, causing their distance values to grow larger and larger. This is referred to as
"counting to infinity." 

The problem can be mitigated by using a metric such as Bellman-Ford or Dijkstra algorithm, which incorporate a mechanism such as a maximum hop count or a timeout to prevent the distance values from growing indefinitely. The idea behind these algorithms is to prevent the nodes from counting to infinity by introducing a maximum value for the distance, when this maximum value is reached the node will consider that the information is incorrect and
discard it.

##### Summary:
The count-to-infinity problem is a problem that can occur in distance-vector routing algorithms when two or more nodes in a network are trying to determine the shortest path to a destination, and the nodes keep incrementing the distance values indefinitely, leading them to become larger and larger, referred to as counting to infinity. This problem can be mitigated by using a different routing algorithm that incorporates a mechanism to prevent the distance values from growing indefinitely.
# Security 
## Confidentiality
establish confidential communication between Alice and Bob

Use encryption to ensure confidentiality

RSA is assymetric (private,public), i.e. keypair, However encrypting each message through RSA is computationally expensive so typically RSA is used to encrypt a symmetric session key

Further communication is then encrypted using a session key

This is essentially what happens in the TLS, remember TLS is what makes HTTP -> HTTPS

Just because something is confidential, it does not guarantee protection against e.g. replay attacks.

Also in Databases, passwords are not stored in plaintext
- Instead, a Hash of (Password+Salt) is stored – the salt helps guard against Rainbow Tables and dictionary attacks
## Integrity
Another aim is for Alice and Bob to ensure that messages are no altered while in transit. A checksum can be used.

A checksum is a hash of the message, using a cryptographic hashing algorithm such as SHA-256, SHA-1 or MD5. If this is sent along the message, the receiver can generate his own hash and compare.

does not by itself guarantee the identity of the sender. For that some kind of authentication is required.

Hash(message + secret) is called a Message Authentication Code (MAC), not the same as mac address.

Another tool is the use of Digital Signatures where a private key is used to sign (encrypt) the hash of a message. Receiver can use senders public key to decrypt the hash of the message and compare with his own hash of the message
## Salting
Because hashing is deterministic, the same input will have the same output. Definitely a problem when users can’t be relied upon to have unique passwords

Second problem is that rainbow tables of hashes of common passwords definitely exist and are used
![[Pasted image 20240121192653.png|300]]
Therefore add a salt to your password before hashing. Salts should idealy be long, random, and unique to ensure minimum chances of collisions.

Note the salt is stored as plaintext as we need it to verify our
salted hash, but that isn’t a problem really
![[Pasted image 20240121193201.png|300]]
This doesn’t make it impossible to still brute force, but each
hash needs to computed independently
## Rainbow table
A rainbow table is a precomputed table for caching the outputs of a cryptographic hash function, usually for cracking password hashes. Passwords are typically stored not in plain text form, but as hash values.

If such a database of hashed passwords falls into the hands of an attacker, they can use a precomputed rainbow table to recover the plaintext passwords. A common defense against this attack is to compute the hashes using a key derivation function that adds a salt to each password before hashing it, with different passwords receiving different salts, which are stored in plain text along with the hash.
## Dictionary attack
Hashes help obfuscate passwords, but hashtables of common passwords exist. We can see that Irene and Kirsty share a password
![[Pasted image 20240121192451.png|200]]
More intelligent brute force attack, just try common password hashes.
![[Pasted image 20240121192556.png|200]]
All the rainbow tables in the world won’t help if our passwords
are salted before being hashed
## Playback attack 
A playback attack is a type of network attack in which an attacker intercepts and records a valid authentication or encryption message, such as an authentication token or a session ID and then replays it at a later time to gain unauthorized access to a system.

A nonce (short for "number used once") is a unique value that is generated for each authentication or encryption message, and is included in the message as part of the authentication or encryption process. Because the nonce is generated anew for each
message, it can only be used once, making it difficult for an attacker to replay a previously intercepted message.

When a message is received, the nonce is checked against a database of previously used nonces. If the nonce has already been used, the message is rejected, thus preventing a replay attack.

In summary, a nonce is a solution to a playback attack by ensuring that the message can only be used once, and that the message is coming from the expected sender, thus making it difficult for an attacker to replay a recorded message.

## Nonce:
A nonce is a number that is used only once. In cryptography, a nonce is a random or unique number that is generated for each encryption operation. The nonce is included as part of the
input to the encryption algorithm, along with the plaintext and a key. The nonce provides an extra level of security by ensuring that the same plaintext and key will not produce the same ciphertext even if the same encryption algorithm is used. In some cases, the nonce is used to make sure that the data that is exchanged between the sender and receiver is unique and has not been tampered with. The nonce is sent along with the message and the recipient can check if it is unique or not, if the nonce is not unique then the message is dropped.

Nonces are widely used in various cryptographic protocols like in the WPA2 wireless security protocol and in the AES-GCM encryption algorithm.
## Replay attack
A replay attack is a type of network security attack in which an attacker intercepts and records a legitimate network packet and then retransmits it at a later time. The goal of a replay attack is to gain unauthorized access to a network or system by replaying a previously captured packet that contains valid authentication or session information. 

Replay attacks can occur at different layers of the OSI model, but most commonly occur at the transport layer, where they can exploit the stateless nature of the User Datagram
Protocol (UDP) and the Transmission Control Protocol (TCP).

For example, an attacker could intercept a packet that contains a valid username and password during an authentication process, and then replay that packet at a later time to gain unauthorized access to a network or system

**Replay attacks can be prevented by using methods such as:**
- Timestamps: adding a timestamp to the packet to ensure that it can only be used for a limited time.
- Sequence numbers: assigning a unique number to each packet to prevent the replaying of a previously used packet.
- Cryptographic techniques: encrypting the packet to prevent the attacker from reading and replaying it.
## A man-in-the-middle (MITM) attack 
A man-in-the-middle (MITM) attack  is a type of cyber attack in which an attacker intercepts and alters communications between two parties without their knowledge or consent. by intercepting and manipulating the communication between the two parties, the attacker can steal sensitive information, inject malware, or perform other malicious actions. In a MITM attack, the attacker can intercept the communication by either physically accessing the network or by using various techniques such as IP spoofing, DNS spoofing. Remember that protocols such as IP is not secure, it's in the other layers the security is provided, like in the application layer where you would use a secure form of HTTP (HTTPS). 

Once the attacker has intercepted the communication, they can use various techniques to manipulate it, such as:
- Eavesdropping: the attacker can read and record the intercepted communication
- Modifying: the attacker can alter the intercepted communication to inject malware or steal sensitive information
- Injecting: the attacker can inject new communication into the intercepted communication to trick the parties into revealing sensitive information.

Packet sniffers like wireshark could be used and if the communication is on a non-encrypted channel (using HTTP instead of HTTPS) one could see all packets being send, which could contain all sorts of information, such as passwords. 

**MITM attacks can be prevented by using methods such as:**
- Encryption: encrypting the communication can prevent the attacker from reading and altering it
- Authentication: using strong authentication methods can prevent the attacker from impersonating one of the parties
- Network segmentation: segmenting the network and limiting the scope of the attack can prevent the attacker from accessing sensitive information.
## Encryption
Encryption is a technique that can be used to make a protocol more secure by protecting the confidentiality and integrity of the data being transmitted. There are several types of encryption that can be used, each with their own strengths and weaknesses. Some of the main types of encryption include:

*Symmetric encryption:* This type of encryption involves using a shared secret key to encrypt and decrypt the data. The same key is used to encrypt the data before it is transmitted and decrypt it upon receipt. Examples of symmetric encryption algorithms include AES, DES, and Blowfish.

*Asymmetric encryption:* This type of encryption involves using a public and private key pair to encrypt and decrypt the data. The public key is used to encrypt the data, while the private key is used to decrypt it. Examples of asymmetric encryption algorithms include RSA, Diffie-Hellman, and Elliptic Curve Cryptography (ECC).

*Hash functions:* This type of encryption is not used to encrypt the data but to ensure integrity of the data by creating a unique digital signature. When a message is hashed it produces a fixed-length output that will change if the original data is changed. Examples of hash functions are SHA-256, SHA-3 and MD5

*Stream ciphers:* This type of encryption uses a pseudorandom stream of data, also known as a keystream, to encrypt the data. Examples of stream ciphers are RC4 and Salsa20

### **Summary:**
Encryption is a technique that can be used to make a protocol more secure by protecting the confidentiality and integrity of the data being transmitted. There are different types of encryption that can be used, such as symmetric encryption, asymmetric encryption, hash functions and stream ciphers each with their own strengths and weaknesses. It's important to choose the right encryption algorithm and its implementation to ensure the best security for the specific use case.
## Keys in networking
There are several different types of keys that can be used in a network, and their specific functions can vary depending on the context and the type of network being used. However,
some common types of keys used in networks include:

*Encryption keys:* These keys are used to encrypt and decrypt data as it is transmitted over a network. They can be used to secure data from unauthorized access, such as by encrypting login credentials or other sensitive information.

*Authentication keys:* These keys are used to authenticate devices or users on a network. They can be used to ensure that only authorized devices or users can access the network or
specific resources on the network.

*Session keys:* These keys are used to establish and maintain a secure session between devices or users on a network. They can be used to encrypt and decrypt data for a specific session, and are typically discarded or changed after the session is completed.

*Key management keys:* These keys are used to manage and distribute other types of keys on a network. They can be used to encrypt and decrypt keys for distribution, or to authenticate devices or users that are requesting keys.

*Digital signature keys:* These keys are used to create and verify digital signatures. They can be used to ensure the authenticity and integrity of data transmitted over a network. 

It's worth noting that depending on the type of network, protocols, and security standards the keys may be used in different ways, and some may not be necessary in some cases.

## Cryptographic and non-cryptographic hash function
Function for deterministicly computing a fixed-length output from some variable length input.

Minimise output collisions (eg two inputs producing the same output)

Idealy is fast to compute, but time consuming to reverse engineer

**Cryptographic hash functions:**
These are a subset of hash functions. They are much slower and conversely much more difficult to reverse engineer
**Non-cryptographic hash function:**
If a hash function is non-cryptographic, it means that it is fairly simple to reverse engineer the hash. It can be used only to check integrity of a message, since we can send a hash of the contents along the message, so the receiver can check if the message is altered(by purpose or error) (checksum)
**Cryptographic hash function:**
Is very hard to be reverse engineered. And can then be used to send secret data.

A cryptographic hash function has several properties that are different or stronger than those of a regular hash function. These properties are needed to make the cryptographic hash function suitable for use in various cryptographic applications such as digital signature, message authentication code (MAC) and password hashing.

*Collision-Resistance:* It should be computationally infeasible to find two different input messages that produce the same output hash value, also known as a "collision".

*Preimage-Resistance:* Given an output hash value, it should be computationally infeasible to find any input message that would produce that output hash value, also known as a "preimage".

*Puzzle-friendliness:* It should be computationally hard to find any two input messages that have a difference of only one bit and produce very different output hash values.

*Hiding property:* It should be computationally infeasible to determine anything about the input message by looking at its output hash value.

*Avalanche effect:* A small change in the input message should cause a significant change in the output hash value.

*Second preimage resistance:* Given an input message, it should be
computationally infeasible to find a different input message that will produce the same output hash value.

*Computational efficiency:* The hash function should be computationally efficient, meaning it should be able to process large input messages quickly.

*Deterministic:* The output hash value should be deterministic, meaning that the same input message will always produce the same output hash value.

These properties are needed to protect the integrity and confidentiality of the data in various cryptographic applications, and to make it difficult for an attacker to find any weaknesses in
the hash function.
