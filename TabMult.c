#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


static int score;

int rdm(){
	return rand() % 10 +1
}

int main(){
	int m, l, resul;

while (1) {
	 m = rdm();
	 l = rdm();


	 printf( "%d * %d\n" , m , l);
	 printf(">");
	 scanf("%d" , &resul);

     }


    return 0;
}