//Name:- Manas Gautam
//PRN:- 23070123081
//Branch:- E&Tc{B1}

//Experiment{7A}: - Create and display array using for loop
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

    // Display the array elements
    std::cout << "Array elements are:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}

//Experiment{7B}: - Reverse the elements of an array
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

// Search an element in an array, print the number of times that element occurs in the array along with the position of the element
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

 //Experiment{7D}: - Find the sum and average of a given array.

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

//Experiment{7E}: - Find the minimum and maximum element from the given array.
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

//Experiment{7F}: - Take string input from user and print it.
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


//Experiment{7G}: - Take two strings from user and concatenate those.
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

//Experiment{7H}: - Take a string from user and reverse it.

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

//Experiment{7I}: - Check whether the string entered by the user is palindrome.
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

//Experiment{7J}: - Count the number of occurrences of a letter in the given string.

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

