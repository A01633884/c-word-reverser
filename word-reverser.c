#include <stdio.h>

#define MAX 1000

int main(){
    char c;
    char word[MAX];
    int i = 0;
    int init = 0;
    int wordSize = -1;
    int temp;

    while ( (c = getchar()) != '\n' && c != EOF ) {
	word[i++] = c;
    }


    for (i = 0; word[i] != '\0'; ++i){
        wordSize = wordSize + 1;

    }

    while(wordSize > init){
        temp = word[init];
        word[init] = word[wordSize];
        word[wordSize] = temp;

        ++init;
        --wordSize;
    }

    printf("%s\n", word);
    
    return 0;
}
