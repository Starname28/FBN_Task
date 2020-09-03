#include "Array_Second.h"
#include <algorithm>

Array_Second::Array_Second(const std::vector<int>& arr)

    : m_arr(arr), m_sumFirst(0), m_sumSecond(0)
{
    const size_t SIZE = m_arr.size() / 2;

    m_firstArr.reserve(SIZE);
    m_secondArr.reserve(SIZE);
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

void Array_Second::ArrayBreakdown()
{
    std::vector<int> sortArr(m_arr);
    std::sort(sortArr.rbegin(), sortArr.rend());
    
    for (const auto& member : sortArr)
    {
        if (m_sumFirst < m_sumSecond || m_sumFirst == m_sumSecond)
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