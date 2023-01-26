#include<stdio.h>

//checking armstrong or not
void checkArmstrong(int num){
    int cpynum,mul=1,len=0,rem,sum=0;
    cpynum = num;
    while (num != 0)
    {
        num = num / 10;
        len++;
    }

    num = cpynum;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        for (int i = 1; i <= len; i++)
        {
            mul *= rem;
        }
        sum += mul;
        mul = 1;
    }
    if(sum==cpynum)
        printf("%d ",sum);
}

//print armstrong in range
void findArmstrong(int a, int b){

    for(int i=a;i<=b;i++){
        checkArmstrong(i);
    }
}

//main function
void main(){
    int lowerlim, upperlim;
    scanf("%d %d",&lowerlim,&upperlim);
    findArmstrong(lowerlim,upperlim);
}