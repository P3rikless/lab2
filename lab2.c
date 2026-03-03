#include <stdlib.h>
#include <stdio.h>

int function(int x)
{
	x=x-2;
	if(x>0)
	x=function(x);
	return x;
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d \n\n\n", i);
	return 0;	
}

