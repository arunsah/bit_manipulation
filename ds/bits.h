#ifndef BITS_H
#define BITS_H

#include <iostream>
#include <cstdlib>
#include <bitset>


namespace ds
{

    class bits
    {
        public:
            /** Default constructor */
            bits(){}

            /** parametric constructor **/
            //bits(const char val){this->value(val) ; }
            //bits(const short val){this->value(val) ; }
            //bits(const int val){this->value(val) ; }
            bits(const long long int val){this->value(val) ; }

            /** Default destructor */
            virtual ~bits();

            /** Copy constructor
             *  \param other Object to copy from
             */
            bits(const bits& other)
            {
                this->value( other.value());
            }

            /** Assignment operator
             *  \param other Object to assign from
             *  \return A reference to this
             */
            bits& operator=(const bits& other);

            /** Access m_value
             * \return The current value of m_value
             */
            long long int value() const { return m_value; }

            /** Set m_value
             * \param val New value to set
             */
            //bits* value(const char val) { m_value = static_cast<long long>(val); m_size = sizeof(val) * 8; return this;}
            //bits* value(const short val) { m_value = static_cast<long long>(val); m_size = sizeof(val) * 8; return this;}
            //bits* value(const int val) { m_value = static_cast<long long>(val); m_size = sizeof(val) * 8; return this;}
            bits* value(const long long int val) { m_value = static_cast<long long>(val); m_size = sizeof(val) * 8; return this;}


            /** Access m_size
             * \return The current value of m_size
             */
            size_t size() { return m_size; }
            /** Set m_size
             * \param val New value to set
             */
            bits* size(size_t val) { m_size = val; return this;}


            bool operator< (const bits &)const;

            /*
            bits* printb() const;
            bits* printd() const;


            bits* setbit(unsigned int index)
            {
                return m_value ;//|=
            }
            */

        protected:

        private:
            long long int m_value; //!< Member variable "m_value"
            size_t m_size; //!< Member variable "m_size"
    };
}
#endif // BITS_H
