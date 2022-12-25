#include"stdio.h"
#include"stdlib.h"


int strToInt(char*ch) {
    if(strlen(ch)>0){
    int number = 0;
    int n=strlen(ch);
    for(int i=0; i<n; i++)
        number= number*10 + (*(ch+i)-'0');
    return number;}else{printf("bad string");}
}
int main(){
char ch[2]="8";
int c;
c=strToInt(ch);
printf("%d",c);



}