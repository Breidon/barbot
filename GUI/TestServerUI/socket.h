#ifndef SOCKET_H
#define SOCKET_H

extern int CreateServerSocket (unsigned short port); /* Create TCP server socket */
extern int AcceptTCPConnection (int servSock);  /* Accept TCP connection request */
extern void HandleTCPClient (int clntSocket);   /* TCP client handling function */


#endif // SOCKET_H
