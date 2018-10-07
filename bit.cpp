#include "bit.h"
namespace ds
{

    Bit::Bit()
    {
        //ctor
    }

    Bit::~Bit()
    {
        //dtor
    }

    Bit::Bit(const Bit& other)
    {
        //copy ctor
    }

    Bit& Bit::operator=(const Bit& rhs)
    {
        if (this == &rhs) return *this; // handle self assignment
        //assignment operator
        return *this;
    }

}
