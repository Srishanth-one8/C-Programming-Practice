#include <stdio.h>
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
// check if number is even or odd
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
//Ternary Operator
/*int main (){
    int e;
    printf(" Enter your  gril friend age  = ");
    scanf("%d",&e);
    e>=18  ? printf(" She is major\n"): printf("She is minor ") ;
    return 0;
}*/

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
///// give number is Positive or Negative
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
///Write a program to find the larger of two numbers.
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