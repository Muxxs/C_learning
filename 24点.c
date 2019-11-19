#include <stdio.h>
int main(){
    int Hang,x=0;
    scanf("%d",&Hang);
    char all[50]="";
    for (; x<Hang; ) {
        x++;
        int a,b,c,d,e,yes=0;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        int time=0,now=0;
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
            if (now==24) {
                strcat(all,"YES\n");
                yes=1;
                break;
            }
            time++;
        }
        if (yes==0){
            strcat(all,"NO\n");
        }
        (void)(time=0),yes=0,a=0,b=0;c=0;d=0;e=0;
    }
    printf("%s", all);
    return 0;
}
