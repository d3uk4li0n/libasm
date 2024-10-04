#include "../include/libasm.h"

void test_my_strlen(char *test){
    printf("\n***test my_strlen ***\n");
    printf("my_strlen(\"%s\") = %d\n", test, my_strlen(test));
}

void test_my_strchr(char *test, char ch){
    printf("\n***test my_strchr ***\n");
    printf("my_strchr(\"%s\", '%c') = %s\n", test, ch, my_strchr(test, ch));
}

void test_my_read(){

    char buf[100];

    printf("\n***test my_read ***\n");

    printf("Please enter some characters:\n");
    int numBytes = my_read(0, buf, 99);

    printf("You entered %d characters (including \\n): %s\n", numBytes, buf);
}

void test_my_write(){

    printf("\n***test my_write ***\n");

    char test[] = "longstring.com\n";
    int numBytes = my_write(1, test, 15);
    printf("You wrote %d characters\n", numBytes);
}

void test_my_memset(){

    printf("\n***test my_memset ***\n");

    char buf[100];

    my_memset(buf, '\0', 100);
    my_memset(buf, 'z', 50);

    printf("buf = %s\n", buf);
}

void test_my_memcpy(){

    printf("\n***test my_memcpy ***\n");

    char src[] = "this_is_the_source";
    char dst[] = "destination.here";

    my_memcpy(dst, src, 10);

    printf("my_memcpy(dst, src, 10), dst = %s\n", dst);
}

void test_my_strcmp(){

    printf("\n***test my_strcmp ***\n");

    char str1[] = "this_is_the_first_string";
    char str2[] = "this_is_the_first_string";

    int result = my_strcmp(str1, str2);

    printf("my_strcmp(%s, %s), result = %d\n", str1, str2, result);

    char str3[] = "this_is_the_first_string";
    char str4[] = "this_is_the_second_string";

    result = my_strcmp(str3, str4);

    printf("my_strcmp(%s, %s), result = %d\n", str3, str4, result);

    char str5[] = "this_is_the_second_string";
    char str6[] = "this_is_the_first_string";

    result = my_strcmp(str5, str6);

    printf("my_strcmp(%s, %s), result = %d\n", str5, str6, result);
}

void test_my_strncmp(){

    printf("\n***test my_strncmp ***\n");

    char str1[] = "this_is_the_first_string";
    char str2[] = "this_is_the_first_string";

    int result = my_strncmp(str1, str2, 25);

    printf("my_strncmp(%s, %s, 25), result = %d\n", str1, str2, result);

    char str3[] = "this_is_the_first_string";
    char str4[] = "this_is_the_second_string";

    result = my_strncmp(str3, str4, 13);

    printf("my_strncmp(%s, %s, 13), result = %d\n", str3, str4, result);

    char str5[] = "this_is_the_second_string";
    char str6[] = "this_is_the_first_string";

    result = my_strncmp(str5, str6, 13);

    printf("my_strncmp(%s, %s, 13), result = %d\n", str5, str6, result);
}

void test_my_strcasecmp(){

    printf("\n***test my_strcasecmp ***\n");

    char str1[] = "this_is_the_first_string";
    char str2[] = "THIS_IS_THE_FIRST_STRING";

    int result = my_strcasecmp(str1, str2);

    printf("my_strcasecmp(%s, %s), result = %d\n", str1, str2, result);

    char str3[] = "THIS_IS_THE_FIRST_STRING";
    char str4[] = "this_is_the_second_string";

    result = my_strcasecmp(str3, str4);

    printf("my_strcasecmp(%s, %s), result = %d\n", str3, str4, result);

    char str5[] = "this_is_the_second_string";
    char str6[] = "THIS_IS_THE_FIRST_STRING";

    result = my_strcasecmp(str5, str6);

    printf("my_strcasecmp(%s, %s), result = %d\n", str5, str6, result);

}

void test_my_index(){

    printf("\n***test my_index ***\n");

    char test[] = "this_is_the_first_string";
    char ch = 'i';

    printf("my_index(\"%s\", '%c') = %s\n", test, ch, my_index(test, ch));

    ch = 'z';

    printf("my_index(\"%s\", '%c') = %s\n", test, ch, my_index(test, ch));
}

void test_my_memmove(){

    printf("\n***test my_memmove ***\n");

    char src[] = "this_is_the_source";
    char dst[] = "destination.here";

    my_memmove(dst, src, 10);

    printf("my_memmove(dst, src, 10), dst = %s\n", dst);


    my_memmove(dst, src, 12);

    printf("my_memmove(dst, src, 12), dst = %s\n", dst);
}

    void my_test(void){
    char test[] = "longstring.com";
    char ch = '.';

    test_my_strlen(test);
    test_my_strchr(test, ch);

    ch = 'z';
    test_my_strchr(test, ch);

    test_my_memset();

    test_my_memcpy();

    test_my_strcmp();

    test_my_strncmp();

    test_my_strcasecmp();

    test_my_index();

    test_my_memmove();

    test_my_read();
    test_my_write();
}

int main(void){
    my_test();

    return 0;
}
