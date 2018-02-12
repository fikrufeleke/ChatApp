CC = gcc
DEBUG = -g
CFLAGS = -Wall -lpthread -c $(DEBUG)
LFLAGS = -Wall -lpthread $(DEBUG)

all: chat_client chat_server

chat_client: chat_client.o chat_utils.o
	$(CC) $(LFLAGS) chat_client.o chat_utils.o -o chat_client

chat_server: chat_server.o chat_utils.o
	$(CC) $(LFLAGS) chat_server.o chat_utils.o -o chat_server


chat_client.o: chat_client.c chat_utils.h
	$(CC) $(CFLAGS) chat_client.c

chat_server.o: chat_server.c chat_utils.h
	$(CC) $(CFLAGS) chat_server.c

chat_utils.o: chat_utils.h chat_utils.c
	$(CC) $(CFLAGS) chat_utils.c

clean:
	rm -rf *.o *~ chat_client chat_server
