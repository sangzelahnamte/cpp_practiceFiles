#include <iostream>
#include <cstring>
#include <string>
#include <string_view>
#include "compare.h"

void find_match(std::string data[], unsigned int size, std::string key){
    std::string* match_string = new std::string[size];
    unsigned int count_match{0};
    for (size_t i = 0; i < size; i++)
    {
        if (data[i].find(key) != std::string::npos)
        {
            match_string[count_match++] = data[i];
        }
        else
        {
            std::cout << "Could not find " << key << " specific data stream" << std::endl;
        }
    }
    std::cout << "Find matching = " << count_match << std::endl;
    for (size_t i = 0; i < count_match; i++)
    {
        std::cout << match_string[i];
    }
    
    delete[] match_string;
}

std::string who_s_the_greatest(std::string data[] , unsigned int size){   
    std::string result = data[0];   
    for (size_t i = 0; i < size; i++)
    {
        if (data[i] > result)
        {
            result = data[i];
        }
    } 
    return result;
}

void extract_message( const char* src1 , const char* src2, const char* src3, const char* src4){
    char* result;
    result = new char[20]; // Dynamically allocate for space
    
    std::strncpy(result, src1 + 15, 3);
    std::strncpy(result + 3, src2 + 5, 4);
    std::strncpy(result + 7, src3 + 10, 3);
    std::strncpy(result + 10, src4 + 3, 5);
    result[15] = '\0';
    std::cout << "result : " << result << std::endl;

    delete[] result;
}

std::string Replace_it(std::string& variable, std::string& replace_var, int starting_index, int count){
    return replace_var.replace(starting_index, count, variable);
}

unsigned digit_sum(unsigned int input){
    unsigned  result = 0;
    unsigned  temp = 0;
    while (input > 0)
    {
        temp = input % 10;
        result += temp;
        input /= 10;
    }
    
    return result;
}

void show_odds(unsigned long long int input);

int main(){
    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};
    extract_message(src1, src2, src3, src4);

    // ***********************************************  STRING LIBRARY **********************************************************************

    std::string empty_var;
    std::string var1{"Roses are red and violets are blue"}; // c++ 20 onwards
    std::string temp{var1};
    std::string var2{"Embedded", 4};
    std::string copies(3, 'x'); // number of character copies
    std::string cutting_string{"Hello world", 6, 5};

    std::cout << "First string: " << temp << "\n";
    std::cout << "Second string: " << var2 << "\n";
    std::cout << "Third string: " << copies << "\n";
    std::cout << "Fourth string: " << cutting_string << std::endl;

    std::string name{"Vanlalhmangaiha"};
    std::cout << "Name with string number: " << name.append(std::to_string(45));

    std::cout << std::endl;
    std::string var3{"RAM disc capacity volatile"};
    const char* var4{"to memory"};
    std::cout << std::boolalpha;
    std::cout << "Compare two string = " << var3.compare(var4) << std::endl; 
    var3.reserve(40);
    var3.shrink_to_fit();
    var3.insert(0, 1, 'V');
    var3.insert(27, var4);
    var3.erase(4, var3.size() - 5);
    std::cout << var3 << std::endl;
    std::cout << "Is variable empty =" << std::boolalpha << var3.empty() << std::endl;
    std::cout << "Size of variable = " << var3.size() << std::endl;
    std::cout << "Length of variable = " << var3.length() << std::endl;
    std::cout << "Max size of variable = " << var3.max_size() << std::endl;
    std::cout << "Capacity of variable = " << var3.capacity() << std::endl;

    std::string input[] {"I","am","the","king","of","the","jungle"};
    int size = std::size(input);
    std::cout << "Size = " << size << std::endl;
    std::cout << "Lexicalgraph remainder = " << who_s_the_greatest(input, size) << std::endl;

    std::string var5 = "shorthand";
    std::string destination = " out of memory";
    std::cout << "Replaced string = " << Replace_it(destination, var5, 5, 4) << std::endl;
    std::cout  << var5 << std::endl;

    // **************************************************** New version of string manipulation string library *****************************

    std::string var6{"Concurrency level overclocking"};
    std::string var7{"Render bit map"};
    var6.replace(0, 11, var7);
    std::cout << "String extrapolation = " << var6 << std::endl;
    std::string var8{"Conversion formula"};
    std::string var9{"Alphanumerical to string concatenation of const char is ill defined in memory"};
    var8.replace(0, 10, var9, 14, 9);
    std::cout << "On the heap string literals = " << var8 << std::endl;

    std::string var10{"Memory allocation"};
    char txt[11]{};
    var10.copy(txt,10,7);
    std::cout << "String data copy = " << txt << std::endl;

    std::string var11{"Data buffer to console is allocated to new memory during runtime"};
    std::string temporal_string;
    temporal_string.swap(var11);
    std::cout << "Swap data = " << temporal_string << std::endl;

    // ********************************************************* search copy **************************************************************

    std::string var12{"0x15A00, 55x0ff, Binary algorithm for sorting and branching"};
    size_t dataFind = var12.find("ing", 45); // specify starting index
    if (dataFind == std::string::npos)
    {
        std::cout << "Unable to find specified data" << "\n";
    }
    else
    {
        std::cout << "Data captured at index = " << dataFind << "\n";
    }
    std::string var13{"I/O :: input stream output stream binary search for local stream of data found irregular data"};
    const char* search_var{"5x00ff"};
    size_t indexing_search = var13.find(search_var);
    if (indexing_search != std::string::npos)
    {
        std::cout << "Character index " << search_var << " array specified at = " << indexing_search << std::endl;
    }
    else
    {
        std::cout << "Could not find index array data " << search_var << " at specified location, memory overflow" << std::endl;
    }

    std::string data_input[]{"Open Graphics Language", "Vulkan Graphics", "Direct X", "Bit Map pixel 2"};
    unsigned int data_size = std::size(data_input);
    std::string spec_key{"Graphics"};
    find_match(data_input, data_size, spec_key);
    std::cout << "\n";

    // ********************************************** number to string *************************************************************
    
    int num1{45};
    unsigned int num2{740};
    std::string num1_str{std::to_string(num1)};
    std::string num2_str{std::to_string(num2)};
    std::cout << "Integer conversion: " << num1_str << ", " << num2_str << std::endl;
    float num3{15.40};
    double num4{1500.3250};
    std::string num3_str{std::to_string(num3)};
    std::string num4_str{std::to_string(num4)};
    std::cout << "Float double conversion: " << num3_str << ", " << num4_str << std::endl;

    // ************************************************* string to number data conversion **********************************************

    int num1_con{std::stoi(num1_str)}; // back to int
    long num3_con{std::stol(num3_str)};
    long long num4_con{std::stoll(num4_str)};
    std::cout << "to int: " << num1_con << std::endl;
    std::cout << "to long: " << num3_con << std::endl;
    std::cout << "to long long: " << num4_con << std::endl;

    unsigned long num1_ul{std::stoul(num1_str)};
    unsigned long long num3_ull{std::stoull(num3_str)};
    std::cout << "unsigned long and long long conversion: " << num1_ul << ", " << num3_ull << std::endl;

    std::string str_float{"15.01"};
    std::string str_double{"1500.002"};
    std::string str_longDouble{"16543.06548"};
    float num_float{std::stof(str_float)};
    double num_double{std::stod(str_double)};
    long double num_LDouble{std::stold(str_longDouble)};
    std::cout << "Float conversion: " << num_float << "\t" << "Size of flaot: " << sizeof(num_float) << std::endl;
    std::cout << "Double conversion: " << num_double << "\t" << "Size of double: " << sizeof(num_double) << std::endl;
    std::cout << "Long double conversion: " << num_LDouble << "\t" << "Size of long double: " << sizeof(num_LDouble) << std::endl;

    std::cout << "\a" << std::endl;

    // *************************************************** Raw string literals ************************************************************

    std::string str_ltr{R"(Sample audio buffer in memory
    Re-sampling audio buffer
    Flush to memory
    Push to heap)"};
    std::cout << "Raw string literal output: " << str_ltr << std::endl;

    // *************************************************** String copy in memory **********************************************************

    std::string var14{"Macro not assignable to const char pointer, suitable assignment 'int' to 'char' info()"};
    std::string &var15{var14};
    char* ptr1{var14.data()};
    char* ptr2{var15.data()};

    std::cout << "string one memory address: " << (void*)ptr1 << std::endl;
    std::cout << "String two memory address: " << (void*)ptr2 << std::endl;

    // ***************************************************** String view ******************************************************************

    std::string var_str1{"UTF-8 Character"};
    std::string var_str2{var_str1}; // copy
    std::string var_str3{var_str1}; // copy
    // different address in memory
    std::cout << "Address of var one: " << &var_str1 << std::endl;
    std::cout << "Address of var two: " << &var_str2 << std::endl;
    std::cout << "Address of var three: " << &var_str3 << std::endl;

    std::string_view var_str4{var_str1}; // view the string literal from previous string variable
    std::cout << "String view: " << var_str4 << std::endl;

    // *************************************************** function ***********************************************************************
    unsigned int number1 = 62727289;
    std::cout << "Sum of digits: " << digit_sum(number1) << std::endl;

    unsigned long long int number2 = 98723713;
    show_odds(number2);
    std::cout << "\n";
    // ************************************* multiple file compilation ***************************************
    int var16 = 15, var17 = 89, var18 = 12, var19 = 2;
    std::cout << "Maximum number= " << max_data(&var16, &var17) << std::endl;
    std::cout << "Addition result= " << add_data(&var18, &var19) << std::endl;
    std::cout << "Value changed = " << var16 << "\t" << var17 << "\t" << var18 << "\t" << var19 << std::endl;

    unsigned long long int number3{454};
    std::cout << "Is the number " << number3 << " Palindrome or not: "  << std::boolalpha << is_palindrome(number3) << std::endl;

    const char* var_str5{"I van chello"};
    char value{'c'};
    find_character(var_str5, sizeof(var_str5)/ sizeof(char), value);

    // ************************ insertion sort ********************************************************
    std::cout << "\n";
    int num_arr[]{2, 3, 56, 12, 78, 98, 45, 10, 22};
    unsigned int length = sizeof(num_arr) / sizeof(num_arr[0]);
    sort_array(num_arr, length);

    return 0;
}

void show_odds(unsigned long long int input){
    unsigned long long int temp = 0;
    while (input > 0)
    {
        temp = input % 10;
        if (temp % 2 != 0)
        {
            std::cout << temp;
        }
        input /= 10;
    }
}