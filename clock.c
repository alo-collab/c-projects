#include <stdio.h>
#include <windows.h>

void main(){
    int h,m,s;
    int delay=1000; //delay of 1000ms
    printf("Set hours,minutes and seconds\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60){
        printf("Error");
        exit(0);
    }
    while(1){
        s++;
        if(s>59){ 
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(delay); //sleep function is available in #include <windows.h>
        system("cls");
    }
}