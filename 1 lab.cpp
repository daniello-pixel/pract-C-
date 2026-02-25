#include <iostream>

int main()
 {
    std::string password;
    const std::string truepassword= "11111";
    printf("Wwedite parol: ");
    std::cin >> password;
    int result = truepassword.compare(password);
    if (result == 0)
        printf("verno");
    else
        printf("ne verno");
    return 0;
}
