#include <stdio.h>
//===========================================================================
/////program 1
/1===========================================================================
/*int main(){
    int age;
    printf("Plese Enter your age =");
    scanf("%d",&age);
    if(age >=18){
        printf("Able to vote");
        }
    else{
        printf("Your not able to Vote");
    }
    return 0;
}*/
//===========================================================================
// program 2 a: check if number is even or odd
//===========================================================================
/*int main(){
  int a;
  printf("Please enter you number=");
  scanf("%d",&a);
  if(a/=2){
    printf("The number is Even ");
  }
  else{
    printf("The number is odd");
  }
  return 0;
}*/
//===========================================================================
/////////program 2b: 
//===========================================================================
/*int main(){
    int b;
    printf("Enter your number = ");
    scanf("%d",&b);
    if(b/2==0){
    printf("Even");
    }
    else if( b/=!0 ) {
    printf(" Odd");
    }
    return 0 ;
}*/
//===========================================================================
/////////program 3: 
//===========================================================================
/*int main (){
    int c;
    printf("Enter your marks = ");
    scanf("%d",&c);
    if (c>=90){
        printf(" Topper ");
    }
    else if (c>=80){
        printf("Very good");
    }
    else if( c>= 70 ) {
        printf("Good"); 
    }
    else {
        printf("Fail");
    }
    return 0 ;
}*/

//===========================================================================
///////////program 4 : Ternary Operator 
//===========================================================================
/*int main (){
    int e;
    printf(" Enter your  gril friend age  = ");
    scanf("%d",&e);
    e>=18  ? printf(" She is major\n"): printf("She is minor ") ;
    return 0;
}*/
//===========================================================================
/////////program 5: 
//===========================================================================
/*#include<math.h>
int main() {
int day;
printf ("Enter you day = ");
scanf("%d",&day);
switch(day) {
case 1 : printf("monday \n");
break;
case 2 : printf("tuesday \n");
break;
case 3 : printf("wednesday \n");
break;
case 4 : printf("thursday \n");
break;
case 5 : printf("friday \n");
break;
case 6 : printf("saturday \n");
break;
case 7 : printf("sunday \n");
break;

}
return 0;
}*/
//===========================================================================
///////program 6: 
//===========================================================================
/*#include<math.h>
int main() {
char y;
printf("Enter = ");
scanf("%c",&y);
switch(y) {
case 'm' : printf("monday \n");
break;

case 't' : printf("tuesday \n");
break;
case 'w' : printf("wednesday \n");
break;
case 'T' : printf("thursday \n");
break;
case 'f' : printf("friday \n");
break;
case 's' : printf("saturday \n");
break;
case 'S' : printf("sunday \n");
break;

}
return 0 ;
}*/
//===========================================================================
/////program 7: Write a program to check whether positive or negative
//===========================================================================
/*int main(){
    int a ;
    printf("Enter any number = ");
    scanf("%d",&a);
    if (a>=0){
        printf("The number is Positive");
    }
    else {
    printf("The number is neagative");
    }
    return 0 ;

}*/
//===========================================================================
///program 8:Write a program to find the larger of two numbers.
//===========================================================================
int main (){
int h , j ;
printf("Enter any Number = ");
scanf("%d",&h);
printf("Enter any Number = ");
scanf("%d",&j);
if ( h == j){
    printf ( " %d and %d both are same" , h , j);
}
else if ( h >= j){
    printf (" %d is greter than % d" , h , j );
}
else {
    printf (" %d is greter than % d" , j , h );

}
return 0 ;
}
///=========================================================================
/// program 9:Write a program to check whether a year is a leap year using
///==========================================================================
/*int main (){
    int a ;
    printf("Plese enter  a year ==");
    scanf("%d", &a);
    if (a % 4 == 0){
        printf(" %d is a leap year ", a);
}
   else if (a % 400 == 0){
    printf(" % d is a leap year" , a);
   }
   else if (a % 100 == 0){
    printf(" % d is a leap year" , a);
   }
  
   else {
        printf(" %d is a non leap year " , a);
    }
    return 0 ; 
}*/
///==================================================================================
// program 10: Write a program to find the smallest of two number
///==================================================================================
/*int main (){
    int s,g ;
    printf(" Enter any number =");
    scanf("%d",&s);
    printf(" Enter any number =");
    scanf("%d",&g);
   if (s==g) {
    printf("%d and %d are both are same " ,s,g);
   }
   else if (s<g){
    printf("%d are the smallest number " ,s);
   }
   else {
    printf("%d are the smallest number ",g);
   }
   return 0 ;
}*/
///==================================================================================
// program 11: Write a program to check whether a character is uppercase or lowercase.
///==================================================================================
/*int main (){
    char a ;
    printf("Enter any character = ");
    scanf("%s",&a);
    if ( a>='A' && a<='Z'){
    printf("uppercase letters ");
    }
    else if ( a>='a' && a<='z'){ 
    printf("lower case letters ");
    } 
    else {
        printf(" Both  are not same ");
    }
    return 0 ;
    }*/
   //================================================================================
   //program 12:Write a program to check whether a number is divisible by both 3 and 5.
   //=================================================================================
   /*int main (){
    int d ;
    printf("Enter Number please = ");
    scanf("%d",&d);
    if (d%3 == 0 && d%5 == 0){
        printf("THE number is divisible by both 3 and 5");
    }
    else {
        printf("The number not divisible by both 3 and 5");
    }
   }*/
   //=============================================================================================
   //program 13:Write a program to check whether a student has passed or failed (pass marks = 35).
   //=============================================================================================
   /*int main (){
    int d;
    printf("Enter your marks  please = ");
    scanf("%d",&d);
    if ( d>=35){
    printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0 ;
}*/
//======================================================================================
///program 14:Write a program to find the largest of three numbers.
//=========================================================================================
/*int main(){
    int s , r , i ;
    printf("Enter first number = ");
    scanf("%d", &s ); 
    printf("Enter second  number = ");
    scanf("%d", &r );
    printf("Enter thrid  number = ");
    scanf("%d", &i ); 
    if (s==r && r==i){
        printf("All three numbers are equal.");
    }
    else if (s>=r && s>=i) {
        printf("%d is largest number of three numbers.",s);
    }
    else if (r>=s && r>=i){
        printf("%d is largest number of three numbers.",r);
    }
    else if (i>=s && i>=r ) {
      printf("%d is the largest number of three numbers.",i);
    }
    
     return 0 ;
} */
//===================================================================================
//program 15:Write a program to check whether a character is a vowel or consonant
//=================================================================================
/*int main (){
    char s;
    printf("Enter character = ");
    scanf("%s",&s);
    if( s=='A' || s=='a' ){
        printf(" character is a vowel ");
    }
    else if ( s== 'E' || s=='e'){
        printf("character is a vowel ");
    }
    else if ( s=='I' || s=='i'){
        printf("character is a vowel ");
    }
    else if ( s=='O' || s=='o') {
        printf(" character is a vowel ");
    }
    else if ( s=='U' || s=='u') {
        printf(" character is a vowel ");
    }
    else {
        printf(" character is a consonant ");
    }
    return 0;
}*/
//==================================================================================
//program 16:Check whether a character is an alphabet, digit, or special characte
//==================================================================================
/*int main (){
    char f;
    printf("Enter a character = ");
    scanf("%c",&f);
    if ((f>='A' && f<='Z') ||(f>='a' && f<='z') ) {
    printf("character is Alphabet ");
    }
    else if (f>= '1'  && f<='9'){
    printf("character is Digit  ");    
    }
    else {
        printf("Special Character ");
    }
    return 0 ;
}*/
