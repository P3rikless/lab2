#include <stdlib.h>
#include <stdio.h>

int function(int x)
{
	x=x-2;
	//x=function(x);
	return x;
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("\n a/2= %d \n\n",i);
	return 0;	
}

