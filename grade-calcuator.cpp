#include <iostream>
#include <string>

char calculate_grade(int scores[], int student_counter)
{
    double sum = 0;

    for (int i = 0; i < student_counter; i++)
    {
        sum += scores[i];
    }

    double average = sum / student_counter;

    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else
    {
        return 'F';
    }
}

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

    if (student_counter == 0)
    {
        std::cout << "No students were entered cannot calculate average grade.\n";
        return 0;
    }

    std::cout << "*** Student records***" << "\n";
    for (int i = 0; i < student_counter; i++)
    {
        std::cout << names[i] << ": " << scores[i] << "\n";
    }

    return 0;
}
