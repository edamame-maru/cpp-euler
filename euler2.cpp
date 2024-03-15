#include <iostream>

int main()
{
    int sum = 0;
    int prev = 1;
    int current = 1;
    
    while (current <= 4000000)
    {
        int next = prev + current;
        prev = current;
        current = next;
        
        if (current % 2 == 0)
        {
            sum += current;
        }
    }

    std::cout << sum;
    return 0;
}
