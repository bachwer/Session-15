#include <stdio.h>
#include <string.h>

int main(void) {
    char string[1000];
    int temp = 0;
    int index = 0;
    printf("Nhap linh tinh: ");
    fgets(string, 100, stdin);

    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == ' ') {
            temp = 0;
        }else if(temp == 0) {
            temp = 1;
            index++;
            if(string[i] >= 'a' && string[i] <= 'z') {
                string[i] = string[i] - 'a' + 'A';
            }
        }
    }
    for(int i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);
    }
}
