/*
 * main.c
 *
 *  Created on: 17 mars 2020
 *      Author: pvgmenegasso
 *

https://www.urionlinejudge.com.br/judge/en/problems/view/1168


John wants to set up a panel containing different numbers of LEDs. He does not have many leds,
he is not sure if he will be able to mount the desired number. Considering the configuration of
the LEDs of the numbers below, make an algorithm that helps John to discover the number of LEDs
needed to set the value.

Input

The input contains an integer N, (1 ≤ N ≤ 2000) corresponding to the number of test cases,
followed by N lines, each line containing a number (1 ≤ V ≤ 10100) corresponding to the value
that John wants to set with the leds.
Output

For each test case, print one line containing the number of LEDs that John needs to set the desired value,
followed by the word "leds".


    Input Sample			output sample
    						27 leds
    3						29 leds
	115380                  25 leds
	2819311
	23456
 */

#include <stdlib.h>
#include <stdio.h>


int chartoleds(char c)
{
	switch (c)
	{

		case '1':
			return 2 ;
		break;

		case '2':
			return 5 ;
		break;

		case '3':
			return 5 ;
		break;

		case '4':
			return 4 ;
		break;

		case '5':
			return 5 ;
		break;

		case '6':
			return 6 ;
		break;

		case '7':
			return 3;
		break;

		case '8':
			return 7 ;
		break;

		case '9':
			return 6 ;
		break;

		case '0':
			return 6 ;
		break;

	}

	return 0 ;
}


int ledstostring(char str[])
{
	int i = 0 ;
	int value = 0 ;
	while(str[i] != '\0')
	{
		value += chartoleds(str[i]) ;
		i++ ;
	}
	return value ;
}



int main(void)
{

	printf("%d", ledstostring("23456")) ;
	return 0 ;
}

