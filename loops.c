#include <stdio.h>
//===========================================================
//program 1: Basic
//============================================================
/*int main(){
    for (int i=2; i<=5; i++) {
        printf("Hello \n");
    }

}*/
//===========================================================
//program 2:Print numbers from 1 to 10 using a for loop
//============================================================
/*int main (){
    for(int i=1; i<=10; i++ ){
        printf("%d\n",i);
    }
    return 0;
}*/
//========================================================================
//program 3:Write a program to print numbers from 10 to 1 using a for loop.
//========================================================================
/*int main(){
    for(int i=10 ; i>=1 ; i--){
        printf("%d\n",i);
    }
    return 0;
}*/
//========================================================================
//program 4:Print all even numbers from 1 to 100 using a for loop.
//========================================================================
/*int main(){
    for(int i=2; i<=100; i=i+2){
        printf("%d\n",i);
    }
    return 0;
}*/
// useing if
/*int main(){
    for (int i=1; i<=100 ;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
//===============================================================================
//program 5:Write a program to print odd numbers from 1 to 100 using both methods:
//===============================================================================
/*int main(){
    for ( int i=1; i<=100; i+=2){
        printf("%d\n",i);
    }
    return 0;
}*/
//using if
/*int main(){
    for(int i=1; i<=100;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
//==========================================
//program 6:Sum of First 100 Natural Numbers
//===========================================
/*int main(){
    int n ,sum =0;
    printf("Enter number = ");
    scanf("%d",&n);
    for (int i=1; i<=n ; i++){
        sum =sum +i;
    }
    printf("%d\n",sum);
    return 0;
}*/
//==========================================
//program 7: Multiplication Table
//===========================================
/*int main(){
    int n ;
    printf("Enter = ");
    scanf("%d",&n);
    for (int i=1; i<=10; i++){
printf("%d x %d = %d\n ",n , i, n*i);
    }
    return 0;
}*/
//==============================================================
//program 8: Write a program to find the factorial of a number.
//=============================================================
/*int main (){
    int n , fact =1 ;
    printf("Enter =");
    scanf("%d",&n);
    for ( int i=1 ; i<=n ; i++){
          fact = fact *i;
    }
    printf("%d",fact);
    return 0;
}*/
//==============================================================
//program 9: Another way (reverse loop)
//=============================================================
/*int main (){
    int n , fact =1 ;
    printf("Enter =");
    scanf("%d",&n);
    for ( int i=n ; i>=1 ; i--){
          fact = fact *i;
    }
    printf("%d",fact);
    return 0;
}*/
//==============================================================
//program 10:Find the sum of even numbers from 1 to 100.
//=============================================================
/*int main(){
    int  sum = 0;

    for (int i=2; i<=100; i+=2){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}*/
// onther way
/*int main(){
    int sum = 0;
    for (int i=1; i<=100; i++){
    if(i%2==0){
        sum = sum + i;
    }
    }
    printf("%d\n",sum);
    return 0 ;
}*////================================================
//program 11:Find the sum of odd numbers from 1 to 100.
//====================================================
/*int main(){
    int sum = 0;
    for (int i=1; i<=100; i++){
    if(i%2!=0){
        sum = sum + i;
    }
    }
    printf("%d\n",sum);
    return 0 ;
}*/
//=======================================================================
//program 12:Write a program to print the squares of numbers from 1 to 10.
//=======================================================================
/*int main(){
    for (int i = 1; i<=10 ; i++){
    printf(" %d^2 = %d\n",i,i * i);
    }
    return 0;
}*/
//====================================================================
//program 13:write a program to print the cube of numbers from 1 to 10.
//=====================================================================
/*int main(){
    for (int i=1;i<=10;i++){
        printf("%d^3=%d\n",i,i*i*i);
    }
    return 0;
}*/
//=================================================================================================
//program 14:Write a program to print all numbers from 1 to 100 that are divisible by both 3 and 5.
//=================================================================================================
/*int main(){
    for (int i=1;i<=100;i++){
        if (i%3==0 && i%5==0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
//=================================================================================================
//program 15:Write a program to print all numbers from 1 to 100 that are divisible by  3 and 5.
//================================================================================================
/*int main(){
    for (int i=1;i<=100;i++){
        if (i%3==0 || i%5==0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
//==========================================================================================
//program 16:Write a program to count how many numbers between 1 and 100 are divisible by 7.
//==========================================================================================
/*int main(){
    int count= 0;
    for (int i=1;i<=100;i++){
       if(i%7==0){
        count++;
       }
    }
    printf(" Total numbers divisible by 7 = %d ",count);
    return 0;
}*/
//===================================================================
//program 17:Write a program to find the largest number from an array.
//===================================================================
/*int main(){
    int arr[] = {10 ,89,29,45,32,57};
    int largest = arr[0];
    for (int i=1; i<=6;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("Largest = %d",largest);
    return 0;
}*/
//=====================================================================
//program 18:Write a program to Count the Number of Digits in a Number.
//=====================================================================
/*int main(){
    int n;
    printf("Enter = ");
    scanf("%d", &n);
    int count =0;
    for (;n>0;){
        count++;
        n=n/10;
    }
    printf(" Number of digits = %d",count);
    return 0;
}*/
