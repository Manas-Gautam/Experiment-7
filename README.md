# Experiment-7

**Topic: - __Arrays and Strings in C++__**

**Theory:-**

Arrays and strings are fundamental concepts in C++ that help manage collections of data. Understanding these concepts is crucial for handling data efficiently and effectively in C++ programming.

### **Arrays in C++**

**1. Definition:**
An array is a collection of elements of the same type stored in contiguous memory locations. Arrays are used to store multiple values in a single variable, which can be accessed using an index.

**2. Declaration and Initialization:**
- **Declaration:** You declare an array by specifying the type of its elements and the number of elements it will hold.
  ```cpp
  int numbers[5]; // Declares an array of 5 integers
  ```
- **Initialization:** You can initialize an array at the time of declaration.
  ```cpp
  int numbers[5] = {1, 2, 3, 4, 5}; // Initializes the array with values
  ```

**3. Accessing Elements:**
- Array elements are accessed using an index, with indexing starting from 0.
  ```cpp
  int firstElement = numbers[0]; // Accesses the first element of the array
  ```

**4. Size of Arrays:**
- The size of an array is fixed and must be known at compile time. The `sizeof` operator can be used to determine the size of an array.
  ```cpp
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculates the number of elements
  ```

**5. Multidimensional Arrays:**
- Arrays can have more than one dimension, such as 2D arrays (matrices).
  ```cpp
  int matrix[3][4]; // Declares a 2D array with 3 rows and 4 columns
  ```

### **Strings in C++**

**1. Definition:**
Strings are sequences of characters. In C++, strings can be represented using C-style character arrays or the `std::string` class from the Standard Library.

**2. C-Style Strings:**
- **Declaration:** A C-style string is an array of characters ending with a null character (`'\0'`).
  ```cpp
  char str[] = "Hello"; // C-style string with implicit null terminator
  ```
- **Accessing Elements:** Characters in C-style strings are accessed using indices.
  ```cpp
  char firstChar = str[0]; // Accesses the first character 'H'
  ```

**3. Standard Library Strings (`std::string`):**
- **Declaration and Initialization:** `std::string` provides a more flexible and convenient way to handle strings.
  ```cpp
  #include <string>
  std::string str = "Hello"; // Initializes a string object with "Hello"
  ```
- **Operations:** The `std::string` class supports various operations, such as concatenation, comparison, and substring extraction.
  ```cpp
  std::string str1 = "Hello";
  std::string str2 = "World";
  std::string combined = str1 + " " + str2; // Concatenates two strings
  ```

**4. Common Methods:**
- `length()`: Returns the length of the string.
  ```cpp
  size_t len = str.length(); // Gets the length of the string
  ```
- `substr()`: Extracts a substring from the string.
  ```cpp
  std::string sub = str.substr(0, 3); // Extracts substring "Hel"
  ```
- `find()`: Searches for a substring within the string.
  ```cpp
  size_t pos = str.find("lo"); // Finds the position of substring "lo"
  ```

### **Key Differences Between Arrays and Strings**

- **Fixed Size vs. Dynamic Size:** Arrays have a fixed size determined at compile time, whereas `std::string` can dynamically resize and manage memory.
- **Ease of Use:** `std::string` provides a rich set of member functions and operations, making it more convenient and safer than C-style strings.
- **Null Terminators:** C-style strings use a null character to mark the end, while `std::string` handles this internally.

## Experiment{7A}: - Create and display array using for loop

**Code: -**

#include <iostream>

int main() {
    const int SIZE = 5; // Define the size of the array
    int numbers[SIZE];  // Declare an array of integers

    // Initialize the array with values
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = i + 1; // Assign values to the array elements
    }

    // Display the array elements using a for loop
    std::cout << "Array elements are:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}

**Output:-**

![image](https://github.com/user-attachments/assets/a1bcc69e-a356-48f7-8f55-4c2ba1d82c01)


## Experiment{7B}: - Reverse the elements of an array

**Code**
#include <iostream>

int main() {
    int SIZE;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;

    // Validate the size input
    if (SIZE <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    int* numbers = new int[SIZE]; // Dynamically allocate an array of the specified size

    // Get array elements from the user
    std::cout << "Enter " << SIZE << " integers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i]; // Read each element from the user
    }

    // Reverse the array elements
    int start = 0;
    int end = SIZE - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;

        // Move towards the center
        ++start;
        --end;
    }

    // Display the reversed array
    std::cout << "Reversed array elements are:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}


**Output**

![image](https://github.com/user-attachments/assets/0ff79edf-6454-402a-8c69-e93cbbaf760e)



## Experiment{7C}: - Search an element in an array, print the number of times that element occurs in the array along with the position of the element

**Code:-**


#include <iostream>
#include <vector> // For std::vector to store positions

int main() {
    int SIZE;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;

    // Validate the size input
    if (SIZE <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    int* numbers = new int[SIZE]; // Dynamically allocate an array of the specified size

    // Get array elements from the user
    std::cout << "Enter " << SIZE << " integers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i]; // Read each element from the user
    }

    int searchElement;
    std::cout << "Enter the element to search for: ";
    std::cin >> searchElement;

    // Variables to track the number of occurrences and positions
    int count = 0;
    std::vector<int> positions;

    // Search for the element in the array
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] == searchElement) {
            ++count; // Increment count
            positions.push_back(i); // Store the position
        }
    }

    // Display the results
    if (count > 0) {
        std::cout << "Element " << searchElement << " occurs " << count << " times." << std::endl;
        std::cout << "Positions of the element:" << std::endl;
        for (int pos : positions) {
            std::cout << "Index " << pos << std::endl;
        }
    } else {
        std::cout << "Element " << searchElement << " not found in the array." << std::endl;
    }

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}


**Output** :-  ![image](https://github.com/user-attachments/assets/c8f7d164-6250-4c96-832d-941b726bee67)


## Experiment{7D}: - Find the sum and average of a given array.

**Code: -**
#include <iostream>

int main() {
    int SIZE;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;

    // Validate the size input
    if (SIZE <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    int* numbers = new int[SIZE]; // Dynamically allocate an array of the specified size

    // Get array elements from the user
    std::cout << "Enter " << SIZE << " integers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i]; // Read each element from the user
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i]; // Accumulate the sum
    }

    // Calculate the average
    double average = static_cast<double>(sum) / SIZE;

    // Display the results
    std::cout << "Sum of the array elements: " << sum << std::endl;
    std::cout << "Average of the array elements: " << average << std::endl;

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}



**Output:-** ![image](https://github.com/user-attachments/assets/7b482e0e-35ef-4e5f-8a77-b117169e58bd)


## Experiment{7E}: - Find the minimum and maximum element from the given array.

**Code:-**
#include <iostream>
#include <limits> // For std::numeric_limits

int main() {
    int SIZE;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;

    // Validate the size input
    if (SIZE <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    int* numbers = new int[SIZE]; // Dynamically allocate an array of the specified size

    // Get array elements from the user
    std::cout << "Enter " << SIZE << " integers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i]; // Read each element from the user
    }

    // Initialize min and max variables
    int min = std::numeric_limits<int>::max(); // Set to the largest possible integer
    int max = std::numeric_limits<int>::min(); // Set to the smallest possible integer

    // Find the minimum and maximum elements
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] < min) {
            min = numbers[i]; // Update min if a smaller value is found
        }
        if (numbers[i] > max) {
            max = numbers[i]; // Update max if a larger value is found
        }
    }

    // Display the results
    std::cout << "Minimum element in the array: " << min << std::endl;
    std::cout << "Maximum element in the array: " << max << std::endl;

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}

**Output:-**
![image](https://github.com/user-attachments/assets/3895ee66-1d38-47b4-88de-a45209fed704)


## Experiment{7F}: - Take string input from user and print it.


**Code:-**
#include <iostream>
#include <string>  // For std::string and std::getline
#include <limits>  // For std::numeric_limits

int main() {
    // Method 1: Read a single word
    std::string singleWord;
    std::cout << "Enter a single word: ";
    std::cin >> singleWord;
    std::cout << "You entered the word: " << singleWord << std::endl;

    // To clear the input buffer before using std::getline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Method 2: Read a full line of text
    std::string fullLine;
    std::cout << "Enter a full line of text: ";
    std::getline(std::cin, fullLine);
    std::cout << "You entered the line: " << fullLine << std::endl;

    return 0;
}


**Output:-**

![image](https://github.com/user-attachments/assets/813d4d81-e90f-4c0d-9582-36cf4736343d)


## Experiment{7G}: - Take two strings from user and concatenate those.

**Code:-**

#include <iostream>
#include <string> // For std::string

int main() {
    // Declare variables for the two input strings
    std::string str1, str2;

    // Get the first string from the user
    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1); // Use std::getline to read a full line

    // Get the second string from the user
    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2); // Use std::getline to read a full line

    // Concatenate the two strings
    std::string concatenatedString = str1 + str2;

    // Display the concatenated result
    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    return 0;
}

**Output:-**
![image](https://github.com/user-attachments/assets/cbac1c1b-4f50-454b-9760-e8417b3cafb8)

## Experiment{7H}: - Take a string from user and reverse it.

**Code:-**
#include <iostream>
#include <string>  // For std::string and std::getline
#include <algorithm> // For std::reverse

int main() {
    // Declare a variable to hold the input string
    std::string inputString;

    // Get the string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString); // Use std::getline to read the entire line

    // Reverse the string
    std::reverse(inputString.begin(), inputString.end());

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}

**Output**
![image](https://github.com/user-attachments/assets/d247d59e-5f84-42ec-93f0-8d78ddb2cda3)


## Experiment{7I}: - Check whether the string entered by the user is palindrome.

**Code:-**
#include <iostream>
#include <string>      // For std::string and std::getline
#include <algorithm>   // For std::reverse

int main() {
    // Declare a variable to hold the input string
    std::string inputString;

    // Get the string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString); // Read the entire line

    // Remove spaces and convert to lowercase for uniform comparison
    std::string processedString;
    for (char c : inputString) {
        if (!std::isspace(c)) { // Skip spaces
            processedString += std::tolower(c); // Convert to lowercase and append
        }
    }

    // Create a reversed version of the processed string
    std::string reversedString = processedString;
    std::reverse(reversedString.begin(), reversedString.end());

    // Check if the processed string is equal to its reversed version
    if (processedString == reversedString) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

**Output:-**
![image](https://github.com/user-attachments/assets/2a318dff-4f72-4e13-8b2b-f5b480e8f451)


## Experiment{7J}: - Count the number of occurrences of a letter in the given string.

**Code:-**

#include <iostream>
#include <string>  // For std::string and std::getline

int main() {
    // Declare variables
    std::string inputString;
    char letterToCount;

    // Get the string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString); // Read the entire line

    // Get the letter to count from the user
    std::cout << "Enter the letter to count: ";
    std::cin >> letterToCount; // Read a single character

    // Ensure that the input for letterToCount is a single character
    if (!std::isalpha(letterToCount)) {
        std::cout << "Please enter a valid letter." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Initialize count
    int count = 0;

    // Count the occurrences of the letter
    for (char c : inputString) {
        if (c == letterToCount) {
            ++count; // Increment count if the letter matches
        }
    }

    // Display the result
    std::cout << "The letter '" << letterToCount << "' occurs " << count << " times in the string." << std::endl;

    return 0;
}

**Output:-**
![image](https://github.com/user-attachments/assets/d578738d-0f11-46a9-962b-f44044c2476c)




### **Conclusion**

Arrays and strings are essential data structures in C++. Arrays provide a way to store and manipulate fixed-size collections of elements, while `std::string` offers a more flexible and user-friendly approach to handling sequences of characters. Understanding how to use both effectively allows for more efficient and robust data management in C++ programs.

