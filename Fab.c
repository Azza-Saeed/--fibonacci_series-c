/*
 * Fab.c
 *
 *  Created: 6/8/2023 11:43:43 AM
 *  Author: Azza Saeed
 */


/*
	Function Name        : Fibonacci
	Function Returns     : nothing
	Function Arguments   : number
	Function Description : Fibonacci for the giving number
*/

void Fibonacci(int num)
{
    int x=0;
    int y=1;
    int sum;
    int i;

    if(0==num || num<0)
    {
        printf("Please enter valid number....!!\n");

    }
    else
    {
        //Do nothing
    }

    for(i=0;i<num;++i)
    {
        printf("%d\t",x);
        sum=x+y;
        x=y;
        y=sum;

    }
}


