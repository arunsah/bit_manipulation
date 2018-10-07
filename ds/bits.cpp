#include "bits.h"

namespace ds
{




    bits::~bits()
    {
        //dtor
    }


    bits& bits::operator=(const bits& rhs)
    {
        if (this == &rhs) return *this; // handle self assignment
        //assignment operator
        return *this;
    }

    bool bits::operator< (const bits & b1) const
    {
        return  m_value < b1.value();
    }

    /*
    member functions/operators already operate on the lhs, which is "this".
    bool operator<(const Node& rhs) const;
    bool operator==(const Node& rhs) const;
    or make them non member operators, i.e.
    friend bool operator<(const Node& a, const Node& b);
    friend bool operator==(const Node& a, const Node& b);
    if they need an access to protected/private, or just declare them outside of your class
    body otherwise.
    */

    /*
    void bits::printb() const
    {

        long long num = m_value, rem=0;
        size_t bit_length = m_size, i = 0;
        while(i < bit_length )
        {

            num = num << bit_length;
            rem = num & 1; // clear all other bits
            std::cout<< rem;
            i++;
        }
        std::cout<<std::endl;

    }


    void bits::printd() const
    {
        long long num = m_value, rem = 0;
        while(num != 0)
        {
            rem = num%10;
            std::cout<< rem;
            num = num/10;
        }
        std::cout<<std::endl;
    }
    */

}
