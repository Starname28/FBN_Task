#include "Array_First.h"
#include "Array_Second.h"
#include <iostream>
#include <ctime>

using Array = std::vector<int>;

std::ostream& operator<<(std::ostream& out, const std::vector<int>& vec)
{
    for (const auto& num : vec)
    {
        out << num << ' ';
    }
    return out;
}

std::vector<int> ArrayGeneretor()
{
    srand(time(NULL));
    std::vector<int> result;

    for (int i = 0; i < 500; ++i)
    {
        int el = -100 + rand() % 1000;
        result.emplace_back(el);
    }

    return result;
}

void PrintSecondTask(const Array_Second& arr)
{
    std::cout << "First array  : " << arr.GetFirstArr() << std::endl;
    std::cout << "Second array : " << arr.GetSecondArr() << std::endl;

    std::cout << "Sum for the first  array: " << arr.GetSumFirst() << std::endl;
    std::cout << "Sum for the second array: " << arr.GetSumSecond() << std::endl;
}

int main()
{
    {//First task
        std::cout << "\t\t First Task " << std::endl;

        Array vec{ 1,3,5,7,9,11,13,15,17,94 };

        Array_First arr(vec);
        arr.ArrayModify();

        std::cout <<"Modified array: "<< vec << std::endl;
    }
    {//Second task
        std::cout << "\n\t\t Second Task " << std::endl;

        Array vec{ 9, 8, 6, 6, 5, 5, 1 };
       
        Array_Second arr(vec);
        arr.ArrayBreakdownMain();

        PrintSecondTask(arr);
    }

    system("pause");
    return 0;
}