#include <stdio.h>
/// program:1 Write a C program using a while loop to print 1 to 10
/*int main(){
    int a = 1;
    while(a<=10){
        printf("%d\n",a);
        a++;
    }
    return 0;
}*/
///program 2:Take a number from the user and print all its digits one by one.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    while(a>0){
        digital = a % 10;
        printf("%d\n",digital);
        a = a /10;
    }
    return 0;
}*/
///program 3:Take a number from the user find the sum of all digits.
/*/ main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int digital;
    int sum =0 ;
    while(a>0){
        digital = a % 10;
        sum = sum + digital;
        a = a/10;    
    }
    printf("%d",sum);
    return 0;
} */
///program 4:Count how many digits are in a number
/*int main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int digital;
    int count =0;
    while(a>0){
    count++;
     a =a/10;
    }
    printf("%d",count);
    return 0;
}*/
///PROGRAM 5:Find the largest digit in a number.
/*int main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int digital;
    int largest=0;
    while(a>0){
        digital = a%10;
        if(digital>=largest){
            largest = digital;
        }
        a = a/10 ;
    }
    printf("Largest = %d",largest);
    return 0 ;
}*/
///PROGRAM 6:Find the smallest digit in a number.
/*int main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int digital;
    int smallest =10;
    while(a>0){
    digital = a % 10;
    if (smallest>=digital){
    smallest = digital;
    }
    a = a/10;
    }
    printf("Smallest= %d",smallest);
    return 0;
}*/
///PROGRAM 7:Check whether a number is a palindrome using while.
/*int main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int digital;
    int sum = 0;
    int orginal = a;
    while(a>0){
       digital = a%10;
       sum = (sum * 10) + digital;
       a = a/10;
    }
    if (orginal == sum){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0 ;
}*/
