#include<stdio.h>
#include<math.h>
int main(){
int n1,n2;
printf("Enter the two numbers to compute:");
scanf("%d %d",&n1,&n2);
printf("**********WELCOME KEERTHANA************\n");
printf("#######################################");
printf("\n 1.SELECT ONE FOR ADDITION\n 2.SELECT TWO FOR SUBTRACTION\n 3.SELECT THREE FOR MULTIPLICATION \n 4.SELECT FOUR FOR DIVISION\n 5.SELECT FIVE FOR MODULO DIVISION\n 6.SELECT SIX FOR EXPONENTIATION\n 7.SELECT SEVEN FOR DISPLAYING THE NUMBERS YOU HAVE GIVEN TO COMPUTE\n");
printf("Select any one number mentioned above to perform operation...\n");
int choice;
printf("enter your choice:");
scanf("%d",&choice);
if(choice==1){
    printf("The sum of %d and %d is %d",n1,n2,n1+n2);
}
else if(choice==2){
    printf("The difference of %d and %d is %d",n1,n2,n1-n2);
}
else if(choice==3){
    printf("The product of %d and %d is %d",n1,n2,n1*n2);
}
else if(choice==4){
    printf("The division of %d by %d is %d",n1,n2,n1/n2);
}
else if(choice==5){
    printf("The remainder when %d divides %d is %d",n1,n2,n1%n2);
}
else if(choice==6){
    int exp=pow(n1,n2);
    printf("The difference of %d and %d is %d",n1,n2,exp);
}
else if(choice==7){
    printf("The first number is %d and second number is %d\n",n1,n2);
}
else{
    printf("Enter valid choice");
}
return 0;
}
