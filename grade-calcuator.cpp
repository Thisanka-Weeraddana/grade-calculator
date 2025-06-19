#include <iostream>
#include <string>

int main()
{
    int max_student = 30;
    int student_counter = 0;
    std::string names[max_student];
    int scores[max_student];

    while (student_counter < max_student)
    {
        std::string name;
        int score;

        std::cout << "Enter a students name or type 'q' to quit: ";
        std::getline(std::cin, name);

        std::cout << "Enter students score: ";
        std::cin >> score;
        std::cin.ignore();
    }

    return 0;
}
