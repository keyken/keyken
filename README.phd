# keyken
  code
#include <stdio.h>
#include <math.h>

int main()
{   
    int number;
    int i,j,c,d,n,e,f;
	scanf("%d",&number);
	getchar();
	int a[number][number];
	for(i=0;i<number;i++)
	{
		scanf("%d",&n);
		for(j=number-1;j>=0;j--)
		{
			a[i][j]=n%10;
			n=n/10;
		}
	}

for(e=0;e<number;e++)
	{
	for(f=0;f<number;f++)
	   {
         if(a[e][f]>a[e-1][f]&&a[e][f]>a[e+1][f]&&a[e][f]>a[e][f+1]&&a[e][f]>a[e][f-1]&&a[e][f]<10&&a[e][f]>=0)
         {
         	a[e][f]='X'; 
		 }
         
       }
    
    }


    for(c=0;c<number;c++)
	{
	for(d=0;d<number;d++)
	   {
	   	if(a[c][d]=='X')
	   	{
	   		printf("%c",a[c][d]);
		   }
      else{
      	   printf("%d",a[c][d]); 
	  }
       }
       printf("\n");
    }
	return 0;
}
