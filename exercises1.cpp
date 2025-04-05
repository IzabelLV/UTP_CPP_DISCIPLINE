#include <iostream>
#include <vector>
#include <iomanip>


void firstExercise()
{
    double x, y;
    std::cin >> x >> y;

    if (x > 0 && y > 0)
    {
        std::cout << "I квадрант\n";
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "II квадрант\n";
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "III квадрант\n";
    }
    else if (x > 0 && y < 0)
    {
        std::cout << "IV квадрант\n";
    }
    else
    {
        std::cout << "Грешка\n";
    }
}

void secondExercise()
{
    int month;
    std::cin >> month;

    switch(month)
    {
        case 1:
        {
            std::cout << "Януари\n";
            break;
        }
        case 2:
        {
            std::cout << "Февруари\n";
            break;
        }
        case 3:
        {
            std::cout << "Март\n";
            break;
        }
        case 4:
        {
            std::cout << "Април\n";
            break;
        }
        case 5:
        {
            std::cout << "Май\n";
            break;
        }
        case 6:
        {
            std::cout << "Юни\n";
            break;
        }
        case 7:
        {
            std::cout << "Юли\n";
            break;
        }
        case 8:
        {
            std::cout << "Август\n";
            break;
        }
        case 9:
        {
            std::cout << "Септември\n";
            break;
        }
        case 10:
        {
            std::cout << "Октомври\n";
            break;
        }
        case 11:
        {
            std::cout << "Ноември\n";
            break;
        }
        case 12:
        {
            std::cout << "Декември\n";
            break;
        }
        default:
        {
            std::cout << "Невалиден вход!\n";
        }
    }
}

void thirdExercise()
{
    int size;
    std::cin >> size;

    if (size > 10)
    {
        std::cout << "Cannot be bigger than 10!\n";
        return;
    }

    double product = 1;
    for (int i = 0; i < size; ++i)
    {
        double digit;
        std::cin >> digit;

        if (digit >= 100)
        {
            std::cout << "The digit must be less than 100!\n";
            return;
        }

        product *= digit;
    }

    std::cout << "The product is: " << product << "\n";
}

void fourthExercise()
{
    int size;
    double k;
    std::cin >> size;

    std::vector<double> digits;
    for (int i = 0; i < size; ++i)
    {
        double digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
     
    std::cin >> k;

    double sum = 0;
    int count = 0;

    for (double d : digits)
    {
        if (d > k)
        {
            sum += d;
            count++;
        }
    }

    if (count > 0)
    {
        double average = sum / count;
        std::cout << std::fixed << std::setprecision(2) << average << '\n';
    }
    else
    {
        std::cout << "Няма число, което да e по-голямо от " << k << ".\n";
    }
}

void fifthExercise()
{
    int size;
    double u,v;
    std::cin >> size;

    std::vector<double> digits;
    for (int i = 0; i < size; ++i)
    {
        double digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
     
    std::cin >> u >> v;

    if (u >= v) {
        std::cout << "u трябва да е по-малко от v!\n";
        return;
    }

    double sum = 0;
    int count = 0;

    for (double d : digits)
    {
        if (d < u || d > v)
        {
            sum += d;
            count++;
        }
    }

    if (count > 0)
    {
        double average = sum / count;
        std::cout << std::fixed << std::setprecision(2) << average << '\n';
    }
    else
    {
        std::cout << "Не съществува\n";
    }
}


int main()
{
    int choice;
    std::cin >> choice; // [1-5]
    
    switch(choice)
    {
        case 1:
        {
            firstExercise();
            break;
        }
        case 2:
        {
            secondExercise();
            break;
        }
        case 3:
        {
            thirdExercise();
            break;
        }
        case 4:
        {
            fourthExercise();
            break;
        }
        case 5:
        {
            fifthExercise();
            break;
        }
        default:
        {
            std::cout << "Невалиден избор!\n";
        }
    }

    return 0;
}