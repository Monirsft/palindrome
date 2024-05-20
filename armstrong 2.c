#include<stdio.h>
int main(){
int num,reminder,sum=0,temp;
scanf("%d",&num);
temp=num;
while(num!=0){
    reminder=num%10;
    num=num/10;
    sum=sum+reminder*reminder*reminder;

}
if(temp==sum){
printf("armstrong");
}
else{
 printf(" not armstrong");
}
}
