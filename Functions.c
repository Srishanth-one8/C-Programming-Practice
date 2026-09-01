//Program 1: Write a function called square.Take one integer from the user.
/*int square(int a){
    int value;
    value = a * a;
    return value;
}
int main(){
    int x;
    int sol;
    printf("Enter a number = ");
    scanf("%d",&x);
    sol = square(x);
    printf("Square = %d",sol);
    return 0;
}*/
//Program 2:Write a function called cube.Calculate its cube inside the function.
/*int cube(int a){
    int value;
    value = a * a * a;
    return value;
}
int main(){
    int x;
    int sol;
    printf("Enter number = ");
    scanf("%d",&x);
    sol = cube(x);
    printf("Cube = %d",sol);
    return 0;
}*/
//Program 3:Create a function called checkEvenOdd.
/*int check(int a){
    if ( a % 2 == 0){
        return 1;
    }
    else if ( a % 2 !=0 ){
        return 0;
    }
}
int main(){
    int x;
    int sol;
    printf("Enter number = ");
    scanf("%d",&x);
    sol = check(x);
    if (sol == 1){rite a function called checkNumber.
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}*/
// Program 4 :write a function called checkNumber.
/*int check(int a){
    if (a > 0){
       return 1;
    }
    else if ( a < 0 ){
        return 2;
    }
    else if ( a == 0) {
        return 3;
    }
}
int main(){
    int x;
    int sol;
    printf("Enter number = ");
    scanf("%d",&x);
    sol = check(x);
    if (sol == 1){
       printf("POSITIVE");
    }
    else if (sol == 2){
        printf("NEGATIVE");
    }
    else if ( sol == 3) {
        printf("ZERO");
    }
    return 0;
}*/
// Program 5:Write a function called countDigits.
/*int check(int a){
    int count = 0;
    while(a>=0){
        count++;
        a = a / 10;
    }
    return count;
}
int main(){
    int x;
    int sol;
    printf("Enter number = ");
    scanf("%d",&x);
    sol = check(x);
    printf("Number of digits = %d",sol);
    return 0;
}*/
// Program 6:Write a function called reverseNumber.
/*int check(int a){
    int b;
    int sum = 0 ;
    while( a>0){
        b = a % 10;
        sum = (sum * 10) + b;
        a = a/10;
    }
    return sum;
}
int main(){
    int x;
    int sol;
    printf("Enter number = ");
    scanf("%d",&x);
    sol = check(x);
    printf("Reversed = %d",sol);
    return 0;
}*/
// Program 7:Write a function called isVowel.
/*char  check(char  a){
    if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        return 1;
    }
    else if ( a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        return 2;
    }
    else{
        return 3;
    }
}
// Program 8:Write a function called isVowel
int main(){
    char x;
    int sol;
    printf("Enter character = ");
    scanf("%c",&x);
    sol = check(x);
    if ( sol == 1){
        printf("VOWEL");
    }
    else if (sol == 2){
        printf("VOWEL");
    }
    else if (sol == 3){
        printf("NOT VOWEL");
    }
    return 0;
}*/
