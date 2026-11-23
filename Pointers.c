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
/*// Program 8: Sensor Fault Filter.Using a pointer, change every negative sensor value to 0.
void fixSensorData(int *arr){
    for ( int i = 0 ; i < 8 ; i++){
        if ( *(arr + i) < 0){
            *(arr + i) = 0;
        }
    }
}
int main(){
    int arr[8] = {120,-5,250,0,-10,320,45,-2};
    fixSensorData(arr);
    for(int i = 0; i < 8; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/
// Program 9:You have 5 sensor readings calculateAverage.
/*int calculateAverage(int *arr){
    int count = 0;
    int total = 0;
    int average;
    for (int i = 0; i < 5; i++){
        total = total + *(arr + i);
        count++;
    }
    average = total / count ;
    return average;
}
int main(){
    int arr[5] = {10 ,20,30,40,50};
    int sol;
    sol = calculateAverage(arr);
    printf("Average : %d ",sol);
    return 0;
}*/
// Prpgram 10: Modify Sensor Reading.           
/*void increaseSensor(int *ptr) {
    if (*ptr < 200) {
        *ptr = *ptr + 10;
    }
}
int main() {
    int sensor;
    printf("Enter sensor reading: ");
    scanf("%d", &sensor);
    increaseSensor(&sensor);
    printf("Updated sensor reading: %d\n", sensor);
    return 0;
}*/
// program 11 :Find the Largest Sensor Reading.
/*int bothreadings( int *ptr1 , int *ptr2){
    int largest;
    if (*ptr1 >= *ptr2){
        largest = *ptr1;
    }
    else{
        largest  = *ptr2;
    }
    return largest;
}
int main(){
    int first_sensor;
    int second_sensor;
    int sol;
    printf("Enter first sensor reading = ");
     scanf("%d",&first_sensor);
    printf("Enter second sensor reading = ");
    scanf("%d",&second_sensor);
    sol = bothreadings(&first_sensor,&second_sensor);
    printf("Largest sensor reading: %d ", sol);
    return 0;
}*/
// Program 12:Swap Two Sensor Readings.
/*void swapSensors(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int first_sensor;
    int second_sensor;
    printf("Enter first sensor readings = ");
    scanf("%d",&first_sensor);
    printf("Enter second sensor reading = ");
    scanf("%d",&second_sensor);
    swapSensors(&first_sensor,&second_sensor);
    printf("first sensor = %d\n",first_sensor);
    printf("Second sensor = %d ",second_sensor);
    return 0;
}*/
// Program 13:Count Even Sensor Readings.
/*int CountSensorReadings(int *readings){
    int count = 0;
    for ( int i = 0; i < 6; i++){
        if (*(readings + i) % 2 == 0 ){
            count++;
        }
    }
    return count;
}
int main(){
    int readings[6];
    int sol;
    printf("Enter 6 Readings from the sensor = \n");
    for(int i = 0 ; i < 6 ; i++){
        scanf("%d",&readings[i]);
    }
    sol = CountSensorReadings(readings);
    printf("Number of even sensor readings = %d ",sol);
    return 0;
}*/
// Program 14:Sum of Odd Sensor Readings.
/*int SumOddSensors(int *readings){
    int sum = 0;
    for ( int i = 0; i < 8 ; i++){
        if (*(readings + i) % 2 != 0){
            sum = sum + *(readings + i);
        }
    }
    return sum;
}
int main(){
    int readings[8];
    int sol;
    printf("Enter 8 sensor readings:\n");
    for (int i = 0; i < 8; i++){
        scanf("%d",&readings[i]);
    }
    sol = SumOddSensors(readings);
    printf("Sum of odd sensor readings = %d ",sol);
    return 0;
}*/
// Program 15:Count Positive Sensor Readings.
/*int CountPositiveSensor(int *readings){
    int count = 0;
    for ( int i = 0; i < 10 ; i++){
        if ( *(readings + i) > 0 ){
            count++;
        }
    }
    return count;
}
int main(){
    int readings[10];
    int sol;
    printf("Enter sensor readings :\n");
    for(int i = 0; i < 10 ; i++){
        scanf("%d",&readings[i]);
    }
    sol = CountPositiveSensor(readings);
    printf("Number of Positive sensor readings = %d ",sol);
    return 0;
}*/
// Program 16:Count Negative Sensor Readings.
/*int CountNegativeSensor(int *readings){
    int count = 0;
    for ( int i = 0; i < 10 ; i++){
        if ( *(readings + i) < 0 ){
            count++;
        }
    }
    return count;
}
int main(){
    int readings[10];
    int sol;
    printf("Enter sensor readings :\n");
    for(int i = 0; i < 10 ; i++){
        scanf("%d",&readings[i]);
    }
    sol = CountNegativeSensor(readings);
    printf("Number of Negative sensor readings = %d ",sol);
    return 0;
}*/
// Program 17:Find the Smallest Sensor Reading.
/*int FindSmallestSensor(int *readings){
    int smallest = *(readings + 0);
    for ( int i = 0; i < 10 ; i++){
        if ( *( readings + i) < smallest){
            smallest = *(readings + i);
        }
    }
    return smallest;
}
int main(){
    int readings[10];
    int sol;
    printf("Enter sensor readings :\n");
    for(int i = 0; i < 10 ; i++){
        scanf("%d",&readings[i]);
    }
    sol = FindSmallestSensor(readings);
    printf("Smallest sensor reading = %d",sol);
    return 0;
}*/
