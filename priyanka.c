#include <stdio.h>
main ()
{
	int i,j, rows;
	printf("enter the number of rows: ");
	scanf("%d", &rows);
	for (i=rows; i>5; --i){
		for(j=1; j<=-i; ++j);{
			printf("* ");
	}
	printf("\n");
  }
	return 0;
}


