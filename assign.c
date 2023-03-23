#include<stdio.h>
int main()

{
	int tmp=20;
	printf("%d",tmp);
	func();
	printf("%d",tmp);
}
func(){
	static int tmp=10;
	printf("%d",tmp);
}

