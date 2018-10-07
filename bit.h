#ifndef BIT_H
#define BIT_H
#include <iostream>
#include <iomanip>
#include <cstdlib>

namespace ds
{

    class Bit
    {
        public:
            /** Default constructor */
            Bit();
            /** Default destructor */
            virtual ~Bit();
            /** Copy constructor
             *  \param other Object to copy from
             */
            Bit(const Bit& other);
            /** Assignment operator
             *  \param other Object to assign from
             *  \return A reference to this
             */
            Bit& operator=(const Bit& other);

            /** Access m_value
             * \return The current value of m_value
             */
            unsigned long long Getvalue() { return m_value; }
            /** Set m_value
             * \param val New value to set
             */
            void Setvalue(unsigned long long val) { m_value = val; }
            /** Access m_size
             * \return The current value of m_size
             */
            size_t Getsize() { return m_size; }
            /** Set m_size
             * \param val New value to set
             */
            void Setsize(size_t val) { m_size = val; }

        protected:

        private:
            unsigned long long m_value; //!< Member variable "m_value"
            size_t m_size; //!< Member variable "m_size"
    };

}
#endif // BIT_H
