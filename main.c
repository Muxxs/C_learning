//
//  main.c
//  C-homework
//
//  Created by 王蛟 on 2019/11/19.
//  Copyright © 2019 王蛟. All rights reserved.
//  北邮大一C语言

#include <stdio.h>

int first(){
    // insert code here...
    int a,b;
    scanf("%d,%d", &a, &b);
    int x=0;
    int d=1;
    int all=0;
    d=1;
    x=a;
    for (; a<=b; x=a) {
        while (d<a) {
            if (a%d==0) {
                all=all+d;
            }
            d++;
        }
        d=1;
        if (all==x){
            d=1;
            printf("%d=",all);
            int time=0;
            while (d<a) {
                if (time==0){
                    printf("1");
                    time++;
                    d++;
                }else{
                    if (a%d==0) {
                        printf("+");
                        printf("%d",d);
                    }
                    d++;
                }
            }
            printf("\b");
            printf("\n");
            all=0;
        }
        all=0;
        a++;
    }
    return 0;
}

int second(){
    int a,b;
    scanf("%d,%d", &a, &b);
    int x=1;
    int now=0;
    int time=0;
    for (;a<=b;){
        now=a;
        printf("%d=",now);
        for ( ; x<now; ) {
            x++;
            if (now%x==0){
                if (time>0){
                    printf("*");
                }else{
                    printf("");
                    time++;
                }
                now=now/x;
                printf("%d",x);
            }
        }
        printf("\n");
        time=0;
        x=1;
        a++;
    }
    return 0;
}

int third(){
    int Hang,x=0;
    scanf("%d",&Hang);
    for (; x<Hang; ) {
        x++;
        int a,b,c,d,e,yes=0;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        int all=242,time=0,now=0;
        for (; time<=242; ) {
            
            int right_now=0;
            int here;
            here=a;
            right_now=time%3;
            if (right_now==0){
                now=now;
            }else if (right_now==1){
                now=now+here;
            }else{
                now=now-here;
            }
            
            here=b;
            right_now=(time/3)%3;
            if (right_now==0){
                now=now;
            }else if (right_now==1){
                now=now+b;
            }else{
                now=now-b;
            }
            
            here=c;
            right_now=(time/3/3)%3;
            if (right_now==0){
                now=now;
            }else if (right_now==1){
                now=now+here;
            }else{
                now=now-here;
            }
            
            here=d;
            right_now=(time/3/3/3)%3;
            if (right_now==0){
                now=now;
            }else if (right_now==1){
                now=now+here;
            }else{
                now=now-here;
            }
            
            here=e;
            right_now=(time/3/3/3/3)%3;
            if (right_now==0){
                now=now;
            }else if (right_now==1){
                now=now+here;
            }else{
                now=now-here;
            }
            //printf("%d",now);
            if (now==24) {
                printf("YES\n");
                yes=1;
                break;
            }
            time++;
        }
        if (yes==0){
            printf("NO\n");
        }
        time=0,yes=0;
        a=0;b=0;c=0;d=0;e=0;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    //first();
    //second();
    third();
    return 0;
}
