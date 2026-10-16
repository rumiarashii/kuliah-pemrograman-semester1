#include <iostream>
#include <vector>

using namespace std;

typedef int Array[10];

// 1. bagaimana ingin membuat suatu bubble sort  (dari kanan)
// 2. bagaimana cara membuat sort yang descending (dari kecil ke besar)



void bubbleSort(Array array, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (array[j] < array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void selectionSort(Array array, int n){
    for (int i = 0; i < n; i++){
        int minIdx = i;

        for (int j = i; j < n; j++){
            if (array[j] > array[minIdx]){
                minIdx = j;
            }
        }

        int temp = array[i];
        array[i] = array[minIdx];
        array[minIdx] = temp;

    }
}

void insertionSort(Array array, int n){
    for (int i = 1; i < n; i++){
        int key = array[i];
        int j = i - 1;
        
        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;

    }
}

int binarySearch(Array array, int n, int key){
    int left = 0;
    int right = n - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;

        if (array[mid] == key){
            return mid;
        } else if (array[mid] < key){
            left = mid + 1;
        } else if (array[mid] > key){
            right = mid - 1;
        }   
    }

    return -1;
}

int main(){

    Array a = {10,5,7,8,9,11,15, 8};

    int n = 8;
    int key = 11;
    insertionSort(a, n);

    for (int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }

    cout << endl;

   if (!(binarySearch(a, n, key) == -1)){
        cout << "ditemukan di " << binarySearch(a, n, key);
   }

    return 0;
}