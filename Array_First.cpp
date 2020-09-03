#include "Array_First.h"

Array_First::Array_First(std::vector<int>& ref)
    : m_arr(ref)
{
    m_newSizeArr = 2 * m_arr.size() - 1;
}

Array_First::~Array_First()
{
}

void Array_First::ArrayModify()
{
    std::vector<int> m_tmpArrr(m_newSizeArr);
    bool first = true;

    for (size_t i = 0, j = 0; i < m_arr.size(); ++i)
    {
        if (!first)
        {
            m_tmpArrr[j++] = Averadge(m_arr[i - 1], m_arr[i]);
        }
        first = false;

        m_tmpArrr[j++] = m_arr[i];;
    }

    m_arr = m_tmpArrr;
}

int Array_First::Averadge(int first, int second)
{
    return static_cast<int>((first + second) / 2);
}