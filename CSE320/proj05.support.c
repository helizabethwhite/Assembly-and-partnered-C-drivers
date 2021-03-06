#include <stdio.h>

/* 
 * Name: proj05.support.c
 *
 * Author: Hannah White
 *
 * Brief: function convert takes in an external representation
 * of a number and converts it to an internal representation
 *
 */


int convert (const char[], int, int*);

char array[] = "";
int size;
int temp = 1;
_Bool flag = 0;
int base;
int internalRep = 0;
_Bool good = 0;
char ch;
int i;
int value;

int convert (const char string[], int current_base, int* location)
{
  base = current_base;
  good = 1;
  value = 0;
  while(good == 1)
  {
    for(i=0; string[i] != '\0'; i++)
    {
      ch = string[i];
      if ('A' <= ch && ch <= 'Z')
      {
        if (base == 11)
        {
          if (ch != 'A')
          {
            good = !good;
            break;
          }
          else
          {
            value = base * value;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
        }
        else if (base == 12)
        {
          if ('A' <= ch && ch <= 'B')
          {
            value = base * value;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 13)
        {
          if ('A' <= ch && ch <= 'C')
          {
            value = base * value;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 14)
        {
          if ('A' <= ch && ch <= 'D')
          {
            value = base*value;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 15)
        {
          if ('A' <= ch && ch <= 'E')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 16)
        {
          if ('A' <= ch && ch <= 'F')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 17)
        {
          if ('A' <= ch && ch <= 'G')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 18)
        {
          if ('A' <= ch && ch <= 'H')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 19)
        {
          if ('A' <= ch && ch <= 'I')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 20)
        {
          if ('A' <= ch && ch <= 'J')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 21)
        {
          if ('A' <= ch && ch <= 'K')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 22)
        {
          if ('A' <= ch && ch <= 'L')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 23)
        {
          if ('A' <= ch && ch <= 'M')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 24)
        {
          if ('A' <= ch && ch <= 'N')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 25)
        {
          if ('A' <= ch && ch <= 'O')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 26)
        {
          if ('A' <= ch && ch <= 'P')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 27)
        {
          if ('A' <= ch && ch <= 'Q')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 28)
        {
          if ('A' <= ch && ch <= 'R')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 29)
        {
          if ('A' <= ch && ch <= 'S')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 30)
        {
          if ('A' <= ch && ch <= 'T')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }     
        else if (base == 31)
        {
          if ('A' <= ch && ch <= 'U')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 32)
        {
          if ('A' <= ch && ch <= 'V')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 33)
        {
          if ('A' <= ch && ch <= 'W')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 34)
        {
          if ('A' <= ch && ch <= 'X')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 35)
        {
          if ('A' <= ch && ch <= 'Y')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 36)
        {
          if ('A' <= ch && ch <= 'Z')
          {
            value = value*base;
            value += (ch - 'A') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base > 36)
        {
          value = value*base;
          value += (ch - 'A') + 10;
          if (flag)
          {
            flag = !flag;
            temp = !temp;
          }
        }
        else 
        {
          good = !good;
          break;
        }
      }
      else if ('a' <= ch && ch <= 'a')
      {
        if (base == 11)
        {
          if (ch != 'a')
          {
            good = !good;
            break;
          }
          else
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
        }
        else if (base == 12)
        {
          if ('a' <= ch && ch <= 'b')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 13)
        {
          if ('a' <= ch && ch <= 'c')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 14)
        {
          if ('a' <= ch && ch <= 'd')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 15)
        {
          if ('a' <= ch && ch <= 'e')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 16)
        {
          if ('a' <= ch && ch <= 'f')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 17)
        {
          if ('a' <= ch && ch <= 'g')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 18)
        {
          if ('a' <= ch && ch <= 'h')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 19)
        {
          if ('a' <= ch && ch <= 'i')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 20)
        {
          if ('a' <= ch && ch <= 'j')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 21)
        {
          if ('a' <= ch && ch <= 'k')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 22)
        {
          if ('a' <= ch && ch <= 'l')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 23)
        {
          if ('a' <= ch && ch <= 'm')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 24)
        {
          if ('a' <= ch && ch <= 'n')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 25)
        {
          if ('a' <= ch && ch <= 'o')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 26)
        {
          if ('a' <= ch && ch <= 'p')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 27)
        {
          if ('a' <= ch && ch <= 'q')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 28)
        {
          if ('a' <= ch && ch <= 'r')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 29)
        {
          if ('a' <= ch && ch <= 's')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 30)
        {
          if ('a' <= ch && ch <= 't')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }     
        else if (base == 31)
        {
          if ('a' <= ch && ch <= 'u')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 32)
        {
          if ('a' <= ch && ch <= 'v')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 33)
        {
          if ('a' <= ch && ch <= 'w')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 34)
        {
          if ('a' <= ch && ch <= 'x')
          {
            value = base*value;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 35)
        {
          if ('a' <= ch && ch <= 'y')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base == 36)
        {
          if ('a' <= ch && ch <= 'z')
          {
            value = value*base;
            value += (ch - 'a') + 10;
            if (flag)
            {
              flag = !flag;
              temp = !temp;
            }
          }
          else
          {
            good = !good;
            break;
          }
        }
        else if (base > 36)
        {
          value = value*base;
          value += (ch - 'a') + 10;
          if (flag)
          {
            flag = !flag;
            temp = !temp;
          }
        }
        else if (base < 11)
        {
          good = !good;
          break;
        }
      }
      else if ('0' <= ch && ch <= '9')
      {
        if (base == 2 && ch > 1)
        {
          good = !good;
          break;
        }
        else
        {
          value = value*base;
          value += ch - '0';
          if (flag)
          {
            flag = !flag;
            temp = !temp;
          }
        }
      }
      else if (ch == ' ')
      {
        if (value > 0)
        {
          good = !good;
        }
      }
      else if (ch == '-')
      {
        if (value != 0)
        {
          temp = !temp;
          flag = !flag;
        }
        else
        {
          good = !good;
        }
      }
    }
  break;
  }

 // internalRep = value;
  *location = value; 
  if (value > 0)
  { // conversion successful
    return 1;
  }
  // conversion unsuccessful
  return 0;
}
