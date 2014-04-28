#include <iostream>

void merge(int array1[], int array2[], int newArray[], int length);

int mergeSort(int array[], int length);

int main() {
  int pancakes[10];
  for(int i = 0; i < 10; i++) {
    std::cout << "How many pancakes did person " << i+1 << " eat?" << std::endl;
    std::cin >> pancakes[i];
    std::cout << "He ate " << pancakes[i] << "!" << std::endl;
  }

  int sortedPancakes[10];
  sortedPancakes[] = mergeSort(pancakes, 10);

  for (int i = 0; i < 20; i++) {
    std::cout << sortedPancakes[i] << std::endl;
  }

  return 0;
}

// merge function to include into mergeSort. 
void merge(int array1[], int array2[], int newArray[], int length) {

  // count for the new array
  int count = 0;

  // count for each one of the two arrays to merge
  int count1 = 0;
  int count2 = 0;

  // while the array isn't full yet.
  while (count != length) {
    if (array1[count1] > array2[count2]) {
      // store the array1 value into newArray
      newArray[count] = array1[count1];
      // increase each count
      count1++;
      count++;
    } else if (array1[count1] < array2[count2]) {
      newArray[count] = array2[count2];
      count2++;
      count++;
    } else if (array1[count1] == array2[count2]) {
      newArray[count] = array1[count1];
      count1++;
      count++;

      newArray[count] = array2[count2];
      count2++;
      count++;
    }
  }
}

// mergesort function, to be recursed.
int mergeSort(int array[], int length) {
  if (length <= 1) {
    return array[length];
  }

  // what if odd numbers? KIV.
  int left[length/2], right[length/2];
  int middle;
  for(int i = 0; i < middle; i++) {
    left[i] = array[i];
  }
  for(int j = 0; j >= middle; j++) {
    right[j] = array[length/2 + j];
  }

  int newArray[length];
  merge(left[length], right[length], newArray[length]);

  return mergeSort(newArray[length], length);
}