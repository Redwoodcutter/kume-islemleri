#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *yaz,*yaz2,*yaz3;
   int p,x;

  int sonuc;

printf("B fark A kumesi \n");
yaz=fopen("kume1.txt","r");
yaz2=fopen("kume2.txt","r");
yaz3=fopen("bfarka.txt","w");


while(!feof(yaz2))
		{
			fscanf(yaz2,"%d",&x);
			sonuc=0;
            if(feof(yaz2))
                break;


			while(!feof(yaz))
			{
				fscanf(yaz,"%d",&p);
				if(p==x)
				{
					sonuc++;
					break;
				}

			}
             rewind(yaz);
			if(sonuc==0)
				fprintf(yaz3,"%d\n",x);
			}

     fclose(yaz);
     fclose(yaz2);
     fclose(yaz3);
    return 0;
}
