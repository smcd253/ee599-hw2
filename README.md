# ee599-hw2
Arrays, Vectors, and Strings

## Question 1 - Overloading

## Question 2 - Size of Arrays
You can find the size of arrays by iterating over their memory locations. By adding 1 to the address of any array, dereferencing this address, and then subtracting the original array pointer, we can get the size of the array. 

```
int int_arr[] = {1, 2, 3, 4, 5};
char char_arr[] = "12345";
float float_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

int size_int_arr = *(&int_arr + 1) - int_arr;
std::cout << "size(int_arr) = " << size_int_arr << std::endl;

int size_char_arr = (int)(*(&char_arr + 1) - char_arr);
std::cout << "size(char_arr) = " << size_char_arr << std::endl;

int size_float_arr = (int)(*(&float_arr + 1) - float_arr);
std::cout << "size(float_arr) = " << size_float_arr << std::endl;

```

Output:

```
size(int_arr) = 5
size(char_arr) = 6
size(float_arr) = 7
```

Note: the size of a `char` array is always 1 more than the elements shown because we must include the `NULL` terminator. In addition, this means that you can find the size of any `char` array when passing by reference by iterating over the array until you reach the `NULL` terminator.

## Question 3 - 


