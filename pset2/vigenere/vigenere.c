#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 int main(int argc, string argv[])
 {
     int i=0,n,j=0;
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    int k=strlen(argv[1]);
    int val[k];
    for (i = 0; i < k; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Nope\n");
        return 1;
        }
        if islower(argv[1][i])
        val[i]=argv[1][i]-97;
        if isupper(argv[1][i])
        val[i]=argv[1][i]-65;
    }
        string code = get_string("plaintext: ");
        printf("ciphertext: ");
        for (i = 0, n = strlen(code); i < n; i++)
            {

                if islower(code[i])
                    {
                        printf("%c", (((code[i] + val[j]) - 97) % 26) + 97);
                        j=(j+1)%k;
                    }
                else if isupper(code[i])
                    {
                        printf("%c", (((code[i] + val[j]) - 65) % 26) + 65);
                        j=(j+1)%k;
                    }
                else
                    printf("%c", code[i]);
            }
            printf("\n");
            return 0;
 }