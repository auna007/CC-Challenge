#include "my_mastermind.h"
#include <stdio.h>

int main(int argc, char** argv){

    int default_attempt = 10;
    char* secret_code = malloc(5 * sizeof(char));
    secret_code = ret_secret_code(argc,argv);

    if(ret_attempt_limit(argc,argv) > 0)
        default_attempt = ret_attempt_limit(argc,argv);

    if(secret_code == NULL)
        secret_code = random_generator();

    printf("sec code %s\n", secret_code);

    game_start(default_attempt, secret_code);
      
}
