#include <stdio.h>
#include <math.h>
#include <string.h>

#define ARRAY_SIZE  20


int binToOct(long int binarynum);
int binToDec(long long n);
int binToHex(long);
long long octToBin(int);
int octToDec(int);
long long decToBin(int);
int main()
{

    int option, secandOption;
    while (1)
    {
        printf("1. Bin \n");
        printf("2. Octa\n");
        printf("3. Dec\n");
        printf("4. hex\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("1. Bin to Oct \n");
            printf("2. Bin to Dec\n");
            printf("3. Bin to Hex\n");
            scanf("%d", secandOption);
            if (secandOption == 1)
            {
                long int binarynum, octalnum;
                printf("Enter the value for  binary number: ");
                scanf("%ld", &binarynum);

                printf("%lld in binary = %d in octal", binarynum, binToDec(binarynum));
            }
            else if (secandOption == 2)
            {
                long long n;
                printf("Enter a binary number: ");
                scanf("%lld", &n);
                printf("%lld in binary = %d in decimal", n, binToDec(n));
                return 0;
            }
            else if (secandOption == 3)
            {
                int binaryval;
                printf("Enter the binary number: ");
                scanf("%ld", &binaryval);
                printf("%lld in binary = %d in hexadecimal", binaryval, binToHex(binaryval));

                return 0;
            }
            else if (option == 2)
            {
                printf("1. Oct to Bin \n");
                printf("2. Oct to Dec\n");
                printf("3. Oct to Hex\n");
                scanf("%d", secandOption);
                if (secandOption == 1)
                {
                    int octal;

                    printf("\nEnter an octal number: ");
                    scanf("%d", &octal);

                    printf("\nBinary Equivalent : %d\n", octToBin(octal));

                    return 0;
                }
                else if (secandOption == 2)
                {
                    int n, i, k;
                    printf("Enter Octal: ");
                    scanf("%d", &n);
                    printf("\nDecimal of Octal Number %d is : %d", n, octToDec(n));
                    return 0;
                }
                else if (secandOption == 3)
                {
                    int octaltobinary[] = {0, 1, 10, 11, 100, 101, 110, 111};
                    char hexadecimal[10];
                    char hex[10];
                    long int binary = 0;
                    int octal;
                    int rem = 0;
                    int position = 1;
                    int len = 0;
                    int k = 0;
                    printf("Enter a octal number");
                    scanf("%d", &octal);
                    
                    while (octal != 0)
                    {
                        rem = octal % 10;
                        binary = octaltobinary[rem] * position + binary;
                        octal = octal / 10;
                        position = position * 1000;
                    }
                    
                    while (binary > 0)
                    {
                        rem = binary % 10000;
                        switch (rem)
                        {
                        case 0:
                            strcat(hexadecimal, "0");
                            break;
                        case 1:
                            strcat(hexadecimal, "1");
                            break;
                        case 10:
                            strcat(hexadecimal, "2");
                            break;
                        case 11:
                            strcat(hexadecimal, "3");
                            break;
                        case 100:
                            strcat(hexadecimal, "4");
                            break;
                        case 101:
                            strcat(hexadecimal, "5");
                            break;
                        case 110:
                            strcat(hexadecimal, "6");
                            break;
                        case 111:
                            strcat(hexadecimal, "7");
                            break;
                        case 1000:
                            strcat(hexadecimal, "8");
                            break;
                        case 1001:
                            strcat(hexadecimal, "9");
                            break;
                        case 1010:
                            strcat(hexadecimal, "A");
                            break;
                        case 1011:
                            strcat(hexadecimal, "B");
                            break;
                        case 1100:
                            strcat(hexadecimal, "C");
                            break;
                        case 1101:
                            strcat(hexadecimal, "D");
                            break;
                        case 1110:
                            strcat(hexadecimal, "E");
                            break;
                        case 1111:
                            strcat(hexadecimal, "F");
                            break;
                        }
                        len = len + 1;
                        binary /= 10000;
                    }
                    for (int i = len - 1; i >= 0; i--)
                    {
                        hex[k] = hexadecimal[i];
                        k++;
                    }
                    hex[len] = '\0';
                    printf("\nThe hexadecimal number is :");
                    for (int i = 0; hex[i] != '\0'; i++)
                    {
                        printf("%c", hex[i]);
                    }

                    return 0;
                }
            }
            else if (option == 3)
            {
                printf("1. Dec to Bin \n");
                printf("2. Dec to Oct\n");
                printf("3. Dec to Hex\n");
                scanf("%d", secandOption);
                if (secandOption == 1)
                {
                    int n, bin;
                    printf("Enter a decimal number: ");
                    scanf("%d", &n);
                    bin = decToBin(n);
                    printf("%d in decimal =  %lld in binary", n, bin);
                    return 0;
                }
                else if (secandOption == 2)
                {
                    long decimalnum, remainder, quotient;
                    int octalNumber[100], i = 1, j;

                    printf("Enter the decimal number: ");
                    scanf("%ld", &decimalnum);
                    quotient = decimalnum;
                    while (quotient != 0)
                    {
                        octalNumber[i++] = quotient % 8;
                        quotient = quotient / 8;
                    }
                    printf("Equivalent octal value of decimal no %d: ", decimalnum);
                    for (j = i - 1; j > 0; j--)
                        printf("%d", octalNumber[j]);
                    return 0;
                }
                else if (secandOption == 3)
                {
                    long decimalnum, quotient, remainder;
                    int i, j = 0;
                    char hexadecimalnum[100];

                    printf("Enter decimal number: ");
                    scanf("%ld", &decimalnum);

                    quotient = decimalnum;

                    while (quotient != 0)
                    {
                        remainder = quotient % 16;
                        if (remainder < 10)
                            hexadecimalnum[j++] = 48 + remainder;
                        else
                            hexadecimalnum[j++] = 55 + remainder;
                        quotient = quotient / 16;
                    }

                    for (i = j; i >= 0; i--)
                        printf("%c", hexadecimalnum[i]);
                    return 0;
                }
            }
            else if (option == 4)
            {
                printf("1. Hex to Bin \n");
                printf("2. Hex to Oct\n");
                printf("3. Hex to Dec\n");
                scanf("%d", secandOption);
                if (secandOption == 1)
                {
                      char hexNum[100];
	long int count=0;
	printf("Enter a hexadecimal number To Convet it into Binary : ");
	scanf("%s",hexNum);
	printf("\nBinary Number is : ");
	while(hexNum[count])
	{
		switch(hexNum[count])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",hexNum[count]);
		}
		count++;
	}
	return 0;

                }
                else if (secandOption == 2)
                {
                    

    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;

        printf("Enter any hexadecimal number: ");
    gets(hex);

    octal = 0ll;
    bin = 0ll;
    place = 0ll;

    
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }

        place = 10000;
    }

    place = 1;

    
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Octal number = %lld", octal);

    return 0;
                }
                else if (secandOption == 3)
                {

    char hex[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    
    printf("Enter hexadecimal number: ");
    fflush(stdin);
    fgets(hex,ARRAY_SIZE,stdin);
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("\nHexadecimal number = %s", hex);
    printf("Decimal number = %lld\n", decimal);
    return 0;
                }
            }
            else if (option == 5)
            {
                return 0;
            }
            else
            {
                printf("invalid option!\n");
                continue;
            }
        }
    }
}

int binToDec(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}
int binToOct(long int binarynum)
{
    long int octalnum = 0, j = 1, remainder;

    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    return octalnum;
}
int binToHex(long int binaryval)
{
    long int hexadecimalval = 0, i = 1, remainder;

    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    return hexadecimalval;
}

long long decToBin(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int decToOct()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;

    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    return octalNumber[j];
}
int decToHex()
{
}

long long octToBin(int octal)
{
    int decimal = 0, i = 0;
    long long binary = 0;

    while (octal != 0)
    {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }

    i = 1;

    while (decimal != 0)
    {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    return binary;
}

int OctToDec(int n)
{
    int p = 0, decimal = 0, r;

    while (n > 0)
    {

        r = n % 10;

        n = n / 10;

        decimal = decimal + r * pow(8, p);
        ++p;
    }

    return decimal;
}
