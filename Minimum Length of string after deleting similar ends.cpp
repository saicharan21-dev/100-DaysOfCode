class Solution {
public:
    int minimumLength(std::string s) {
        int n = s.length();  // Get the length of the input string.
    int left = 0;        // Initialize a pointer to the beginning of the string.
    int right = n - 1;   // Initialize a pointer to the end of the string.

    // Continue as long as the left pointer is less than the right pointer.
    while (left < right) {
        // If the characters at the left and right pointers match:
        if (s[left] == s[right]) {
            char target = s[right];  // Store the matching character.
            
            // Move the left pointer to the right while it matches the target character.
            while (left <= right && s[left] == target) {
                left++;
            }
            
            // Move the right pointer to the left while it matches the target character.
            while (left <= right && s[right] == target) {
                right--;
            }
        } else {
            // If the characters at left and right don't match, we cannot remove them.
            break;
        }
    }

    // Calculate and return the minimum length after the operations.
    return right - left + 1;
    }
};
