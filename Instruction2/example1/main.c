/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example1                                      *
 *                                                                          *
 * Purpose : Program that evaluates the scores of an exam                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/09  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include "mylib.h"

int main( void )
{
	float grades[MAX_GRADES];
	int   studID[MAX_GRADES];
	int   count;
	int   hist[HIST_ITEMS];
	
	float average;
	float stdDev;

	count = read_grades( "../grades/grades.dat" , grades , studID );

	print_grades( grades , studID , count );
	
	average = calc_average( grades , count );

	printf("The average grade is : %2.0f\n",average);

	stdDev   = calc_std_deviation( grades , count , average );

	printf("The standard deviation is : %2.0f\n", stdDev);

	clear_histogram( hist );

	fill_histogram( grades , hist , count );
	
	printf("This is the histogram : \n%2.0i",hist);

	return 0;
}

