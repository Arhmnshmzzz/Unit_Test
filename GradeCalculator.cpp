#include <iostream>
#include <string>
#include <conio.h>

std::string getGrade(int score) {
    if (score < 0 || score > 100) return "Invalid";
    else if (score >= 80) return "A+";
    else if (score >= 70) return "A";
    else if (score >= 60) return "B";
    else if (score >= 50) return "C";
    else if (score >= 40) return "D";
    else return "F";
}

int main() {
    int score;
    std::cout << "Enter your Number: ";
    std::cin >> score;

    std::cout << "Grade: " << getGrade(score) << std::endl;

    getch();
    return 0;
}
