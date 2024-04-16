#include "my_mastermind.h"

int my_isAlpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ))
        return 1;

    return 0;
}

int my_strlen(char* string)
{
    int length = 0;
    for (int i = 0; string[i] !='\0'; i++)    
        length = length + 1;

    return length;
}

int isNumber(char* s)
{
    for (int i = 0; s[i] !='\0'; i++)
        if (my_isAlpha(s[i]) > 0)
            return true; 
    
    return false; 
}

int my_strcmp(char *a,char *b)  
{  
    int flag=0;  
    while(*a!='\0' && *b!='\0')  
    {  
        if(*a!=*b)   
            flag=1;  
     
        a++;  
        b++;  
    }   
    if(flag==0)  
        return 0;  
    else  
        return 1;  
}  

char* ret_secret_code(int argc, char* string[]){
    int i = 1;
    char** string_argv = malloc(100*sizeof(char));
    char* code= malloc(100*sizeof(char));
    string_argv = string;

    while(i < argc){ 
        if(my_strcmp(string_argv[i], "-c") == 0)
            code = string_argv[i+1];

        if(i+1==argc && my_strlen(code) == 0)
            code = random_generator();
            
        i++;
    }
    return code;
}

int ret_attempt_limit(int argc, char* string[]){
    int i = 1;
    char** string_argv = malloc(10*sizeof(char));
    int limit =0;
    string_argv = string;
    
    while(i < argc){ 
        if(my_strcmp(string_argv[i], "-t") == 0) 
            limit = atoi(string_argv[i+1]);
        
        i++;
    }
    return limit;
}

int game_start(int attempt_limit, char* secret_code){
    char guess_secret_code;
    bool check = false;
    char* guess_string = malloc(sizeof(char) * 5);
    int correct_match = 0;
    int user_attempts = 0; 
    int missed_match = 0;

    printf("Will you find the secret code?\nPlease enter a valid guess\n");
    while(user_attempts < attempt_limit) {
        if(check == false){ 
            printf("---\nRound %d\n", user_attempts);
        }
        
        guess_secret_code = read(0, guess_string, 5);
        if(guess_secret_code == '\0'){
            return EXIT_SUCCESS;
        }
        
        if((check = isNumber(guess_string)) == true){
            printf("Wrong input!\n");
            continue;
        } 

        for(int j=0; j < my_strlen(secret_code); j++)
        {   
            if(secret_code[j] == guess_string[j])
                correct_match++; 
            
            for(int k=0; k < my_strlen(guess_string); k++)
                if(secret_code[j] == guess_string[k] && j !=k)
                missed_match++; 
                
        }

        if(missed_match == 0 && correct_match == 4){
            printf("Congratz! You did it!\n");
            return 0;
        }            
        else {
            printf("Well placed pieces: %d\n", correct_match);
            printf("Misplaced pieces: %d\n", missed_match);
            correct_match = 0;
            missed_match = 0; 
        }            
        user_attempts++;

        if(user_attempts == attempt_limit)
            printf("\nOoops! GAME OVER \n");
        
    }
    
    free(guess_string);
    return 0;
}
