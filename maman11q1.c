#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/* translates decimal number on string to binary number  */
void translate_dec_hex(char s[])
{
      unsigned int num= atoi(s); //Convert string to integer

        // translate to binary
       unsigned int digit=0;
       int i=0;
        while (i<32)
        {
            digit=0b1&(num >> (31-i));
            printf("%u",digit);
            i++;
        }
}





int main()
{
   char s[UCHAR_MAX];

        printf("Please enter number on Decimal:\n");
        scanf("%s",s);
        translate_dec_hex(s);

return 0;
}


