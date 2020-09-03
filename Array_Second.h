#pragma once
#include <vector>

class Array_Second
{
public:
    Array_Second(const std::vector<int>& arr);
    ~Array_Second();

    std::vector<int> GetFirstArr() const;
    std::vector<int> GetSecondArr() const;

    int GetSumFirst() const;
    int GetSumSecond() const;

    void ArrayBreakdown();

private:
    const std::vector<int>& m_arr;

    std::vector<int> m_firstArr;
    std::vector<int> m_secondArr;

    int m_sumFirst, m_sumSecond;
};