#include<stdio.h>
void fib(int,int);
int trans_fib(int);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int res = trans_fib(num);
    printf("final transformed number:%d\n",res);
    return 0;
}

void gen_fib(int fib[],int y){
    fib[0] = 1;
    fib[1] = 1;
    for (int i=2;i<y;i++){
        fib[i] = fib[i-1]+fib[i-2];
        if (fib[i]>100){
            fib[i] = 0;
            break;
        }

    }
}
int trans_fib(int n){
    int fib[15];
    gen_fib(fib,15);
    int trans = 0, mul = 1;
    while (n>0){
        int dig = n%10;
        n/=10;
        for (int i=0;fib[i] != 0;i++){
            if(fib[i]>= dig){
                trans = trans + fib[i]*mul;
                break;
            }
        }
        mul*=10;
    }
    return trans;
}
