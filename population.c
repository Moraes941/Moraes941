#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ini_num;
    int final_num;


    do
    {
        ini_num = get_int ("Enter starting population: \n");
    }
    while (ini_num < 9);


    do
    {
        final_num = get_int ("Enter ending population: \n");
    }
    while (final_num <= ini_num);


    size_t years_passed = 0;
    int newpop = ini_num;
    for( int oldpop = ini_num;
         newpop < final_num;
         years_passed++ )
    {
        newpop +=  oldpop/3 - oldpop/4;
        oldpop = newpop;
    }
    printf("Years : %zu \n", years_passed);

}
