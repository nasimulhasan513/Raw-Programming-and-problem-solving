#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i,j,str_lenth;
    while(gets(str)){
    str_lenth=strlen(str);
    int strlenth=str_lenth-1;
    for(i=strlenth;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
