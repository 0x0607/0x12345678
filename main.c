#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=0x12345678;
	int b;
	int i=0;
/***************************************************/
	printf("a=0x%x | Memory Address: 0x%x\n",a,&a);
	while(i<4){
		b=(b<<8)+((a>>8*(i)) & 0xFF);
	i++;}
	printf("---------------swap-----------------\n");
	printf("b=0x%x | Memory Address: 0x%x\n\n",b,&b);
/***************************************************/
	system("pause");
	return 0;
}
