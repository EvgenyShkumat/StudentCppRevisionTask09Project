#include "tasks.h"
#include <cmath>
/*	Task 02. An Exact Power of Two [точная степень двойки]
*
*	Дано целое число. Необходимо определить, 
*	является ли данное число точной степенью двойки.
*
*  Примечание
*  Можно попробовать решить данный таск без использования цикла в одно простое условное выражение
* 
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должно быть возвращено булевское значение - ответ на задание.
*
*	[ input 1]: 32
*	[output 1]: true
*
*	[ input 2]: 1
*	[output 2]: true
*
*	[ input 3]: 0
*	[output 3]: false
*
*	[ input 4]: 30
*	[output 4]: false
*
*	[ input 4]: -4
*	[output 4]: false
*/

bool task02(int number) {
	bool result = false;

	if (number == 1) {
		result =  true;
	}
	
	while (number > 0 && number % 2 == 0) {
		if (number == 2) {
			result = true;
			break;
		}

		number /= 2;
	}

	return result;
}
