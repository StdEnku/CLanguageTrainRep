#include <stdio.h>

int main(void)
{
	const int SECOND_IN_MINUTE = 60;
	const int MINUTE_IN_HOUR = 60;
	const int HOUR_IN_DAY = 24;
	const int DAY_IN_YEAR = 365;
	
	const int SECOND_IN_YEAR = SECOND_IN_MINUTE *
							   MINUTE_IN_HOUR *
							   HOUR_IN_DAY *
							   DAY_IN_YEAR;
	
	printf("一年間の秒数は%d秒\n", SECOND_IN_YEAR);
	
	return 0;
}