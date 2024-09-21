class Solution {
public:
    string convertToTitle(int columnNumber) {
        string h = "";  // Initialize an empty string for the result

        while (columnNumber > 0) {
            columnNumber--;  // Decrement to adjust for 1-based indexing
            int remainder = columnNumber % 26;  // Get the remainder (0 to 25)
            char current = 'A' + remainder;  // Map remainder to corresponding letter ('A' + 0 = 'A')
            h = current + h;  // Prepend the character to the result string
            columnNumber /= 26;  // Move to the next "digit"
        }

        return h;  // Return the final result
    }
};
