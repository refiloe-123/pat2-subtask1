m #include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to convert a letter to Morse code
string morseCode(char ch)
{
    switch(ch)
    {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

int main()
{
    string message;
    string fullMorse = "";

    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, message);

    // Convert all letters to uppercase
    for (int i = 0; i < message.length(); i++)
    {
        message[i] = toupper(message[i]);
    }

    cout << "\nOutput Morse code:\n";

    // Translate each character
    for (int i = 0; i < message.length(); i++)
    {
        char ch = message[i];

        // Ignore numbers and special characters
        if (ch >= 'A' && ch <= 'Z')
        {
            string code = morseCode(ch);

            cout << ch << ": " << code << endl;

            fullMorse += code + "   "; // 3 spaces between letters
        }
    }

    cout << "\nFull Morse Code Message:\n";
    cout << fullMorse << endl;

    return 0;
}
