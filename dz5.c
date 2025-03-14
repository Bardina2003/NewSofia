#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main () {

int i;
int a =5;
int b = 8;
int min = MIN(a,b);
for (i = 200;i<= 217; i++) {
	if (i % 17 == 0) {
		printf("ответ %d\n",i);
		printf("ответик2:%d\n", min);
		
	}

}
	return 0;
}
	
