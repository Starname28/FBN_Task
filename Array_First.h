#pragma once
#include <vector>

class Array_First
{
public:
    Array_First(std::vector<int>& ref);
    ~Array_First();

    void ArrayModify();

private:
    std::vector<int>& m_arr;
    int m_newSizeArr;

    int Averadge(int first, int second);
};

