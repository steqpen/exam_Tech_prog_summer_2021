#include "square.h"

/**
* \file
* \brief файл реализации методов класса Square.
*/
#include "square.h"
/**
 * @brief square::square конструктор класса
 */
square::square()
{

}
/**
 * @brief square::square конструктор класса через массив координат.
 * @param ver - массив, содержащий double значения координат вершин
 */
square::square(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];
}
