#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include <unordered_set>
// A задача
/*
int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        std::cin >> numbers[i];
    }

    std::set<int> uniqueNumbers;
    for (int i = 0; i < N; i++) {
        uniqueNumbers.insert(numbers[i]);
    }

    std::cout << uniqueNumbers.size() << std::endl;

    return 0;
}
*/
// B задача
/*
int main() {
    std::map<int, std::vector<std::string>> students;

    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "") {
            break;
        }
        int classNum;
        std::string surname;
        std::istringstream iss(line);
        iss >> classNum >> surname;

        students[classNum].push_back(surname);
    }

    for (int classNum = 9; classNum <= 11; classNum++) {
        std::vector<std::string> classStudents = students[classNum];
        for (const std::string& surname : classStudents) {
            std::cout << classNum << " " << surname << std::endl;
        }
    }

    return 0;
}
*/
// D задача
/*
bool isBalanced(const std::string& sequence) {
    std::stack<char> brackets;

    for (char c : sequence) {
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty()) {
                return false;
            }

            char top = brackets.top();
            brackets.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return brackets.empty();
}

int main() {
    std::string sequence;
    std::cin >> sequence;

    if (isBalanced(sequence)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
*/
// E задача
/*
int main() {
    std::string expression;
    std::stack<int> operands;
    std::string token;
    int operand1, operand2;
    std::getline(std::cin, expression);
    std::istringstream iss(expression);
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {

            operand2 = operands.top();
            operands.pop();
            operand1 = operands.top();
            operands.pop();

            if (token == "+") {
                operands.push(operand1 + operand2);
            }
            else if (token == "-") {
                operands.push(operand1 - operand2);
            }
            else if (token == "*") {
                operands.push(operand1 * operand2);
            }
        }
        else {
            int operand = std::stoi(token);
            operands.push(operand);
        }
    }
    int result = operands.top();
    std::cout << result << std::endl;
    
    return 0;
}
*/

// G задача
int main() {
    std::unordered_set<std::string> set; 

    char operation;
    std::string word;

    while (std::cin >> operation >> word) {
        if (operation == '+') {
            set.insert(word); 
        }
        else if (operation == '-') {
            set.erase(word); 
        }
        else if (operation == '?') {
            if (set.count(word) > 0) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
        else if (operation == '#') {
            break; 
        }
    }

    return 0;
}