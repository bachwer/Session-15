#include <stdio.h>
#include <string.h>

int main(void) {
    char string[1000];
    char charater;
    int charaterNum[1000];
    printf("Nhap linh tinh: ");
    fgets(string, 100, stdin);

    for(int i = 0; i < strlen(string); i++) {
        int index = 0;
        for(int j = 0; j < strlen(string); j++) {
            if(string[i] == string[j]) {
                index++;
            }
        }
        charaterNum[i] = index;
    }
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == ' ') { continue;}
        printf(" %c : %d\n", string[i], charaterNum[i]);
    }
}
