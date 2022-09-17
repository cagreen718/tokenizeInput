#include <iostream>
#include <cstring>
using namespace std;

int main() {
        char input[100]; // the string to read input in;

        char* ptr;

        while(1) {
                // here you have to prompt the command line using pwd! 
                cout << " Enter Input> ";
                cin.getline(input, 100); // read whole line or stop when read 100 characters,
                cout << "This Command has been input: " << input;
                cout << "\n ------------- Tokenized to: \n";
                ptr = strtok(input, " "); // read first token
                cout << ptr << endl; 
                while (ptr != NULL) {
                        ptr = strtok(NULL, " ");
                        cout << ptr << endl; 
                }
        }  
}