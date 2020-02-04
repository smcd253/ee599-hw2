# ee599-hw2
Arrays, Vectors, and Strings

## Question 1 - Overloading
**Runtime Analysis**
```
//overload 1
int Solution::add(int a, int b){}
```
Runtime = &Theta;(8) --> O(1)

```
//overload 2
std::string Solution::add(std::string& a, std::string& b){}
```
Runtime = &Theta;(7) --> O(1)

```
//overload 3
std::string Solution::add(std::string& a, int b) {}
```
Runtime = &Theta;(7 + log(b)) --> O(1) (where log(b) represents the number of steps required to convert int b into a string)

```
// overload 4
std::string Solution::add(int a, std::string& b) {}
```
Runtime = &Theta;(log(a) + 7) --> O(1) (where log(a) represents the number of steps required to convert int a into a string)

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

**Runtime Analysis**
Runtime of all functions is &theta;(4) --> O(1)

## Question 3 - Manipulating Vectors

**Runtime Analysis**
```
void Solution::remove_duplicates(std::vector<int>& input) {}
```
Runtime = &Theta;(2n + 3) --> O(n)

```
void Solution::remove_duplicates_raw(std::vector<int>& input)
```
Runtime = &Theta;(2 + nlog(n)) --> O(nlog(n))

```
void Solution::reverse(std::vector<int>& input)
```
Runtime = &Theta;(3 + 5*(n/2)) --> O(n)

```
void Solution::remove_odds(std::vector<int>& input)
```
Runtime = &Theta;(1 + 4n) --> O(n)

```
std::vector<int> Solution::concat(std::vector<int>& input1, std::vector<int>& input2)
```
Runtime = &Theta;(1 + n^2 + n^2 + 1) --> O(n^2)
note: can go to O(n) by reserving space beforehand

```
std::vector<int> Solution::intersection(std::vector<int>& input1, std::vector<int>& input2)
```
Runtime = &Theta;(3 + n^2 * log(n) + 2) --> O(n^2 * log(n))

## Q4 - Swap
**Runtime Analysis**

```
void Solution::swap(int& a, int& b)
```
Runtime = &Theta;(3) --> O(1)

```
void Solution::swap(int* a, int* b)
```
Runtime = &Theta;(5) --> O(1)

## Q5 - Strings
**Runtime Analysis**

```
std::string Solution::swap(std::string input, size_t ind1, size_t ind2)
```
Runtime = &Theta;(11 + 2n) --> O(n)

```
std::string Solution::reverse(std::string input)
```
Runtime = &Theta;(5 + n^2) --> O(n^2)
note: would be O(n) if used a reverse similar to that in q3 (pass by reference and swap 2 elements on either side of string working toward middle) (ran out of time to implement)

## Q6 - Palindrome
**Runtime Analysis**

```
bool Solution::palindrome(std::string input)
```
Runtime = &Theta;(1 + 2 + n^2 + n) --> O(n^2)

```
bool Solution::approx_palindrome(std::string input)
```
Runtime = &Theta;(1 + n + 1 + n^2 + n) --> O(n^2)

note: can make both of these O(n) by modifying reverse function (pass by reference and swap 2 elements on either side of string working toward middle) (ran out of time to implement)

## Q7 - Mappable Strings
**Runtime Analysis**

```
std::vector<std::string> Solution::find_mapping(std::string from, std::string to)
```
Runtime = &Theta;(5 + n*log(n) + n + m) --> O(nlog(n))

## Q7 - Mappable Strings
**Runtime Analysis**

```
std::vector<int> Solution::reverse(std::vector<int> input)

```
Runtime = &Theta;(2 + n^2) --> O(n^2)
note: would be O(n) if used a reverse similar to that in q3 (pass by reference and swap 2 elements on either side of string working toward middle) (ran out of time to implement)

```
std::vector<int> Solution::special_sort(std::vector<int> input)

```
Runtime = &Theta;(1 + nlog(n) + 4 + 2n + 2n^2 + 2n) --> O(n^2)

## Big Takeaway
- Do runtime analysis first. only realized all of my reverse() functions (apart from q3) are O(n^2) just before submission. string.insert is of n complexity. this is expensive. 