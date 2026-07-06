#include "sum.h"

int sum(int n) {
    int res = 0;

    for(int i=01; i<=n; ++i)
        res += i;

    return res;
}
