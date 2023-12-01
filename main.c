#include <stdio.h>


int pgcd (int a , int b){
    if (a==b)return a;
    else {
    if (a==0)return b;

   else {
        if(b==0)return a;
        else {
   if(a>b)return pgcd(a-b,b);
   else
       return pgcd(a,b-a);
      }
    }
  }


     }



int main(void)
{
int x,y,z;
printf("pour calculer le PGCD donner les 2 nombres \n ");
scanf("%d",&x);
scanf("%d",&y);
z=pgcd(x,y);
printf(" PGCD(%d,%d)=%d  \t \n",x,y,z);
    return 0;
}

