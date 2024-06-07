#include <windows.h>
#include <iostream>

using namespace std;

// Callback function to retrieve window titles
BOOL CALLBACK get_title_callback(HWND hwnd, LPARAM lParam)
{
    const DWORD TITLE_SIZE = 1024; // Define a constant size for the title
    WCHAR windowTitle[TITLE_SIZE]; // Define a character array to hold the window title

    GetWindowTextW(hwnd, windowTitle, TITLE_SIZE); // Get the window title
    int length = GetWindowTextLength(hwnd); // Get the length of the window title

    wprintf(L"%s\n", windowTitle); // Print the window title as wide characters
    return TRUE; // Return TRUE to continue processing other windows
}

// Function to check window titles
void Title_Check()
{
    EnumWindows(get_title_callback, NULL); // Enumerate windows and retrieve titles using our callback function
}

// Main function
int main()
{
    Title_Check(); // Call the function to check window titles
    getchar(); // Wait for a character before exiting
}
