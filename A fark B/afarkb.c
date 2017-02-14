#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *yaz,*yaz2,*yaz3;
   int p,x;

  int sonuc;

printf("A fark B kumesi \n");
yaz=fopen("B_kumesi.txt","r");
yaz2=fopen("A_kumesi.txt","r");
yaz3=fopen("afarkb.txt","w");


while(!feof(yaz))
		{
			fscanf(yaz,"%d",&p);
			sonuc=0;
            if(feof(yaz))
                break;


			while(!feof(yaz2))
			{
				fscanf(yaz2,"%d",&x);
				if(p==x)
				{
					sonuc++;
					break;
				}

			}
             rewind(yaz2);
			if(sonuc==0)
				fprintf(yaz3,"%d\n",p);
			}

     fclose(yaz);
     fclose(yaz2);
     fclose(yaz3);
    return 0;
}
