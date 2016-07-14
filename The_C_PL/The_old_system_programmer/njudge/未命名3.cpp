#include<stdio.h>
int main(){
    int hour;
    while(1){
        scanf("%d:%d", &hour, &minute);
        if(hour<12){
            printf("%d:%.2dAM\n", hour, minute);
        } else if(hour==12 && minute==0){
            printf("%d:%.2dPM\n", hour, minute);
        } else if(hour==24 && minute==0){
            printf("%d:%.2dAM\n", hour-12, minute);
        } else {
            printf("%d:%.2dPM\n", hour-12, minute);
        }
    }
    return 0;
}
