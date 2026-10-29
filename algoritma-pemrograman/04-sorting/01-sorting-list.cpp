#include <iostream>
using namespace std;

void bubbleSort(int array[], int size){
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp; 
            }
        }
    }
}

void selectionSort(int array[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIdx = i;

        for (int j = i + 1; j < n; j++){
            if (array[minIdx] > array[j]) minIdx = j;
        }

        int temp = array[i];
        array[i] = array[minIdx];
        array[minIdx] = temp;
    }
}

void insertionSort(int array[], int n){
    for (int i = 0; i < n; i++){
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}


int main(){
    int array[] = {10, 5, 16, 8, 9, 17, 7, 10, 6, 30, 54, 55, 32, 45, 67, 78};
    int size = 16;

    insertionSort(array, size);

    for (int i = 0; i < size; i++){
        cout << array[i] << ' ';
    }
    return 0;
}