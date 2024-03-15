#include <iostream>
#include <cmath>    /* pow() */

int digitCount(int n)
{
    int count = 0;
    
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    
    return count;
}

int firstDigit(int n)
{
    return (n - (n % 1 * pow(10, digitCount(n) - 1))) / pow(10, digitCount(n) - 1);
}

int lastDigit(int n)
{
    return n % 10;
}

int digit(int n, int digit)
{
    
}

bool isPalindrome(int n)
{
    if(digitCount(n) % 2 == 0) // 奇数なら
    {
        
    }
}

int main()
{
    int CURRENT_MAX = 0;

    // 三桁の数字まで確かめる
    for (int i = 100; i <= 999; ++i)
    {
        for (int j = 100; j <= 999; ++j)
        {
            if (isPalindrome(i * j))
            {
                if (i * j > CURRENT_MAX)
                {
                    CURRENT_MAX = i * j;
                }
            }
        }
    }

    std::cout << CURRENT_MAX << std::endl;
    return 0;
}