// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *inptr = fopen("card.raw", "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open card.raw.\n");
        return 2;
    }
    int c=0,f=0;
    unsigned char buffer[512];

    // open output file
    FILE *outptr =NULL;
    while (fread(buffer, 512, 1, inptr) == 1)
    {
        if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) && ((buffer[3] & 0xe0) == 0xe0))
        {
            if(f==1)
            fclose(outptr);
            else
            f=1;
            char filename[8];
            sprintf(filename, "%03d.jpg", c);
            outptr = fopen(filename, "a");
            c++;
        }
        if (f==1)
        fwrite(&buffer, 512, 1, outptr);
    }
    fclose(inptr);
    fclose(outptr);
    return 0;
}
