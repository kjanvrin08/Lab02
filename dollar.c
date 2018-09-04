/**
 * Author: James Janvrin and Amanda Whitlatch
 * Date: 2018/28/08
 *
 * Dollar conversion from USD to British pounds and JPY
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double main(void) {
	double unitedStatesDollars ;
	double britishPounds ;
	double japaneseJPY ;

printf("Please input the total amount of US Dollars:");

scanf("%lf",& unitedStatesDollars);

double leftOfUnitedStatesDollars = .9*unitedStatesDollars ;

britishPounds = .5*leftOfUnitedStatesDollars*.6 ;
japaneseJPY = .5*leftOfUnitedStatesDollars*76.8 ;

printf("You get %lf British Pounds and %lf Japanese JPY.", britishPounds , japaneseJPY) ;

}
