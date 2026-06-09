#include<stdio.h>
#include<stdlib.h>
int *arr=NULL;
int n=0;
void addnumber(){
	printf("enter how many numbers to be enter in ");
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void display()
{
	printf("displaying the numbers");
	for(int i=0;i<n;i++){
         printf("\n %d:the numbers are : [%d]",i+1,arr[i]);
	}
	
}
void deletelast(){
	n--;
}
void freearray(){
	free(arr);
}
int main(){
   /*  int *arr=malloc(2*sizeof(int));
     arr[1]=10;
     arr[2]=20;
     printf("%d and %d",arr[1],arr[2]);*/
 int choice=0;
 do{
	 printf("/n 1.add  number");
	 printf("/n 2.display");
	 printf("/n 3.delete last");
	 printf("/n 4.free array");
	 printf("/n 5.exit");
	 printf("/n enter the choice");
	 scanf("%d",&choice);
	 if(choice==1){
		 addnumber();
	 }
	 else if(choice==2){
		 display();
	 }
	 else if(choice==3){
		 deletelast();
	 }
	 else if(choice==4){
		 freearray();
	 }
 }while(choice!=5);
 return 0;
}
