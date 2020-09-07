#include "Array_Second.h"
#include <algorithm>

Array_Second::Array_Second(const std::vector<int>& arr)

    : m_arr(arr), m_sumFirst(0), m_sumSecond(0)
{
}

Array_Second::~Array_Second()
{
}

std::vector<int> Array_Second::GetFirstArr() const
{
    return m_firstArr;
}

std::vector<int> Array_Second::GetSecondArr() const
{
    return m_secondArr;
}

int Array_Second::GetSumFirst() const
{
    return m_sumFirst;
}

int Array_Second::GetSumSecond() const
{
    return m_sumSecond;
}

void Array_Second::ArrayBreakdownMain()
{
    std::vector<int> sortArrPositive;
    std::vector<int> sortArrNegative;

    for (const auto& el : m_arr)
    {
        if (el >= 0)
            sortArrPositive.push_back(el);
        else
            sortArrNegative.push_back(el);
    }

    std::sort(sortArrPositive.rbegin(), sortArrPositive.rend());
    std::sort(sortArrNegative.begin(), sortArrNegative.end());

    ArrayBreakdown(sortArrPositive, true);
    ArrayBreakdown(sortArrNegative, false);
}

bool Array_Second::IsPositive(const bool isPositive)
{
    if (isPositive)
    {
        return m_sumFirst <= m_sumSecond;
    }
    else
    {
        return m_sumFirst >= m_sumSecond;
    }
}

void Array_Second::ArrayBreakdown(const std::vector<int>& arr, const bool isPositive)
{
    for (const auto& member : arr)
    {
        if (IsPositive(isPositive))
        {
            m_sumFirst += member;
            m_firstArr.emplace_back(member);
        }
        else
        {
            m_sumSecond += member;
            m_secondArr.emplace_back(member);
        }
    }
}
