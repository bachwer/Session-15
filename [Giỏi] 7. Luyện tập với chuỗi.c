#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(void) {
    char string[1000];
    int character = 0;
    int number = 0;
    int spCharacterl = 0;

    printf("Nhap linh tinh: ");
    fgets(string, 100, stdin);

    for(int i = 0; i < strlen(string); i++) {
        if(isdigit(string[i])) {
            number++;
        }else if(islower(string[i]) ||isupper(string[i])) {
            character++;
        }else if(string[i] == ' ') {
            continue;
        }else {
            spCharacterl++;
        }
    }
    printf("character: %d\n", character);
    printf("number: %d\n", number);
    printf("spCharacterl: %d\n", spCharacterl - 1);


}
