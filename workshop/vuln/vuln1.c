/*

Compile with:
gcc -fno-stack-protector -z execstack vuln1.c -o vuln1

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char login[32];
    char passwd[32];

    printf("Login: \n");
    gets(login);
    printf("Password: \n");
    gets(passwd);

    if(strcmp(login, "root") ==0)
    {
        if(strcmp(passwd, "1qazxsw2") == 0)
        {
            printf("Access Granted.\n");
            return 0;
        }
    }

    printf("Access Denied.\n");
    return 1;
}
