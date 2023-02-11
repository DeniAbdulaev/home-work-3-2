#include <iostream>
#include <string>

class Counter
{
private:
    int num;

public:
    Counter(int value) {
        num = value;
    }
    Counter() {
        num = 1;
    }
    int Plus() {
        return num++;
    }
    int Minus() {
        return num--;
    }
    int Pause() {
        return num;
    }
};
int main()
{
    int value = 0;
    std::string answer;
    std::string command;
    bool exit = false;
    do {
        std::cout << "Change the initial value?(Yes or No): ";
        std::cin >> answer;
        if (answer == "Yes" || answer == "yes") {
            std::cout << "Choose the initial value: ";
            std::cin >> value;
            Counter start(value);
            do {
                std::cout << "Choose the command ('+', '-', '=' или 'x'): ";
                std::cin >> command;
                if (command == "+") {
                    start.Plus();
                }
                else if (command == "-") {
                    start.Minus();
                }
                else if (command == "=") {
                    std::cout << start.Pause() << std::endl;
                }
                else if (command == "x") {
                    std::cout << "Goodbye.";
                }
            } while (command != "x");
        }
        else if (answer == "No" || answer == "no") {
            std::cout << "The initial value: " << "1" << std::endl;
            Counter start;
            do {
                std::cout << "Choose the command ('+', '-', '=' или 'x'): ";
                std::cin >> command;
                if (command == "+") {
                    start.Plus();
                }
                else if (command == "-") {
                    start.Minus();
                }
                else if (command == "=") {
                    std::cout << start.Pause() << std::endl;
                }
                else if (command == "x") {
                    std::cout << "Goodbye.";
                }
            } while (command != "x");
        }
        else {
            exit = true;
        }
    } while (exit);

}