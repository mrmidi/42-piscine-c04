#include <stdio.h>

int ft_isspace(char c)
{
    char *spaces;
    int i;
    
    i = 0;
//    spaces = {' ', '\n', '\t', '\v', '\f', '\r', 0};
    spaces = " \n\t\v\f\r";
    while (spaces[i] != '\0')
    {
        if (c == spaces[i])
            return 1;
        i++;
    }
        return 0;
}

int ft_isnum(char c);

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;
    
    
    i = 0;
    result = 0;
    sign = 1;
    if (ft_isspace(str[i])) {
        while(ft_isspace(str[i]))
            i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int result = ft_atoi(" ---+--+1234ab567");
    printf("result is %d\n", result);
    return 0;
}
