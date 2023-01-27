#include <stdio.h>

// For checking number is prime or not
void prime(int num) 
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\n%d\n", num);
    }
}

// For fetching the range
void primeRange(int l, int u){
    for(int i=l; i<=u; i++){
        prime(i);
    }
}

// For nth position
void nthPrime(int pos){
    int count=0;
    for(int k=1; k<=100000000; k++){
        int flag = 0,num=k+1;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            
            if (count != pos-1){
                count++;
            }
            else{
                printf("%d", num);
                break;
            }
        }
    }
}

// Main function
void main()
{
  //  int lowerran,upperran;
  //  scanf("%d %d", &lowerran, &upperran);
  //  primeRange(lowerran,upperran);
  int pos;
  scanf("%d",&pos);
  nthPrime(pos);
}