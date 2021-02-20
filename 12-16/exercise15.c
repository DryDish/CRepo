#include <stdio.h>

#include "exercises12-16.h"
#include "../decoration/decoration.h"


/**
 * By use of “>>” let the program show how many bits a char is,
 * and how many bits is an integer
**/
void exercise15(void)
{
    separatorStart("Fifteen");

    char testerChar = 00000001;
    int maxCharSize = 1;
    int minCharSize = 1;
    int bitCounter = 0;

    while (testerChar != 0)
    {
        if (testerChar > 0)
        {
            maxCharSize = testerChar;
        } else {
            minCharSize = testerChar;
        }
        testerChar = testerChar << 1;
        bitCounter +=1;
    }

    int testerInt = 1;
    int maxIntSize = 1;
    int minIntSize = 1;
    int intBitCounter = 0;

    while (testerInt != 0)
    {
        {
            if (testerInt > 0)
            {
                maxIntSize = testerInt;
            } else {
                minIntSize = testerInt;
            }
            testerInt = testerInt << 1;
            intBitCounter +=1;
        }
    }

    printf("Char has %d bits, also known as %d bytes, minimum int size = %d and maximum is %d\n",bitCounter, bitCounter/8,minCharSize,maxCharSize*2-1);
    printf("Int has %d bits, also known as %d bytes, minimum int size = %d and maximum is %d\n",intBitCounter,intBitCounter/8,minIntSize,maxIntSize*2-1);

    separatorEnd("Fifteen");
}

 /**
  * Make a program to show a number in hexadecimal (the simplest way)
 **/

void exercise15a(void)
{
    separatorStart("Fifteen-A");

    int number = 255;
    printf("Int of size = %d is = 0X%X in Hexadecimal",number, number);

    separatorEnd("Fifteen-A");
}

/**
 * Make a program to show a (integer) number in binary format
 */

void exercise15b(void)
{
    separatorStart("Fifteen-B");

    int decimalNumber = 124;
    int remainder = 0;
    //due to this array size, the maximum number possible is 127
    int binaryNumber[7];
    int decimalToOperate = decimalNumber;
    int i = 0;
    while (decimalToOperate > 0)
    {
        // store the remainder to a value
        remainder = decimalToOperate%2;
        // save that value in an array
        binaryNumber[i] = remainder;
        //increment the index
        i++;
        // divide the decimal by 2 and continue till 0
        decimalToOperate = decimalToOperate/2;
    }

    printf("Int of = %d is = ",decimalNumber);

    // This for loop iterates in reverse the array and prints the values one at a time
    int counter = 0;
    for (int j = 7; j >= 0; j--)
    {
        // this is needed to set uninitialized numbers in the array to 0
        int number = binaryNumber[j];
        if (number > 1 || number < 0)
        {
            number = 0;
        }
        // to add a space every 4 numbers
        if (counter >= 4)
        {
            printf(" ");
            counter  = 0;
        }
        counter ++;
        printf("%d", number);
    }
    printf(" in binary\n");

    separatorEnd("Fifteen-B");
}

/* this is the most efficient way to do it

    int main()
    {
      int n;
      int c;
      int k;

      printf("Enter an integer in decimal number system\n");
      scanf("%d", &n);

      printf("%d in binary number system is:\n", n);

      for (c = 31; c >= 0; c--) //decrement 31 times (32 is 4 bytes, the size of an int)
      {
        k = n >> c;         //right shift by c

        if (k & 1)          // if the value after right shifting is 1 in position 1 then print 1
          printf("1");
        else
          printf("0");      // if the value after right shifting is 0 on position 1 then print 1
      }
      printf("\n");

      return 0;
    }
 */