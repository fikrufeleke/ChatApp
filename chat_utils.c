/*
*
* A simple linux comand line chat application. Supporting app.
* Author: Fikru Feleke
*
*/


#include "chat_utils.h"

#include <string.h>

void encrypt(char passwrd[])
 {
	for(int i = 0; i<strlen(passwrd);i++)
		{
			passwrd[i] = passwrd[i]*passwrd[i];
		}
 }
 
void trim_newline(char *text)
{
	int len = strlen(text) - 1;
	if (text[len] == '\n')
	{
		text[len] = '\0';
	}
}

  
