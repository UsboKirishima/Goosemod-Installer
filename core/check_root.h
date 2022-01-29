#include <stdio.h>
#include <stdbool.h>

bool check_root()
{
    if(geteuid() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
