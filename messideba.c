#include <stdio.h>

// checking armstrong or not
void checkArmstrong(int num)
{
    int cpynum, mul = 1, len = 0, rem, sum = 0;
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
    if (sum == cpynum)
        printf("%d ", sum);
}

// print armstrong in range
void findArmstrongInRange(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        checkArmstrong(i);
    }
}

void nthArmstrong(int f)
{   int counter=0;
    for (int i = 0; i <= 1000000000; i++)
    {
        int cpynum, num = i, mul = 1, len = 0, rem, sum = 0;
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
        if (sum == cpynum)
        {
            if(counter!=f-1){
                counter++;
            }
            else{
                printf("%d th Armstrong number is : %d", counter+1, sum);
                break;
            } 
        }
    }  
}

// main function
void main()
{
    //  int lowerlim, upperlim;    // int num;
    //  scanf("%d %d",&lowerlim,&upperlim);    //  scanf("%d", &num);
    //  findArmstrongInRange(lowerlim,upperlim);
    //  nthArmstrong(num);
    //  checkArmstrong(num);
}