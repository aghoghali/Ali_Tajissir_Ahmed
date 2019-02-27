#include<stdio.h>
int cnt(char c[]){
    int i = 0;
    while(c[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char cn[16];
    while(1){
        printf("\nEnter a card number: ");
        scanf("%s",&cn);
        if(cnt(cn)==16){
            if(cn[0]=='4'){
                printf("\nthe card is Visa");
            }
            else if (cn[0]=='5'){
                printf("\nthe card is MasterCard");
            }
            else{
                printf("\nUnknown card number");
            }
        }
        else {
            printf("\nUnknown Card type");
        }
    }

}

