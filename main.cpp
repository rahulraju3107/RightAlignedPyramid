#include <iostream>

int main()
{
    // Prompt user for height input
    int height;
    do
    {
        std::cout << "Height: ";
        std::cin >> height;
    } while (height < 1 || height > 8);
    
    // Main pyramid logic
    for (int i = 1; i <= height; i++)
    {
        // For right-aligned pyramid, need to print leading spaces
        // Row 1 needs (height - 1) spaces, row 2 needs (height - 2) spaces, etc
        for (int spaces = 0; spaces < height - i; spaces++)
        {
            std::cout << " ";
        }
        
        // Printing the hash (#) for current row
        // Row 1 gets 1 hash, row 2 gets 2 hashes, row i gets i hashes
        for (int hash = 0; hash < i; hash++)
        {
            std::cout << "#";
        }
        
        // Move to next line after completing current row
        std::cout << std::endl;
    }
    return 0;
}
