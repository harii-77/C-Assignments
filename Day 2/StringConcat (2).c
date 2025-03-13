#include<stdio.h>

char* strConcat(char* str1, char* str2, char* res); 

int main(){
    // char str1[] = "hari", str2[] = "haran";
    char str1[100], str2[100];
    // printf("Input: ");
    scanf("%s", &str1);
    scanf("%s", &str2);
    char res[100];
    strConcat(str1, str2, res);
    printf("%s", res);
    return 0;
}

char* strConcat(char* str1, char* str2, char* res) {
    while(*str1){
        *res = *str1;
        *str1++;
        *res++;
    }

    while(*str2){
        *res = *str2;
        *str2++;
        *res++;
    }

    *res = '\0'; 
    return res;
}