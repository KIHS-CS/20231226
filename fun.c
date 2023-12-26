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
    printf("�п�J�K�_�G");
    scanf("%d", &key);
    system("cls");
    printf("�п�J�[�K�h�ơG");
    scanf("%d", &times);
    system("cls");
    printf("1.�[�K\n");
    printf("2.�ѱK\n");
    printf("�п�J�Ҧ��G");
    scanf("%d", &choice);
    system("cls");
    printf("�п�J�n�B�z����r�G");
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
        printf("�����T���ﶵ");
    }
    return 0;
}
