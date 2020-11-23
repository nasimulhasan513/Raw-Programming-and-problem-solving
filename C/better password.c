#include<stdio.h>
int main(){
    char pass[16];
    gets(pass);
    pass[0]=pass[0]+'32';
    int i;
    for(i=0;i<16;i++){
        if(pass[i]=='s'){
            pass[i]='$';
        }
        if(pass[i]=='o'){
            pass[i]='()';
        }
    }
    puts(pass);
    return 0;
}
