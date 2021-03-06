/*
*
* A simple linux comand line chat application. Header apps.
* Author: Fikru Feleke
*
*/


#ifndef CHAT_UTILS_H_
#define CHAT_UTILS_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>

// enum of different messages types.
typedef enum
{
  DISCONNECT,
  GET_USERS,
  LOGIN,
  LOGIN_ERROR,
  LOGIN_SUCCESS,
  JOIN,
  JOIN_SUCCESS,
  NEW_CHATROOM,	
  PRIVATE_MESSAGE,
  PUBLIC_MESSAGE,
  REGISTER,
  REGISTER_ERROR,
  RNAME_ERROR,
  ROOMS_FULL,
  USERNAME_ERROR,
  USERS_FULL
  
} msg_type;


//structure for a simple chat messaging application  
typedef struct
{
  msg_type type;
  char username[21];
  char password[21];
  char chatroom_name[21];
  char data[256];
  
} chat_msg_protocol;

//structure to hold client connection information
typedef struct
{
  int socket;
  struct sockaddr_in address;
  char username[20];
  char password[20];
  char chatroom_name[20];
  int login;
} connection_info;

typedef struct
{
  char username[20];
  char password[20];	
} user;

// Removes the trailing newline character from a string.
void trim_newline(char *text);

//encrpypt password
void encrypt(char pass[]);

#endif

