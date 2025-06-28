#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> greetings = {"Hello, World!", "Bonjour le monde!", "Hola, Mundo!", "Hallo Welt!", "Ciao, Mondo!"};
    for (const auto& greeting : greetings) {
        cout << greeting << endl;
    }
    return 0;
}