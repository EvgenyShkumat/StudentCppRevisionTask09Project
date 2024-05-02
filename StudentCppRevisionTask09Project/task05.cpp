#include "tasks.h"

/*	Task 05. Count of Number Digits [подсчёт цифр числа]
*
*	Дано целое число. Подсчитайте количество цифр в нём.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено целое число, которое является решением задания.
*
*	[ input 1]: 15
*	[output 1]: 2
*
*	[ input 2]: 9
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 1
*
*	[ input 4]: -15
*	[output 4]: 2
*
*/
int task05(long long number){
	int count = 0;
	number = number < 0 ? -number : number;

	if (number == 0) {
		return 1;
	}

	while (number != 0) {
		count++;
		number /= 10;
	}

	return count;
}

