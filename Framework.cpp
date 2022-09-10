
#include <iostream>
#include <string>

enum class months
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Okt,
    Nov,
    Dec
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int requested_number = 0;
    do
    {
        std::cout << "Ведите номер месяца: ";
        std::cin >> requested_number;
        if ((requested_number > 0) && (requested_number < 13)) {
            months month = static_cast<months>(requested_number);
            switch (static_cast<int>(month)) {
            case 1:
                std::cout << "Январь" << std::endl;
                break;
            case 2:
                std::cout << "Февраль" << std::endl;
                break;
            case 3:
                std::cout << "Март" << std::endl;
                break;
            case 4:
                std::cout << "Апрель" << std::endl;
                break;
            case 5:
                std::cout << "Май" << std::endl;
                break;
            case 6:
                std::cout << "Июнь" << std::endl;
                break;
            case 7:
                std::cout << "Июль" << std::endl;
                break;
            case 8:
                std::cout << "Август" << std::endl;
                break;
            case 9:
                std::cout << "Сентябрь" << std::endl;
                break;
            case 10:
                std::cout << "Октябрь" << std::endl;
                break;
            case 11:
                std::cout << "Ноябрь" << std::endl;
                break;
            case 12:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
        else if (requested_number != 0) {
            std::cout << "Неправильный номер!" << std::endl;
        }
    } while (requested_number != 0);
    std::cout << "До свидания" << std::endl;
    return 0;
}

