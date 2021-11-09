# include <stdio.h>
 main(){
        int num1,num2;
        printf("Enter the numerator and the denominator using the / operator :\n");
        scanf("%d/%d",&num1,&num2);
        if(num1 == 0 || num2 == 0){
            printf("Either the numerator or denominator is equal to zero.");
        }
        gcd(num1,num2);
}
gcd(int num1,int num2){
    int GCD;
    if(num1 < num2){
        GCD = num1;
    }else{
        GCD = num2;
    }
    while(GCD > 1){
        if(num1 % GCD == 0 && num2 % GCD == 0)
        break;
        GCD--;
    }
    printf("The original fraction entered was:%d/%d\n",num1,num2);
    printf("The simplest form of the fraction above is:%d/%d\n",num1/GCD,num2/GCD);
}
