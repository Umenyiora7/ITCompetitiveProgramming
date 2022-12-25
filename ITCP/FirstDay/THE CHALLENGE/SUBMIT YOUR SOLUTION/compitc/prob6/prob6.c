#include"stdio.h"
#include"malloc.h"
#include"math.h"

int distmin(int t[10],int n,int v){
int i;
for(i=0;i<n;i++){
if(t[i]==v){ return i;}
}
return (-1);
}

int main(){
int t[10]={ 1, 2, 3, 4 };
printf("%d\n",distmin(t,4,1));
printf("%d",distmin(t,4,10));

return 0;

}