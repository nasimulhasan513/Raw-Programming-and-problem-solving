#include<stdio.h>
int main(){
    float total_money;
    float notes[7]={100.00,50.00,20.00,10.00,5.00,2.00};
    float coins[7]={1,0.50,0.25,0.10,0.05,0.01};
    int j,coin;
    float due,due_coin,k;
    int i;

    scanf("%f",&total_money);
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        j=total_money/notes[i];
        due=fmod(total_money,notes[i]);
        total_money=due;
        printf("%d nota(s) de R$ %.2f\n",j,notes[i]);
        if(due<2){
            k=due;
        }
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++){
        coin=k/coins[i];
        due_coin=fmod(k,coins[i]);
        k=due_coin;
        printf("%d moeda(s) de R$ %.2f\n",coin,coins[i]);
    }
    return 0;
}
