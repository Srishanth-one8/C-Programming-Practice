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
int main (){
    int n , fact =1 ;
    printf("Enter =");
    scanf("%d",&n);
    for ( int i=1 ; i<=n ; i++){
          fact = fact *i;
    }
    printf("%d",fact);
    return 0;
}
