# Window Title Checker

This program retrieves and prints the titles of all open windows.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. The program will enumerate through all open windows and print their titles to the console.

## Description

The program utilizes the Windows API to enumerate through all open windows and retrieve their titles. This is achieved by defining a callback function `get_title_callback` that retrieves the title of each window encountered. The main function `Title_Check` utilizes the `EnumWindows` function to enumerate through all windows and call the callback function for each window. Finally, in the `main` function, `Title_Check` is called to initiate the process of retrieving window titles.

## Dependencies

- Windows.h: Windows API header file.
- iostream: Standard input/output stream library for C++.
