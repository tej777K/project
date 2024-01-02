// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
//typically using all the original letters exactly once.

//  Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

 #include <iostream>
#include <unordered_map>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Using an unordered_map to store character counts
    std::unordered_map<char, int> charCount;

    // Counting occurrences of each character
    for (char ch : inputString) {
        // Ignoring spaces if needed
        if(ch != ' ') {
            charCount[ch]++;
        }
    }

    // Displaying the character counts
    std::cout << "Character occurrences:\n";
    for (const auto& entry : charCount) {
        std::cout << "'" << entry.first << "': " << entry.second << " times\n";
    }

    return 0;
}
