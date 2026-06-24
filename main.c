#include <stdio.h>
#include <string.h>

// Cố tình tạo một API Key giả để làm mồi cho công cụ quét Secret
const char* SLACK_API_TOKEN = "DAY_LA_TOKEN_GIA_DE_DEMO_THAY_CO_OI";

void login() {
    char password[10];
    printf("Nhap mat khau he thong: ");
    

    gets(password); 
}

int main() {
    login();
    return 0;
}