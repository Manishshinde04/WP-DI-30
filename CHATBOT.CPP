#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    cout << "Hello! I'm a simple chatbot. Type 'exit' to end the conversation." << endl;
    
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        
        // Convert input to lowercase for case-insensitive comparison
        for (char &c : userInput) c = tolower(c);
        
        if (userInput == "exit") {
            cout << "Chatbot: Goodbye! Have a great day!" << endl;
            break;
        } else if (userInput.find("hello") != string::npos || userInput.find("hi") != string::npos) {
            cout << "Chatbot: Hello! How can I assist you today?" << endl;
        } else if (userInput.find("how are you") != string::npos) {
            cout << "Chatbot: I'm just a bot, but I'm doing great! How about you?" << endl;
        } else if (userInput.find("your name") != string::npos) {
            cout << "Chatbot: I'm ChatGPT, your friendly chatbot!" << endl;
        } else if (userInput.find("help") != string::npos) {
            cout << "Chatbot: Sure! How can I assist you today?" << endl;
        } else {
            cout << "Chatbot: I'm not sure how to respond to that. Could you rephrase?" << endl;
        }
    }
    
    return 0;
}
