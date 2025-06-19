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

        if (name == "q" || name == "Q")
        {
            break;
        }

        std::cout << "Enter students score: ";
        std::cin >> score;
        std::cin.ignore();

        names[student_counter] = name;
        scores[student_counter] = score;
        student_counter++;
    }

    return 0;
}
