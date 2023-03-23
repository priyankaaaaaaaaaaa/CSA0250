# include<stdio.h>
# include<conio.h>
int main()
{
	int i=3,val;
	val=sizeof (i)+ +(i=1)+ +(i-1);
	printf("%d%d",val,i);


}
int f(int num){
	return num*5;
}
