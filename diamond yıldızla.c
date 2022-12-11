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
           printf("  ");  // aþaðýda yýldýzýn yanýnda 1 boþluk var piramidin düzgün gözükmesi için 2 þer boþluk býrak
       }
       for(j=1;j<=2*i-1;j++)
       {
        printf("* ");
       }
       printf("\n");
   }
   for(i=0;i<=5;i++)   // ayný deðiþken , i üstteki gibi sýfýr olunca 1 satýr eksik
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
