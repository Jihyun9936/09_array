#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Lab01
nt main(int argc, char *argv[]) {
	int grade[5];
	int i;
	
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	for(i=0; i<5; i++)
		printf("grade[%d] = %d\n", i, grade[i]);
	
	
	return 0;
}*/

/*Lab03*/
int main(){
	int i;
	int a[5] = {1,2,3,4,5};
	int b[5] = {1,2,3,4,6};
	
	for(i=0;i<5;i++){
		if (a[i]!=b[i])
		printf("index %d is differnet\n", i);
	}
	return 0;
}
