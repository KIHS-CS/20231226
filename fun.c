#include <stdio.h>

void encrypt(int key, int times, char* password)
{
    int i, j=0;
    for (i = 1 ; i <= times ; i++)
    {
        while (password[j])
        {
            password[j] += key;
            j++;
        }
    }
    printf("%s", password);
}

void decrypt(int key, int times, char* password)
{
    int i, j=0;
    for (i = 1 ; i <= times ; i++)
    {
        while (password[j])
        {
            password[j] -= key;
            j++;
        }
    }
    printf("%s", password);
}

int main()
{
    char password[1000000];
    int choice, times, key;
    printf("請輸入密鑰：");
    scanf("%d", &key);
    system("cls");
    printf("請輸入加密層數：");
    scanf("%d", &times);
    system("cls");
    printf("1.加密\n");
    printf("2.解密\n");
    printf("請輸入模式：");
    scanf("%d", &choice);
    system("cls");
    printf("請輸入要處理的文字：");
    scanf("%s", &password);
    system("cls");
    switch (choice)
    {
    case 1:
        encrypt(key, times, password);
        break;
    case 2:
        decrypt(key, times, password);
        break;
    default:
        printf("不正確的選項");
    }
    return 0;
}
