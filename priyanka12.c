#include <stdio.h>
int main()
{
	int r, c, a[10][10], b[10][10], mul[10][10], i, j, k;
	printf("enter the number of rows :");
	scanf("%d", &r);
	printf("enter the number of columns :");
	scanf("%d", &c);
    printf("enter the first and second matrix element =\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d%d", &a[i][j], &b[i][j]);
			printf("multiply of the matrix =\n");
		}
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++)
	
	{
		mul[i][j]=0;
		for(k=0;k<c;k++)
		{
			mul[i][j]+=a[i][k]*b[k][j];
			
		}
	}
	
}
    for (i=0;i<r;i++){
    	for(j=0;j<c;j++)
    	{
		printf("%d\t",mul[i][j]);
		
	}
	printf("\n");
	
	}
	return 0;
}
