#include<stdio.h>
#include<stdlib.h>


void printPowerSet(int *set, int set_size,FILE *yaz3)
{
     unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

     for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            fprintf(yaz3,"%d ", set[j]);
       }
       fprintf(yaz3,"\n");
    }
}

void altkume (FILE * yaz2)
{
	int p,x,sayac=0,k[10000];

	FILE *yaz3;
	yaz3=fopen("A_altkumeleri.txt","w");

	if(yaz3==NULL)
	printf("Hata:A altkumeleri.txt dosyasi acilamadi.");

	else
	{
		while(!feof(yaz2))
		{
			fscanf(yaz2,"%d",&x);
			k[sayac]=x;
			sayac++;
		}
		printPowerSet(k,sayac-1,yaz3);
	}
	rewind(yaz2);
	fclose(yaz3);

}






int main()
{
  FILE *yaz,*yaz2,*yaz3;
   int p,x;

yaz2=fopen("A_kümesi.txt","r");
 altkume  (yaz2);


return 0;
}
