#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    int c;
    int hCount = 0;
    int tCount = 0;
    char name[20];

    printf("Who are you ?\n");
    scanf("%s",name);
    printf("Hello,%s!\n",name);

    printf("Tossing a coin...\n");
    
    for(int i=0; i<3; i++){
       stand((unsigned int)time(NULL));
       c = rand() % 2 + 1;
       if(c == 1) {
        printf("Round %i: Heads\n",i);
	hCount++;
       }
       else if(c == 2) {
        printf("Round %i: Tails\n",i);
	tCount++;
       }
    }
    
    printf("Head: %hCount, Tails: %tCount",hCount,tCount);

    if(hCount > tCount) printf("%s won!",name);
    else  printf("%s lose!",name);

    return 0;
    
}
