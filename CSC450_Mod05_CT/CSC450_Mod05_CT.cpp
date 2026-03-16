#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to reverse the entire contents of a file
void reverseFile(const string& inputFile, const string& outputFile)
{
    ifstream inFile(inputFile);

    // Read entire file into a string
    string contents(
        (istreambuf_iterator<char>(inFile)),
        istreambuf_iterator<char>()
    );

    inFile.close();

    // Reverse all characters
    reverse(contents.begin(), contents.end());

    // Write reversed contents to new file
    ofstream outFile(outputFile);
    outFile << contents;

    outFile.close();
}

int main()
{
    string userInput;

    cout << "Enter text to add to the file: ";
    getline(cin, userInput);

    // Append user input to the provided file
    ofstream appendFile("../CSC450_Mod05_CT/CSC450_CT5_mod5.txt", ios::app);

    if (!appendFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    appendFile << userInput << endl;
    appendFile.close();

    // Reverse the updated file
    reverseFile("../CSC450_Mod05_CT/CSC450_CT5_mod5.txt",
    		    "../CSC450_Mod05_CT/CSC450-mod5-reverse.txt");

    cout << "Input appended successfully." << endl;
    cout << "Reversed file created: CSC450-mod5-reverse.txt" << endl;

    return 0;
}
