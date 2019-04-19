#include<stdio.h>
//#include<conio.h>
int main()
{

  int res;         // number of resources
  int num;         // number of process
       
  int i,j,k,cnt,cnt1;
  int a[20],b[20];
  int n[20][20],alloc[20][20],m[20][20];

 printf("\nEnter number of process: ");
 scanf("%d",&num);

 printf("\n Enter  resources available : ");
 scanf("%d",&res);

 printf("\n Enter insatnces for resources :  \n");

 for(i=0; i<res; i++)
{  
  printf(" R%d ",i+1);
  scanf("%d",&a[i]);
}

 printf("\n Enter Allocation matrix:  \n");

 for(i=0; i<num; i++)
 {
 printf(" b%d ",i+1);         b[i]=0;

 for(j=0 ;j<res; j++)
 {
  scanf("%d", &alloc[i][j]);
 }
}

 printf("\n Enter maximum matrix:  \n");

 for(i=0; i<num; i++)
 {
 printf(" b%d ",i+1);
 for(j=0; j<res; j++)
 {
  scanf("%d", & m[i][j]);
 }
 }

 for(i=0; i<num; i++)
 {
 printf("\n b%d \t",i+1) ;
 for(j=0; j<res; j++)
 {
  n[i][j]=m[i][j]-alloc[i][j];
  printf("\t %d ",n[i][j]);
 }
 }

 k=0;     cnt1=0;
 printf("\n \n ");

 while(k<15)
 {
 for(i=0;i<num;i++)
 {  
 	cnt=0;

 for(j=0;j<res;j++)
 {
  if(b[i]==1) break;

  if(n[i][j]<=a[j])
  {
  cnt++;
  }

  if(cnt==res)
  {
  for(j=0;j<res;j++)
  {
  a[j]+=alloc[i][j];
  }

  printf(" b%d\t",i+1);  b[i]=1;     cnt1++;
  }
 }
 } 
 k++;
 }

 if(cnt1<num-1)
 {
 printf("\n deadlock ");
 }
     // getch();
 }
