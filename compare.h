#include <iostream>

int max_data(int *num_1, int *num_2);
int add_data(int *num_1, int *num_2);

bool is_palindrome(unsigned long long int num);
int increment_num(const int* num_a); // pointer to const cannot modify, read only
int read_data(const int* const num_a); // const pointer to const cannot change pointer address and cannot modify data, read only
void decrement_num(const int &num_a); // const reference cannot modify original address value, read only

int contains_character( const char* str , unsigned int size , char c); // return the index of character
void find_character(const char* str, unsigned int size, char c);
void insertion_sort(int * array, unsigned int size);
void sort_array(int *array_a, unsigned int size);