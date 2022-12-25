#include"stdio.h"
#include"malloc.h"
typedef struct Maillon {
int val;
struct Maillon *suiv;
}Maillon;

typedef Maillon*Liste;

Liste fuss(Liste L1,Liste L2){
Liste p1,p2,pp1,pp2,R;

if((L1==NULL)&&(L2!=NULL)){
R=L2;
}
else{
if((L1!=NULL)&&(L2==NULL)){R=L1;}
}
if((L1!=NULL)&&(L2!=NULL)){
p1=L1; pp1=p1->suiv;
R=L1;
pp2=L2;

if(L2->val<L1->val){
p1=L2; pp1=p1->suiv;
R=L2;
pp2=L1;
}


while((pp1!=NULL)&&(pp2!=NULL)){
if(pp2->val < pp1->val){
p1->suiv=pp2;
p2=pp2;
pp2=pp2->suiv;
p2->suiv=pp1;
p1=p1->suiv;
}else{
pp1=pp1->suiv;
p1=p1->suiv;
}

}
if(pp2!=NULL){
if(pp2->val>p1->val){
p1->suiv=pp2;
}}
}

return R;
}
Liste allouer(){
return((Liste) malloc (sizeof(Maillon)));
}
void insert (Liste *p){
Liste q,f;
q=allouer();
printf(" entrer valeur = ");
scanf("%d",&q->val);
q->suiv= NULL;
 if(*p == NULL){
           *p=q;}else{
        f=*p;
       while(f->suiv != NULL){f=f->suiv;}
        f->suiv=q;
      }
}



int main(){
Liste L1,L2,R; int cpt,cpo;
int i;
L1=NULL;
printf("L1\n");
cpt=0;
for(i=1;i<=5;i++){
cpt++;
insert(&L1);
             }


printf("L2\n");
for(i=1;i<=3;i++){
insert(&L2);
             }
R=fuss(L1,L2);
cpo=0;
while(R != NULL){
cpo++;
if(cpt==cpo){printf("\n");}else
printf("%d -> ",R->val);
R = R->suiv;
}
 scanf("%p",R);

return 0;

}