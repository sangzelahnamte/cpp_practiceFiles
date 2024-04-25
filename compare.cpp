#include <iostream>

int max_data(int *num_1, int *num_2){
    if (*num_1 > *num_2)
    {
        return *num_1;
    }
    else
    {
        return *num_2;
    }
}

int add_data(int *num_1, int *num_2){
    return *num_1 + *num_2;
}

bool is_palindrome(unsigned long long int num){
    unsigned long long int temp = 0;
    unsigned long long int rev = 0;
    unsigned long long int digit = num;
    while (num != 0)
    {
        temp = num % 10;
        rev = ((rev * 10) + temp);
        num /= 10;
    }
    if (digit != rev)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int contains_character( const char* str , unsigned int size , char c){
    size_t i = 0;
    for(i; i < size; i++){
        if (*(str + i) == c)
        {
            return i;
        }
    }
    return -1;
}

void find_character(const char* str, unsigned int size, char c){
    auto index = contains_character(str, size, c);
    if (index != -1)
    {
        std::cout << "Found character at " << c << " at index " << index;
    }
    else
    {
        std::cout << "Could not find the character " << c << " in " << str;
    }
}

void insertion_sort(int *array, unsigned int size){
    for (size_t i = 1; i < size; i++)
    {
        unsigned int key = array[i];
        int j = i - 1; // index before key
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j]; // store the greater value to next index
            j = j - 1; // decrement j to move the key backword
        }
        array[j + 1] = key; // store key before greater value
    }
}

void sort_array(int *array_a, unsigned int size){
    insertion_sort(array_a, size);
    std::cout << "Sorted array: ";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << array_a[i] << " ";
    }
    std::cout << std::endl;
}