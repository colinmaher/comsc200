#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void menu(){
    cout << "\n----- Fool Proof Menu -------------\n";
    cout << "   1 - Enter a line of text\n";
    cout << "   2 - Enter a text phrase\n";
    cout << "   3 - Enter an integer number\n";
    cout << "   4 - Enter a float number\n";
    cout << "   q - quit\n";
    cout << "   Enter your choice: ";
}

int main(){
    string choice, input, text, word;
    int i;
    float f;
    stringstream ss;
    
    while(choice != "q"){
        ss.str("");
        menu();
        getline(cin, choice);
        
        if(choice == "q"){
            break;
        }
        
        else if(choice == "1"){
            cout << "Enter a line of text: ";
            getline(cin, input);
            cout << "You have entered a string: " << input;
        }
        
        else if(choice == "2"){
            do{
                ss.clear();
                ss.str("");
                cout << "Enter a text phrase: ";
                getline(cin, input);

                ss << input;
                ss >> word;
                if(ss.fail()){
                    cout << "Error: Failed to convert to string";
                }
                else{
                    cout << "You have entered a string: " << word;
                }
            }while(ss.fail());
        }
        
        else if(choice == "3"){
            do{
                ss.clear();
                ss.str("");
                cout << "Enter an integer number: ";
                getline(cin, input);
                ss << input;
                ss >> i;
                if(ss.fail()){
                    cout << "Error: Failed to convert to integer. ";
                }
                else{
                    cout << "You have entered an integer: " << i;
                }
            }while(ss.fail());
        }
        
        else if(choice == "4"){
            do{
                ss.clear();
                ss.str("");
                cout << "Enter a float number: ";
                getline(cin, input);
                ss << input;
                ss >> f;
                if(ss.fail()){
                    cout << "Error: Failed to convert to float. ";
                }
                else{
                    cout << "You have entered a floating point number: " << f;
                }
            }while(ss.fail());
        }
        else{
            cout << "Please choose a valid menu option.";
        }
    }
}

