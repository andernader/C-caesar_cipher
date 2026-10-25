#include <stdio.h>

int main(void){
    char str[80];
    printf("Enter a sentence to encrypt: \n");
    //Store input in str[80]
    for(int i = 0; i < (int)sizeof(str); i++){
        str[i] = getchar();
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }

    int shift_amount;
    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 'a' + shift_amount) % 26 + 'a';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (str[i] - 'A' + shift_amount) % 26 + 'A';
    }

    for(int i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}
