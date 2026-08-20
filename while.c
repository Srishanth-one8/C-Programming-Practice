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
///PROGRAM 8:Check whether a number is an Armstrong number using while.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int sum = 0;
    int orginal = a;
    while(a>0){
    digital = a%10;
    sum = sum + (digital * digital * digital);
    a = a/10;
    }
    if ( orginal == sum){
        printf("Armstrong Number");
    }
    else{
        printf("NOt Armstrong Number");
    }
    return 0;
}*/
///PROGRAM 9:Use a while loop to find the factorial of a number.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int fact = 1;
    int i = 1;
    while(i<=a){
    fact = fact * i;
    i++;
    }
    printf ("%d",fact);
    return 0;
}*/
///PROGRAM 10:Find the sum of all numbers from 1 to n.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int sum = 0;
    int i = 1;
    while(i<=a){
    sum = sum + i;
    i++;
    }
    printf("%d",sum);
    return 0 ;
}*/
///PROGRAM 11:Using a while loop, print all the even numbers from 1 to n.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int i = 1;
    while(i<=a){
        if(i%2==0){
            printf("%d\n",i);
        }
       i++;
    }
    return 0 ;
}*/
///PROGRAM 12:Count how many even digits are present in a number.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int count = 0;
    while(a>0){
    digital = a%10;
    if (digital % 2 == 0){
        count++;
    }
    a = a/10;
    }
    printf("EVEN DIGITS = %d",count);
    return 0;
}*/
///PROGRAM 13:Count how many odd digits are present in a number.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int count = 0;
    while(a>0){
        digital = a % 10;
        if (digital % 2 !=0 ){
            count++;
        }
    a = a/10;
    }
    printf("ODD DIGITS:%d",count);
    return 0;
}*/
///PROGRAM 14:Find the sum of only the even digits in a number.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int sum = 0;
    while(a>0){
        digital = a % 10;
        if (digital % 2 == 0){
        sum = sum + digital;
        }
        a = a/10;
    }
    printf("SUM OF EVEN DIGIYTS = %d",sum);
    return 0;
}*/
///PROGRAM 15:Find the sum of only the odd digits in a number.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int sum = 0;
    while(a>0){
        digital = a % 10;
        if (digital % 2 != 0){
        sum = sum + digital;
        }
        a = a/10;
    }
    printf("SUM OF ODD DIGIYTS = %d",sum);
    return 0;
}*/
///PROGRAM 16:Count how many times a particular digit appears in a number.
/*int main(){
    int a;
    int b;
    printf("ENTER NUMBER = ");
    scanf("%d",&a);
     printf("ENTER DIGIT = ");
    scanf("%d",&b);
    int digital;
    int count = 0;
    while(a>0){
        digital = a % 10;
        if ( digital == b){
            count++;
        }
        a = a/10;
    }
    printf("%d appears %d times",b,count);
    return 0;
}*/
///PROGRAM 17:Find the first digit of a number using while.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    while(a>=10){
        a = a/10;
    }
    printf("%d",a);
    return 0;
}*/
//PROGRAM 18:Find the last digit and first digit of a number, then add them.
/*int main(){
    int a;
    printf("ENTER  = ");
    scanf("%d",&a);
    int b = a;
    while(a>0){
        a = a % 10;
        break;
    }
    while(b>=10){
        b = b/10;
    }
    printf("FIRST = %d\n",b);
    printf("LAST = %d\n",a);
    printf("SUM = %d\n",a+b);
    return 0;
}*/
//PROGRAM 19:Find the difference between the first digit and last digit.
/*int main(){
    int a;
    printf("ENTER  = ");
    scanf("%d",&a);
    int b = a;
    while(a>=10){
        a = a/10;
    }
    while(b>0){
        b = b % 10;
        break;
    }
    printf("FIRST = %d\n",a);
    printf("LAST = %d\n",b);
    if (a - b >= 0)
    printf("+%d", a - b);
    else
    printf("%d", a - b);
    printf("SUM = %d",a-b);
    return 0;
}*/
//PROGRAM 20:Count the number of digits that are greater than 5
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int count = 0;
    while(a>0){
    digital = a % 10;
    if(digital>5){
        count++;
    }
    a = a/10;
    }
    printf("COUNT = %d",count);
    return 0;
}*/
//PROGRAM 21:Find the sum of digits greater than 5.
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int count = 0;
    while(a>0){
        digital = a % 10;
        if( digital > 5){
            count = count + digital;
        }
        a = a/10;
    }
    printf("SUM = %d",count);
    //PROGRAM 22:Find the second largest digit
/*int main(){
    int a; 
    printf("ENTER = ");
    scanf("%d",&a);
    int digital;
    int largest = 0 ;
    int second = 0;
    while(a>0){
         digital = a % 10;
    if (digital > largest ){
       second = largest;
       largest = digital;
    }
    else if (digital > second){
        second = digital;
    }
    a = a / 10;
}
    printf("LARGEST = %d\n",largest);
    printf("SECOND = %d\n",second);
    return 0;
}*/
//PROGRAM 23:Count how many zeros are in a number
/*int main(){
    int a;
    printf("ENETER = ");
    scanf("%d",&a);
    int digital;
    int found = 0;
    while(a>0){
        digital = a % 10;
        if( digital == 0 ){
            found = 1;
        }
        a = a / 10;
    }
    if (found == 1){
        printf("contains 0");
    }
    else{
        printf("does not contain 0");
    }
    return 0;
}*/
//PROGRAM 24:Check whether a number is divisible by 3 and 5 at the same time
/*int main(){
    int a;
    printf("ENTER = ");
    scanf("%d",&a);
    while(a>0){
        if(a%3 == 0 && a%5 == 0){
            printf("DIVISIBLE BY BOTH 3 AND 5");
            break;
        }
        else{
            printf("NOT DIVISIBLE BY BOTH 3 AND 5");
            break;
        }
    }
    return 0;
}*/
//PROGRAM 25:Every 5 bottles make one complete box.Find how many complete boxes can be made
/*int main(){
    int a;
    printf("INPUT = ");
    scanf("%d",&a);
    int count = 0;
    while(a>=5){
        count++;
        a = a - 5;
    }
    printf("complete boxes = %d\n",count);
    printf("Bottel left %d\n",a);
    return 0;*/
//PROGRAM 26:Keep asking until the user guesses 7 correctly.   
/*int main(){
    int q;
    printf("ENTER GUESS = ");
    scanf("%d",&q);
    while(q>=0 || q<=-1){
        if (q == 7 ){
            printf(" CORRECT\n");
            break;
        }
        else{
            printf("Wrong guess\n");
            printf("ENTER GUESS = ");
            scanf("%d",&q);
           }
    }
}*/
//PROGRAM 27:Keep adding numbers until the user enters 0
/*int main(){
    int a;
    printf("ENTER NUMBER = ");
    scanf("%d",&a);
    int sum = 0;
    while(a != 0){
    sum = sum + a;
    printf("ENTER NUMBER = ");
    scanf("%d",&a);    
}
printf("SUM = %d",sum);
return 0;
}*/
//PROGRAM 28:Menu-driven program.Create a program that repeatedly shows:1. Add 2. Subtract 3. Exit
/*int main(){
    int a = 0;
    int b;
    int c;
    int sum = 0;
    int difference = 0;
    while( a !=3){
        printf("1: Add\n");
        printf("2: Subtract\n");
        printf("3: Exit\n");
        printf("Enter choice = ");
        scanf("%d",&a);
        if (a == 3){
            printf("Program ended");
            break;
        }
        else if( a == 1) {
            printf("Enter first number = ");
            scanf("%d",&b);
            printf("Enter second number = ");
            scanf("%d",&c);
            sum  = b + c;
            printf("Sum = %d\n",sum);
        }
        else if( a == 2){
            printf("Enter first number = ");
            scanf("%d",&b);
            printf("Enter second number = ");
            scanf("%d",&c);
            difference  = b - c;
            printf("Difference = %d\n",difference);
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}*/
//Program 29:Write a program that keeps asking the user to enter numbers and adds them together.Stop when the total becomes greater than 100.
/*int main(){
    int a ;
    int sum = 0;
    while( sum<100){
        printf("Enter number = ");
        scanf("%d",&a);
        sum = sum + a;
        printf("Total = %d\n",sum);
    }
    printf("Total crossed 100");
    return 0;
}*/
//Program 30:Write a program that keeps asking for numbers and stops when the user enters a negative number. At the end, print the sum of only the positive numbers.
/*int main(){
    int a;
    printf("Enter = ");
    scanf("%d",&a);
    int sum = 0;
    while( a>=0 ){
        sum = sum + a;
        printf("Enter = ");
        scanf("%d",&a);
   }
   printf("sum = %d\n",sum);
   return 0;
}*/
//Program 31: Average of numbers
int main() {
    int a;
    int b;
   printf("HOW MANY NUMBERS = ");
    scanf("%d", &a);
    int count = 0;
    int sum = 0;
    float average;
    while (count < a) {
        printf("Enter number = ");
        scanf("%d", &b);

        sum = sum + b;
        count++;
    }
    average = (float)sum / a;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
