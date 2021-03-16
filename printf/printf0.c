#include "holberton.h"




int _printf(const char *format, ...)
{
    int i = 0;

    bool isFormating = false;
    va_list ap;

    va_start(ap, format);


    while(format[i])
    {
        if (isFormating)
        {
            switch(format[i])
            {

                case 'c':
                    {
                        char c = va_arg(ap, int);
                        write(1,&c,1);
                        break;
                    }

                case 's':
                    {
                        char *s = va_arg(ap, char *);
                        if (s != NULL)
                        {
                            for (; *s != '\0'; s++)
                                write(1,s,1);
                        }
                        break;
                    }

            }
            isFormating = false;
        }
        else if(format[i] == '%')
            isFormating = true;
        else
        {
            write(1,&format[i],1);
        }
        i++;
    }


    va_end(ap);

    return(i);
}

