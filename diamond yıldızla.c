 #include <stdio.h>
#include <stdlib.h>
/* diamond 4.31 */
int main()
{
   int i,j ;

   for(i=0;i<=5;i++)
   {
       for(j=1;j<=5-i;j++)
       {
           printf("  ");  // a�a��da y�ld�z�n yan�nda 1 bo�luk var piramidin d�zg�n g�z�kmesi i�in 2 �er bo�luk b�rak
       }
       for(j=1;j<=2*i-1;j++)
       {
        printf("* ");
       }
       printf("\n");
   }
   for(i=0;i<=5;i++)   // ayn� de�i�ken , i �stteki gibi s�f�r olunca 1 sat�r eksik
   {
       for(j=5;j>=5-i;j--)
       {
           printf("  ");
       }
       for(j=5;j>=2*i-1;j--)
       {
           printf("* ");
       }
       printf("\n");
   }


return 0;
}
