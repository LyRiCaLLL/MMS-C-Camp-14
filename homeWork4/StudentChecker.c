
#include <stdio.h>
#include <stdint.h>
int checkBit();
void setBitP();
void clearBitP();
void changeBitP();

int main()
{
    uint32_t mask = 0x00;
    int option, student;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
            scanf("%d", &student);
            if (student <= 32 && student > 0)
            {
                setBitP(&mask, student);
            }
            else
            {
                printf("non-existent student!\n");
                continue;
            }
        }
        else if (option == 2)
        {
            scanf("%d", &student);
            if (student <= 32 && student > 0)
            {
                clearBitP(&mask, student);
            }
            else
            {
                printf("non-existent student!\n");
                continue;
            }
        }
        else if (option == 3)
        {
            scanf("%d", &student);
            if (student <= 32 && student > 0)
            {
                checkBit(mask, student);
            }
            else
            {
                printf("non-existent student!\n");
                continue;
            }
        }
        else if (option == 4)
        {
            scanf("%d", &student);
            if (student <= 32 && student > 0)
            {
                changeBitP(&mask, student);
            }
            else
            {
                printf("non-existent student!\n");
                continue;
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
        int count = 0;
        printf("================================== \n");
        for (int i = sizeof(uint32_t) * 8; i >= 1; i--)
        {
            if (count == 0)
            {
                printf("|");
            }
            count++;
            printf("%d", checkBit(mask, i));
            if (count == 32)
            {
                printf("|");
            }
        }
        printf("\n================================== \n");
        printf("\n");
    }
}
int checkBit(uint32_t mask, unsigned bit)
{
    return !!(mask & (1 << bit));
}

void setBitP(uint32_t *mask, unsigned bit)
{
    *mask |= (1 << bit);
}
void clearBitP(uint32_t *mask, unsigned bit)
{
    *mask &= ~(1 << bit);
}

void changeBitP(uint32_t *mask, unsigned bit)
{
    *mask ^= (1 << bit);
}