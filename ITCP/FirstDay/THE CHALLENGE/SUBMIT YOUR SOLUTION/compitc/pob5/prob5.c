#include"stdio.h"
#include"malloc.h"
#include"math.h"

float distmin(int x1,x2,y1,y2){
return(sqrt(((x1-x2)^2)+((y1-y2)^2)));
}

int main(){
int i,n;
int x1,y1,x2,y2;
float min;
scanf("%d",&n);
scanf("%d",&x1);
scanf("%d",&y1);
scanf("%d",&x2);
scanf("%d",&y2);

min=distmin(x1,x2,y1,y2);
printf("%f",min);

for(i=2;i<=n;i=i++){
scanf("%d",&x1);
scanf("%d",&y1);
scanf("%d",&x2);
scanf("%d",&y2);
if(min>distmin(x1,x2,y1,y2)){
min=distmin(x1,x2,y1,y2);}

}
printf("%f",min);

return 0;

}