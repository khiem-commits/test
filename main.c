#include <stdio.h>
#include <string.h>

// Cố tình tạo một API Key giả để làm mồi cho công cụ quét Secret
//const char* SLACK_API_TOKEN = "xoxb-123456789012-123456789012-A1B2C3D4E5F6G7H8I9J0K1L2"; 

void login() {
    char password[10];
    printf("Nhap mat khau he thong: ");
    
    // Sử dụng hàm nguy hiểm gets() gây lỗi tràn bộ đệm (Buffer Overflow)
    gets(password); 
}

int main() {
    login();
    return 0;
}
