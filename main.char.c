#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=0x12345678;
	int b;
	int i=0;
/********************************************/
	printf("a=0x%-8x | Address: 0x%x\n",a,&a);
	while(i<4){
    	    b=(b<<8)+*((char*)&a+i);
  	i++;}
	printf("---------------swap-----------------\n");
	printf("b=0x%-8x | Address: 0x%x\n\n",b,&b);
	system("pause");
	return 0;
}
