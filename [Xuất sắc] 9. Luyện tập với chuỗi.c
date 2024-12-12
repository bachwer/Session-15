#include <stdio.h>
#include <string.h>

int main(void) {
    char string[1000];
    char charater;
    int pos = 0;
    printf("Nhap linh tinh: ");
    fgets(string, 100, stdin);
    printf("Nhap ki tu can xoa: ");
    scanf("%c", &charater);
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == charater) {
            pos = i;
            for(int i = pos; i < strlen(string); i++) {
                string[i] = string[i + 1];
            }
        }
    }
    if(!pos) {
        printf("khong co phan tu do");
    }

    for(int i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);
    }

}
