#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    string l= "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char salt[3];
    salt[0]=argv[1][0];
    salt[1]=argv[1][1];
    salt[2] = '\0';
    char key[6] = "\0\0\0\0\0\0";
    for (int fifth = 0; fifth < 53; fifth++)
    for (int fourth = 0; fourth < 53; fourth++)
    for (int third = 0; third < 53; third++)
    for (int second = 0; second < 53; second++)
    for (int first = 1; first < 53; first++)
    {
        key[0]=l[first];
        key[1]=l[second];
        key[2]=l[third];
        key[3]=l[fourth];
        key[4]=l[fifth];
        if (strcmp(crypt(key, salt), argv[1]) == 0)
        {
            printf("%s\n",key);
            return 0;
        }
    }
}