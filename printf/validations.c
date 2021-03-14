
int format_is_correct(char format, char type)
{
    if (format != '%')
        return 0;

    // %d %c %i %s ==
    if (type == 'd' || type == 'c' || type == 'i' || type == 's') 
        return (1);
    return (0);
}