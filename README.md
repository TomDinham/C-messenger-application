# C-messenger-application
For this project my task was to create two sides of an application that allowed messages to be sent to and from a the two systems.

The Server

The first application was to be configured as a server, this set up the port, network and then waited for a connection to be made. Once this connection is made with a client system, it can receive and send messages over this network. The connection will close once the client send "QUIT" to the server.

The client

The client system connected onto this network through the port set up by then network, can send messages through to the server while receiving these back. This messaging will continue indefinitely until the client types "QUIT" into the system.
