#include <iostream>
#include "ds/bits.h"

int main()
{
    using namespace std;

    /*
    cout<<"Hello"<<endl;
    ds::bits b;
    b.value(2)->size(4);
    std::cout<<b.value()<<"\n"<<b.size()<<std::endl;
    b.printd();
    b.printb();

    std::cout<< ~((unsigned long long)0)<<std::endl;
    */

    cout<<"bitwise Complement:"<<endl;
    /// bitwise Complement:
    /// bitwise complement operator, the tilde, ~, flips every bit.
    /// The tilde is sometimes called a twiddle, and the bitwise complement twiddles every bit
    /// - turns out to be a great way of finding the largest possible value for an unsigned number
    unsigned int max_int_value = ~0;        // 4294967295
    cout<< max_int_value <<endl;

    cout<<"bitwise AND:"<<endl;
    /// bitwise AND: The bitwise AND operator is a single ampersand: &:
    cout<< (3 & 2) <<endl; // 2 = 11 & 10 => 10

    cout<<"bitwise OR:"<<endl;
    /// bitwise OR: The bitwise OR operator is a |:
    cout<< (3 | 2) <<endl; // 3 = 11 | 10 => 11

    cout<<"bitwise XOR:"<<endl;
    /// bitwise Exclusive OR (XOR): operator of a carrot, ^,
    ///     performs the exclusive-or operation on each pair of bits.
    cout<< (3 ^ 2) <<endl; // 1 = 11 ^ 10 => 01

    cout<< (3 ^ 0) <<endl; // 3 = 11 ^ 00 => 11 ;   myBits ^ 0 : No change

    /// It's a kind of selective twiddle(~).
    /// if we do XOR against 111...1111, all the bits of myBits flipped.
    /// It's equivalent of doing twiddle(~)
    cout<< (2 ^ 3) <<endl; // 1 = 10 ^ 11 => 01 ;   myBits ^ 1 : Flip

    /// It does in place swap of integers
    while(1) // for fake local scope
    {
        int a = 5;      // 101
        int b = 6;      // 110
        cout<<"inplace swap by xor: a ="<<a<<", b ="<<b<<endl;
        a = a ^ b;      // 011
        b = a ^ b;      // 101
        a = a ^ b;      // 110

        cout<<"inplace swap by xor: a ="<<a<<", b ="<<b<<endl;
        break;

    }


    /// right shift operator (>>): Moving all the bits of a number a specified number of places to the right
    /// bitwise right-shift will be the equivalent of integer division by 2:
    while(1)
    {
        cout<<"right shift operator"<<endl;
        int a = 5;      // 101;
        cout<< (a>>1) <<endl;   //010 =. 2
        cout<< (a>>2) <<endl;   //001 =. 1

        break;
    }

    return 0;
}
