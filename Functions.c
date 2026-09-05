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
