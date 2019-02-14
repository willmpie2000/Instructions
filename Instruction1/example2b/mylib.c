#include "mylib.h"

//----------------------------------------------------------
//  Read total amount of money
//  
//  Returns: amount (int)
//----------------------------------------------------------

int read( void )

{
	int amount;

	printf("Enter the amount in Eurocents : ");
	scanf("%d",&amount);

	return amount;
}

//----------------------------------------------------------
//  Input conditions
//  
//  Arg. amount     total amount of money
//       count      array that counts the number of coins used
//       coins      array with values of specific coins
//----------------------------------------------------------

int check( int amount )
{
	int flag;

	if ( amount > 0 && amount < 1000 && amount%5 <= 0 )
	{
		flag = 1;

	}
	else
	{
		printf("Fuck you bizzaaaaatch\n");
		flag = 0;

	}
		return flag;
}

//----------------------------------------------------------
//  Splits an amount in a number of coins
//  
//  Arg. amount     total amount of money
//       count      array that counts the number of coins used
//       coins      array with values of specific coins
//----------------------------------------------------------

void split

	( int     amount ,
	  int*    count  ,
	  int*    coins  ,
	  int	  flag   )

{	
	if ( flag == 1 )
	{
		int i = 0;

	  	while( amount > 0 )
	  	{ 
	   		if ( amount >= coins[i] )
	    	{
	      		count[i] = count[i] + 1;
	      		amount   = amount - coins[i];
	    	}
	    	else
	    	{
	      		i = i+1;
	    	}
	  	}
	}
	else
	{
	;
	}
}


//----------------------------------------------------------
//  Writes a report of the algorithm
//  
//  Arg. amount     total amount of money
//       count      array that counts the number of coins used
//       coins      array with values of specific coins
//       n          number of different coin types
//----------------------------------------------------------

void report

	( int     amount ,
	  int*    count  ,
	  int*    coins  ,
	  int     n      ,
	  int 	  flag	 )

{
	if ( flag == 1 )
	{
		int i;

		printf("The sum of %i cents, can be paid using the following coins\n",amount);

	  	for ( i = 0 ; i < n ; i++ )
	  	{
	  	  	printf("%i coins of %i cent\n",count[i],coins[i]);
	  	}
	}
	else
	{
	;
	}
}
