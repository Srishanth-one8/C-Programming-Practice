# Pointers
C language pointer practice programs.
#include <stdio.h>
//Example:
/*int main(){
    int x = 10;
    int *ptr = &x;
    printf("Value of X = %d \n",x);
    printf("Address of X = %p\n",&x);
    printf("Pointer value = %p\n",ptr);
    printf("Value of using pointer = %d\n",*ptr);
    return 0;
}*/
// Nullu pointer
/*int main(){
    int *prt = NULL;
    if ( prt == NULL){
        printf("it is true");
    }
    return 0;
}*/
// Void pointer 
/*int main(){
    int x = 30;
    void *pss =  &x;
    printf("Value = %d",*(int*)pss);
    return 0;
}*/
// Wild Pointer 
/*int main(){
    int *ptr;
    printf("Pointer Stored Address = %d",ptr);
}*/
// pointer to pointer
/*int main(){
    int s = 30;
    int *pss = &s;
    int **ppss = &pss;
    printf("Value os s = %d\n",s);
    printf("Pointer value = %d\n",*pss);
    printf("Pointer to pointer value = %d\n", **ppss);
    return 0;
}*/
// Pointer Arithmetic
/*int main(){
    int arr[5] = {10,20,30,40,50};
    int *pss = arr;
    printf("Value of arr 1st = %d\n",*pss);
    *pss++; // 2nd place
    printf("Value of arr 2st = %d\n",*pss);
    pss = pss + 1; // 3rd place
    printf("Value of arr 3st = %d\n",*pss);
    pss--;// -1
    printf("Value of arr  = %d\n",*pss);
    pss = pss - 1; // -2 
    printf("Value of arr = %d\n",*pss);
    return 0;
}*/
// Pointer with Array
/*int main(){
    int arr[5] = {10,20,30,40,50};
    int *pss = arr;
    printf("Value of arr 1st = %d\n",pss[0]);
    printf("Value of arr 2st = %d\n",pss[1]);
    printf("Value of arr 3st = %d\n",pss[2]);
    return 0;
}*/
// Pointer with functions
/*void changeValue(int *num){
    *num = 05;
}
int main(){
    int x = 30;
    changeValue(&x);
    printf("Vallue of X = %d",x);
    return 0;
}*/
// Program 1:Modify a variable.
/*void ChangeValue( int *num){
    *num = 50;
}
int main(){
    int Value = 10;
    printf("Before: %d\n", Value);
    ChangeValue(&Value);
    printf("After : %d",Value);
    return 0;
}*/
// Program 2:Swap Two Variables.
/*void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    printf("Before :\n        a = %d\n        b = %d\n", a, b);
    swap(&a, &b);
    printf("After :\n        a = %d\n        b = %d", a, b);
    return 0;
}*/
// Program 3:Find the larger value.
/*int findLarger(int *a, int *b){
    if (*a < *b){
        return *b;
    }
    else {
        return *a;
    }
}
int main(){
    int a = 25;
    int b = 40;
    int sol;
    printf("a = %d\nb = %d\n", a, b);
    sol = findLarger(&a, &b);
    printf("Largest = %d",sol);
    return 0;
}*/
// Program 4:Modify through pointer.
/*int increaseSensor(int *value){
    if ( *value < 200){
        *value = *value + 10;
    }
    return *value;
}
int main(){
    int sensorValue ;
    int sol;
    printf("Sensor Value = ");
    scanf("%d",&sensorValue);
    sol = increaseSensor(&sensorValue);
    printf("The final sensor value = %d",sol);
    return 0;
}*/
// Program 5:the array using a pointer and finds the largest sensor value.
/*int findmax(int *arr){
    int largest = arr[0];
    for( int i = 0 ; i < 5; i++){
        if ( *(arr + i) > largest){
            largest =  *(arr + i);
        }
    }
    return largest;
}
int main(){
    int arr[5] = { 25,40,18,72,55};
    int sol;
    sol = findmax(arr);
    printf("Largest sensor value = %d",sol);
    return 0;
}*/
// Program 6:Count how many sensor readings are greater than 200.
/*int countHighSensors( int *arr){
    int count = 0;
    for ( int i = 0; i < 6; i++){
        if ( *(arr + i) > 200){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[6] = {120,250,80,310,190,450};
    int sol;
    sol = countHighSensors(arr);
    printf("Number of high sensor readings = %d",sol);
    return 0;
}*/
// Program 7 :Add 10 to every sensor reading using pointer notation.
/*void increaseSensors( int *arr){
    for ( int i = 0 ; i < 6 ; i++){
        *(arr + i) =*( arr + i) + 10;
    }
}
int main(){
    int arr[6] = {120,250,80,310,190,450};
    increaseSensors(arr);
    printf("Expected result:y");
    for (int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
}
    return 0;
}*/
