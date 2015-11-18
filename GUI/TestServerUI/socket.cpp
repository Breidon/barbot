#include <memory.h>     // for memset()
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */

#include "socket.h"
#include <unistd.h>

#define MAXPENDING 5    /* Maximum outstanding connection requests */
#define RCVBUFSIZE 32   /* Size of receive buffer */

int CreateServerSocket(unsigned short port)
{

    int                 sock;         /* socket to create */
    struct sockaddr_in  echoServAddr; /* Local address */

    /* Create socket for incoming connections */
    sock = socket (PF_INET, SOCK_STREAM, IPPROTO_TCP);

    /* Construct local address structure */
    memset( &echoServAddr, 0, sizeof(echoServAddr));  /* Zero out structure */
    echoServAddr.sin_family = AF_INET;                /* Internet address family */
    echoServAddr.sin_addr.s_addr = htonl(INADDR_ANY); /* Any incoming interface */
    echoServAddr.sin_port = htons(port);              /* Local port */

    /* Bind to the local address */
    bind (sock, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr));

    /* Mark the socket so it will listen for incoming connections */
    listen (sock, MAXPENDING);

    return (sock);
}

int AcceptTCPConnection (int servSock)
{
    // 'servSock' is obtained from CreateTCPServerSocket()

    int                 clntSock;     /* Socket descriptor for client */
    struct sockaddr_in  echoClntAddr; /* Client address */
    unsigned int        clntLen;      /* Length of client address data structure */

    /* Set the size of the in-out parameter */
    clntLen = sizeof (echoClntAddr);

    /* Wait for a client to connect */
    clntSock = accept (servSock, (struct sockaddr *) &echoClntAddr, &clntLen);
    /* clntSock is connected to a client! */

    return (clntSock);
}

void HandleTCPClient (int clntSocket)
{
    // 'clntSocket' is obtained from AcceptTCPConnection()

    char echoBuffer[RCVBUFSIZE];        /* Buffer for echo string */
    int  recvMsgSize;                   /* Size of received message */

    /* Receive message from client */
    recvMsgSize = recv (clntSocket, echoBuffer, RCVBUFSIZE-1, 0);

    /* Send received string and receive again until end of transmission */
    while (recvMsgSize > 0)      /* zero indicates end of transmission */
    {
        recvMsgSize = recv (clntSocket, echoBuffer, RCVBUFSIZE-1, 0);
    }

    close (clntSocket);    /* Close client socket */
}



