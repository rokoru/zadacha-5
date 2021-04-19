#include <iostream>
#include <cmath>


int main()
{
    setlocale(LC_ALL, "rus");
    float a, b;
    std::cout << "Введите значение стипендии " << std::endl;
    std::cin >> a;
    std::cout << "Введите значение расходов " << std::endl;
    std::cin >> b;
    if (a > b) {
        std::cerr << "error";
        return 1;
    }
    else {
        float b1, b;
        for (int i = 0; i < 10; ++i) {
            b1 += b;
            b *= 0.03;
        }
        float sum, a1;
        a1 = a * 10;
        sum = (b1 - a1) * (-1);
        std::cout << "Нужно попросить " << sum << "рублей " << std::endl;
    }

    return 0;
}
