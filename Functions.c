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
// Program 9:Create a function called printTable().
/*void printTable(int a){
    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d\n",a,i, a * i);
    }
}
int main(){
    int x;
    printf("Enter number = ");
    scanf("%d",&x);
    printTable(x);
    return 0;
}*/
//Program 10:Create a function called printVowels().
/*void printVowels(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' ||
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' ||
            word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            printf("%c ", word[i]);
        }
    }
}
int main() {
    char word[20];
    printf("Enter a word = ");
    scanf("%s", word);
    printVowels(word);
    return 0;
}*/
//Program 11:Count characters in a word.
/*void countcharacters(char word[]){
    int count = 0;
    for (int i = 0 ; word[i] !='\0';i++){
        count++;
     }
    printf("Number of characters = %d\n",count);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    countcharacters(word);
    return 0;
}*/
//Program 1:Count vowels and consonants.
/*void countVowelsConsonants(char word[]){
    int count = 0;
    int value = 0;
    for (int i = 0; word[i] !='\0'; i++){
        if( word[i] == 'a'|| word[i] == 'e'|| 
            word[i] == 'i'|| word[i] == 'o'||
            word[i] == 'u'||
            word[i] == 'A'|| word[i] == 'E'|| 
            word[i] == 'I'|| word[i] == 'O'||
            word[i] == 'U'
        ){
            count++;
        }
        else if ( word[i] == 'b'|| word[i] == 'c'|| word[i] == 'd'|| word[i] == 'f'||
                  word[i] == 'g'|| word[i] == 'h'|| word[i] == 'j'|| word[i] == 'k'||
                  word[i] == 'l'|| word[i] == 'm'|| word[i] == 'n'|| word[i] == 'p'||
                  word[i] == 'q'|| word[i] == 'r'|| word[i] == 's'|| word[i] == 't'||
                  word[i] == 'v'|| word[i] == 'w'|| word[i] == 'x'|| word[i] == 'y'||
                  word[i] == 'z'||
                  word[i] == 'B'|| word[i] == 'C'|| word[i] == 'D'|| word[i] == 'F'||
                  word[i] == 'G'|| word[i] == 'H'|| word[i] == 'J'|| word[i] == 'K'||
                  word[i] == 'L'|| word[i] == 'M'|| word[i] == 'N'|| word[i] == 'P'||
                  word[i] == 'Q'|| word[i] == 'R'|| word[i] == 'S'|| word[i] == 'T'||
                  word[i] == 'V'|| word[i] == 'W'|| word[i] == 'X'|| word[i] == 'Y'||
                  word[i] == 'Z'

        ){
            value++;
        }
    }
    printf("Vowels = %d\n",count);
    printf("Consonants = %d\n",value);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    countVowelsConsonants(word);
    return 0; 
}*/
/*void countVowelsConsonants(char word[]){
    int count = 0;
    int value = 0;
    for (int i = 0; word[i] !='\0'; i++){
        if( word[i] == 'a'|| word[i] == 'e'|| 
            word[i] == 'i'|| word[i] == 'o'||
            word[i] == 'u'||
            word[i] == 'A'|| word[i] == 'E'|| 
            word[i] == 'I'|| word[i] == 'O'||
            word[i] == 'U'
        ){
            count++;
        }
        else if (word[i] >= 'a' && word [i] <= 'z'  || word[i] >= 'A' && word [i] <= 'Z' ){
            value++;
        }
    }
    printf("Vowels = %d\n",count);
    printf("Consonants = %d\n",value);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    countVowelsConsonants(word);
    return 0; 
}*/
//Program 12:Reverse a word.
/*void reverseWord(char word[]){
    int count = 0;
    for (int i = 0; word[i]!='\0';i++){
        count++;
    }
        for ( int i = count - 1; i>=0;i--){
            printf("%c",word[i]);
        }
    }

int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    reverseWord(word);
    return 0;
}*/
//Program 13:String palindrome
/*void isPalindrome(char word[]) {
    int count = 0;
    // Find length
    for (int i = 0; word[i] != '\0'; i++) {
        count++;
    }
    // Create reverse
    char reverse[20];
    int j = 0;
    for (int i = count - 1; i >= 0; i--) {
        reverse[j] = word[i];
        j++;
    }
    // End the reverse string
    reverse[j] = '\0';
    // Compare original and reverse
    int same = 1;
    for (int i = 0; i < count; i++) {
        if (word[i] != reverse[i]) {
            same = 0;
            break;
        }
    }
    if (same == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}
int main() {
    char word[20];
    printf("Enter a word = ");
    scanf("%s", word);
    isPalindrome(word);
    return 0;
}*/
//Program 14:Character Frequency.Take a word and a character from the user, then count how many times that character appears in the word.
/*void countcharacter(char word[],char target){
    int count = 0;
    for(int i = 0; word[i] !='\0'; i++){
        if(word[i] == target){
            count++;
        }
    }
    printf(" '%c' appears %d times",target,count);
}
int main(){
    char word[20];
    printf("ENTER A WORD = ");
    scanf("%s",word);
    char target;
    printf("Enter a character = ");
    scanf(" %c",&target);
    countcharacter(word,target);
    return 0;
}*/
//Program 15:remove the target Character.
/*void removecount( char word [], char target){
    char reverse[20];
    int j = 0;
    for (int i=0; word[i] != '\0'; i++){
        if(word[i] != target){
          reverse[j] = word[i];
          j++;
        }
    }
    reverse[j] = '\0';
    printf("Output: %s" , reverse);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    char target;
    printf("Enter a character = ");
    scanf(" %c",&target);
    removecount(word , target);
    return 0 ;
}*/
//Program 16:Count words
/*void countword(char word[]){
    int count = 0;
    for ( int i = 0; word[i] != '\0' ; i++){
        if( word[i] == '_'){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    char word[50];
    printf("Enter a sentence = ");
    scanf("%s",word);
    countword(word);
    return 0 ;
}*/
//Program 17:Find the largest character.
/*void largestcharacter(char word[]){
    char largest = word[0];
    for( int i = 0; word[i] != '\0'; i++){
        if( word[i] > largest){
            largest = word[i];
        }
    }
    printf("Largest character = %c",largest);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    largestcharacter(word);
    return 0;
}*/
//Program 18:Count uppercase and lowercase letters.
/*void countcase( char word []){
    int count = 0;
    int value = 0;
    for (int i = 0; word[i] != '\0'; i++){
        if( word[i] >= 'A' && word[i] <='Z'){
            count++;
        }
        else if( word[i] >= 'a' && word[i] <='z'){
            value++;
        }
    }
    printf("Upper case = %d\n",count);
    printf("Lower case = %d",value);
}
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    countcase(word);
    return 0;
}*/
//Program 19:Remove duplicate characters.
/*void removeDuplicates(char word[]){
    for(int i = 0 ; word[i] != '\0' ; i++){
        int duplicate = 0;
        for (int j = 0 ; j < i ; j++){
             if (word[i] == word[j]) {
                duplicate = 1;
                break;
            }
        }
         if (duplicate == 0) {
            printf("%c", word[i]);
        }
    }
    }
int main(){
    char word[20];
    printf("Enter a word = ");
    scanf("%s",word);
    printf("Output = ");
    removeDuplicates(word);
    return 0;
}*/
//Program 20:Find the first repeated character.
/*void firstRepeated(char word []){
    int found = 0;
    for (int i = 0; word[i] != '\0' ; i++){
        int duplicate = 0;
        for (int j = 0; j < i ; j++){
            if (word[i] == word[j]){
                duplicate = 1;
                break;
            }
        }
        if ( duplicate == 1 ){
            printf("First repeated character ' %c '",word[i]);
            found = 1;
            break;
        }
}
if ( found  == 0){
    printf("No repeated character");
}
}
int main(){
    char word[20];
    printf("Input = ");
    scanf("%s",word);
    printf("Output = ");
    firstRepeated(word);
    return 0;
}*/
//Program 21:Remove all spaces
/*void removeSpace(char word[]){
    int found = 0;
    for (int i = 0; word[i] != '\0'; i++){
        if ( word[i] == '_'){
            found = 1;
        }
        else{
            printf("%c",word[i]);
        }
    }
    if (found == 0){
        printf("\nNo unerscore are found");
    }
}
int main(){
    char word[50];
    printf("Input = ");
    scanf("%s",word);
    printf("Output = ");
    removeSpace(word);
    return 0;
}*/
//Program 22:Find the second largest character
/*void secondlargest(char word[]){
    char largest = word [0] ;
    char second = word [0];
    for( int i = 1; word[i] != '\0'; i++){
        if( word[i] > largest){
            second = largest;
            largest = word[i];
        }
        else if (word[i] > second && word[i] < largest) {
                second = word[i];

        }
}
    printf("second character = %c",second);

}
int main(){
    char word[20];
    printf("Input = ");
    scanf("%s",word);
    printf("Output : ");
    secondlargest(word);
    return 0;
}*/
//program 23:Count digits in a string
/*void countDigits(char word []){
    int count = 0;
    for(int i = 0; word[i] != '\0' ; i++){
        if(word[i] >= '0' && word[i] <= '9'){
            count++;
        }
    }
    printf("Output : %d",count);
}
int main(){
    char word[20];
    printf("Input :");
    scanf("%s",word);
    countDigits(word);
    return 0 ;
}*/
// Program 24:The function should return the sum of all digits.
/*int sumCount( int a){
    int digital;
    int sum = 0;
    while(a>0){
        digital = a % 10;
        sum = sum + digital;
        a = a / 10;
    }
      return sum;
}
int main(){
    int x;
    int sol;
    printf("Enter a number = ");
    scanf("%d",&x);
    sol = sumCount(x);
    printf("Output = %d ",sol);
    return 0;
}*/
// Program 25:Reverse a Number.
/*int reverseNumber(int a){
    int digital ;
    int reverse = 0;
    while(a>0){
        digital = a % 10;
        reverse = (reverse * 10) + digital;
        a = a / 10;
    }
    return reverse;
}
int main(){
    int x;
    int sol;
    printf("Enter a number = ");
    scanf("%d",&x);
    sol = reverseNumber(x);
    printf("output = %d",sol);
    return 0;
}*/
// Program 26:Calculate the electricity bill according to these slabs:
/*int units( int a ){
    float  sum = 0;
    if ( a <= 100){
         sum = a * 2;
    }
    else if( a <= 200){
        sum = (100 * 2) + ((a - 100) * 3);
    }
    else if( a<=300){
        sum = (100 * 2) + (100 * 3) + ((a - 200) * 5);
    }
    else {
        sum = (100 * 2) + (100 * 3) + (100 * 5) + ((a - 300) * 7);
    }
    return sum;
}
int main(){
    int x;
    int sol;
    printf("Enter your units: ");
    scanf("%d",&x);
    sol = units(x);
    printf("Output:%d",sol);
    return 0;
}*/   
// Program 27:Parking Fee Calculator.
/*float parkingFee( float a){
    float value;
    if( a <= 2){
        value = (1 * 20) + ((a - 1) * 20 ) ;
    }
    else if( a <= 5 ){
        value =  ( 2 * 20 ) + ( (a  - 2 ) * 15) ; 
    }
    else if( a <= 10 ){
        value =  ( 2 * 20 ) +  ( 3 * 15 ) + ( (a - 5 ) * 10) ; 
    }
    else if ( a > 10 ){
        value =  ( 2 * 20 ) +  ( 3 * 15 ) + ( 5  * 10) + (( a - 10) * 8) ; 
    }
    return value;
}
int main(){
    float x;
    float sol;
    printf("How many Hours = ");
    scanf("%f",&x);
    sol = parkingFee(x);
    printf("Total fee = %.2f ",sol);
    return 0 ;
}*/
//  Program 28:ATM Withdrawal.
/*int withdraw(int balance , int amount){
    int value ;
    if ( amount <= balance ){
        value =  balance - amount ;
    }
    else {
        return -1;
    }
    return value;
}
int main(){
    int x  = 5000;
    printf("Balance = %d\n",x);
    int y;
    int sol;
    printf("Withdraw = ");
    scanf("%d",&y);
    sol = withdraw(x,y);
    if ( sol == -1){
        printf("Insufficient balance");
    }
    else{
        printf("Remaining balance = %d", sol);
    }
    return 0;
}*/
// Program 29:Student Grade.
/*char getGrade(int marks){
    if( marks >= 90 && marks <= 100){
        return 'A';
    }
    else if( marks >= 80 && marks <= 89){
        return 'B';
    }
    else if( marks >= 70 && marks <= 79){
        return 'C';
    }
    else if( marks >= 60 && marks <= 69){
        return 'D';
    }
    else {
        return 'F';
    }
}
int main(){
    int x;
    char word;
    printf("Input :");
    scanf("%d",&x);
    word = getGrade(x);
    printf("Output: %c",word);
    return 0;
}*/
// Program 30:Temperature Converter.
/*float convet( float Celsius){
    float F;
    F = (Celsius * 1.8 ) + 32;
    return F;
}
int main(){
    float x;
    float sol;
    printf("Input: ");
    scanf("%f",&x);
    sol = convet(x);
    printf("Output: %.1f F ",sol);
    return 0;
}*/
// Program 31:Simple Interest.
/*float interst(float principal , float rate, float time){
    float SI;
    SI = principal * rate* time / 100;
    return SI;
}
int main(){
    float x;
    float y;
    float z;
    float sol;
    printf("Principal = ");
    scanf("%f",&x);
    printf("Rate = ");
    scanf("%f",&y);
    printf("Time = ");
    scanf("%f",&z);
    sol = interst(x,y,z);
    printf("Output = %.1f ",sol);
    return 0;
}*/
// Program 32:Power of a Number.
/*int power( int Base , int Exponent){
    int start = 1;
    for(int i = 1; i <= Exponent;i++){
        start = start * Base;
    }
    return start;
}
int main(){
    int x;
    int y;
    int sol;
    printf("Base = ");
    scanf("%d",&x);
    printf("Exponent = ");
    scanf("%d",&y);
    sol = power(x,y);
    printf("Output: %d",sol);
    return 0 ;
}*/
// Program 33:Given a positive integer n, count how many even numbers are from 1 to n, and return the count.
/*int even(int even){
    int count = 0;
    for(int i = 1; i <= even; i++){
        if( i % 2 == 0){
            printf("Even = %d\n",i);
            count++;
        }
    }
    return count;
}
int main(){
    int x;
    int sol;
    printf("n = ");
    scanf("%d",&x);
    sol = even(x);
    printf("n = %d\n",sol);
    return 0;
}*/
// Program 34:Count Multiples.
/*int count(int n , int divisor){
    int count = 0;
    for (int i = 1 ; i <= n ; i++ ){
        if (  i % divisor == 0 ){
            printf("%d\n",i);
            count++;
        }
    }
    return count;
}
int main(){
    int x;
    int y;
    int sol;
    printf("N = ");
    scanf("%d",&x);
    printf("Divisor = ");
    scanf("%d",&y);
    printf("Output:\n");
    sol = count(x,y);
    printf("Count = %d",sol);
    return 0;
}*/
// Program 35:Return the sum of all even numbers from 1 to n.
/*int sumEven(int n){
    int sum = 0;
    for(int i = 0; i <= n ; i++){
        if ( i % 2 == 0){
            sum = sum + i ;
        }
    }
    return sum;
}
int main(){
    int x;
    int sol;
    printf("n = ");
    scanf("%d",&x);
    sol = sumEven(x);
    printf("Even numbers sum : %d",sol);
    return 0;
}*/
// Program 36:Find the product of all odd numbers from 1 to n.
/*int product(int odd){
    int value = 1;
    for( int i = 1; i <= odd; i++){
        if ( i % 2 != 0){
            value = value * i;
        }
    }
    return value;
}
int main(){
    int x;
    int sol;
    printf("N = ");
    scanf("%d",&x);
    sol = product(x);
    printf("Output: %d",sol);
    return 0;
}*/
// Program 37:Count how many digits in a positive number are greater than 5.
/*int count(int a){
    int digital;
    int count = 0;
    while(a>0){
        digital = a % 10;
        if ( digital > 5){
            printf("%d\n",digital);
            count++;
        }
        a = a/ 10;
    }
    if (count == 0){
        printf("No greater than '5' \n");
    }
    return count;
}
int main(){
    int x;
    int sol;
    printf("N = ");
    scanf("%d",&x);
    printf("Output: \n");
    sol = count(x);
    printf("Count : %d\n",sol);
    return 0;
}*/
// Program 38:Imagine a sensor gives an integer value from 0 to 1023 (like a basic ADC).
/*int sensorStatus(int value){
    if( value <= 1023 && value >= 701){
        return 2;
    }
    else if (value <= 700 && value >= 301){
        return 1;
    }
    else if (value <= 300 && value >= 0){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
    int x;
    int sol;
    printf("Sensor Value = ");
    scanf("%d",&x);
    printf("Output: ");
    sol = sensorStatus(x);
    if ( sol == 2){
        printf("HIGH");
    }
    else if( sol == 1){
        printf("MEDIUM");
    }
    else if(sol == 0){
        printf("LOW");
    }
    else if (sol == -1){
        printf("Invalid sensor value");
    }
    return 0;
}*/
// Program 39:Button Debounce Logic.
/*char pressCount(char word[]){
    int press = 0;
    for (int i = 1; word [i] != '\0'; i++){
            if (word[i] == '1' &&  word[i - 1] == '0'){
                press++;
            }
    }
    return press;
}
int main(){
    char word[10];
    int sol;
    printf("Enter reading: ");
    scanf("%s",word);
    sol = pressCount(word);
    printf("Press = %d",sol);
    return 0;
}*/
// Program 40: A sensor normally gives values from 0–100. Any reading above 80 is considered a fault.
/*int countFaults(int readings[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (readings[i] > 80) {
            printf("Fault: %d\n", readings[i]);
            count++;
        }
    }
    return count;
}
int main() {
    int readings[10];
    int n;
    int sol;
    printf("How many readings? ");
    scanf("%d", &n);
    printf("Enter readings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &readings[i]);
    }
    sol = countFaults(readings, n);
    printf("Total faults = %d", sol);
    return 0;
}*/
// Program 41:Prime number
/*int Prime( int prime ){
    int count = 0;
    for ( int i = 1; i <= prime; i++){
        if ( prime % i == 0){
            count++;
        }
    }
    if ( count == 2){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int x;
    int sol;
    printf("Enter a number : ");
    scanf("%d",&x);
    sol = Prime(x);
    if ( sol == 1){
        printf( "'%d' is a prime number",x);
    }
    else{
        printf(" %d is not a prime number",x);
    }
    return 0;
}*/
// Program 42:Button Event Detector.
/*int Presscount(int Press[] , int n){
    int count = 0;
    int largest = 0;
    for(int i = 0; i < n ; i++){
        if ( Press[i] == 0){
            count = 0;
        }
        else if( Press[i] == 1 ){
            count++;
        }
        if ( count > largest ){
            largest = count;
        }
    }
    return largest;
}
int main(){
    int read[20];
    int n = 8 ;
    int sol;
    printf("Enter Button reading:\n");
    for ( int i = 0; i < n; i++){
        scanf("%d",&read[i]);
    }
    sol = Presscount(read,n);
    printf("%d longest",sol);
    return 0;
}*/
// Program 43:Bit Manipulation.
/*int checkBit(int value, int position) {
    int mask = 1 << position;                       // << lift-shift operator
    if (value & mask) {
        return 1;
    }
    else {
        return 0;
   }
}
int main() {
    int value;
    int position;
    int sol;
    printf("Enter register value: ");
    scanf("%d", &value);
    printf("Enter bit position (0-7): ");
    scanf("%d", &position);
    sol = checkBit(value, position);
    if (sol == 1) {
        printf("Bit %d is ON", position);
    }
    else {
        printf("Bit %d is OFF", position);
    }
    return 0;
}*/
// Program 44: Q1 — Check a bit.
/*int CheckBit( int a ,  int b){
    int mask = 1 << b;
    if ( a & mask){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int value = 12;
    int position;
    int sol;
    printf("Register value: %d\n",value);
    printf("Enter bit position( 0-7): ");
    scanf("%d",&position);
    sol =  CheckBit(value,position);
    if( sol == 1){
        printf("Position %d is ON ",position);
    }
    else if( sol == 0){
        printf("Position %d is OFF ",position);
    }
    return 0;
}*/
// Program 45:Q3 — Turn ON a bit.
/*int CheckBit( int a ,  int b){
    int digital;
    int mask = 1 << b;
    digital = a | mask;
    return  digital;
}
int main(){
    int value = 8;
    int position;
    int sol;
    printf("Register value: %d\n",value);
    printf("Enter bit position( 0-7): ");
    scanf("%d",&position);
    sol =  CheckBit(value,position);
    printf("New value %d",sol);
    return 0;
}*/
// Program 46:Q4 — Turn OFF a bit.
/*int CheckBit( int a ,  int b){
    int digital;
    int mask = 1 << b;
    digital = a & ~mask;
    return digital;
}
int main(){
    int value = 15;
    int position;
    int sol;
    printf("Register value: %d\n",value);
    printf("Enter bit position( 0-7): ");
    scanf("%d",&position);
    sol =  CheckBit(value,position);
    printf("New value = %d",sol);
    return 0;
}*/
// Program 47:Q5 — Toggle a bit.
/*int CheckBit( int a ,  int b){
    int digital;
    int mask = 1 << b;
    digital = a ^ mask;
    return digital;
}
int main(){
    int value = 10;
    int position;
    int sol;
    printf("Register value: %d\n",value);
    printf("Enter bit position( 0-7): ");
    scanf("%d",&position);
    sol =  CheckBit(value,position);
    printf("New value = %d",sol);
    return 0;
}*/
// Program 48:Q6 — Real Embedded-style problem.
/*int check(int binary[] , int position){
    int index = 7 - position;
    if (binary[index] == 1 ){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int read[20];
    int n = 8 ;
    int Position;
    int sol;
    printf("A GPIO register contains(0-7):\n");
    for ( int i = 0; i < n; i++){
        scanf("%d",&read[i]);
    }
    printf("Enter position: ");
    scanf("%d",&Position);
    sol = check(read,Position);
    if( sol == 1){
        printf("Bit %d is ON",Position);
    }
    else if (sol == 0){
        printf("Bit %d is Off",Position);
    }
    return 0;
}*/
// Program 49:: Bit shifting.
/*int check(int binary,int Shift){
    int store;
    store = binary << Shift;              // >> right shift
    return store;
}
int main(){
    int read;
    int Shift;
    int sol;
    printf("Value: ");
    scanf("%d",&read);
    printf("Left shift: ");
    scanf("%d",&Shift);
    sol = check(read,Shift);
    for (int i = 7; i >= 0; i--){
    printf("%d", (sol >> i) & 1);
}
    return 0;
}*/
//Program 50:You want to turn bit 5 ON.
/*void Check(int binary[],int shift){
    int index = 7 - shift;
    if (binary[index] == 0){
        binary[index] = 1;
    }
    else{
        binary[index] = 0;
    }
}
int main(){
    int read[9];
    int n = 8;
    int shift;
    int sol;
    printf("8 - bit GPIO register:\n");
    for( int i = 0 ; i < 8; i++){
        scanf("%d",&read[i]);
    }
    printf("To shift: ");
    scanf("%d",&shift);
    Check(read,shift);
    for (int i = 0; i < 8; i++)
    {
        printf("%d", read[i]);
    }
    return 0;
}*/
