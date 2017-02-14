#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *yaz,*yaz2,*yaz3;
   int p,x;


printf("2 dosyanin kesisimini gosterecek \n");
yaz=fopen("kume1.txt","r");
yaz2=fopen("kume2.txt","r");
yaz3=fopen("akesb.txt","w");
 fscanf(yaz,"%d",&p);
 fscanf(yaz2,"%d",&x);
   while(!feof(yaz) && !feof(yaz2))
{
    if(p<x)
      {

        fscanf(yaz,"%d",&p);
      }

     else if(p==x)
         {

          fprintf(yaz3,"%d\n",x);
          fscanf(yaz2,"%d",&x);
          fscanf(yaz,"%d",&p);
         }
    else if(p>x)
       {

           fscanf(yaz2,"%d",&x);
        }

   }


    return 0;
}
