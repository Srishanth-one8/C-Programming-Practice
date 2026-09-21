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
