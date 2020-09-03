#include "Array_First.h"
#include "Array_Second.h"
#include <iostream>

using Array = std::vector<int>;

std::ostream& operator<<(std::ostream& out, const std::vector<int>& vec)
{
    for (const auto& num : vec)
    {
        out << num << ' ';
    }
    return out;
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

        Array vec{ 1,3,5,7,9,11,13,15,17,1,12,34,56,4,100,200,500,20,40,1000};
       
        Array_Second arr(vec);
        arr.ArrayBreakdown();

        PrintSecondTask(arr);
    }

    system("pause");
    return 0;
}

/*Задание 1
Есть массив, состоящий из N чисел.
Реализовать для него итерационный процесс: между каждыми соседними
элементами массива появляется новый элемент – 
среднее арифметическое между ними*/