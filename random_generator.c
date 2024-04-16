#include "my_mastermind.h"

#define randrange(N) rand() / (RAND_MAX/(N) + 1)
#define MAX 7 
int distinct_colors[5];
int colors[MAX];
char result[5];

char* random_generator() {
int i;
srand(time(NULL)); 

for (i=0; i<MAX; i++) colors[i] = i;

for (i = 0; i < MAX-1; i++)
{
    int c = randrange(MAX-i);
    int t = colors[i];
    colors[i] = colors[i+c];
    colors[i+c] = t;
}

for (i=0; i<4; i++)
    distinct_colors[i] = colors[i] + 1;

for (i=0; i<4;i++)
    result[i] = '0' + distinct_colors[i];

return result;
} 
