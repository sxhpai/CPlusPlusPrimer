// 2.1.1

// 2.1

// 2.2
// #include <iostream>

// int main() {
//     // //��ȷ
//     // std::cout << "Right:" << std::endl;
//     // for (int i = 10; i >= 0; i--)  {
//     //     std::cout << i << std::endl;
//     // }

//     // //����
//     // std::cout << "Error:" << std::endl;
//     // for (unsigned int i = 10; i >= 0; i--) {
//     //     std::cout << i-1 << std::endl;
//     // }

//     // //��ȷ
//     // for (unsigned int i = 11; i > 0; i--) {
//     //     std::cout << i-1 << std::endl;
//     // }

//     //2.3 2.4
//     // unsigned u = 10, u2 = 42;
//     // std::cout << u2 - u << std::endl;
//     // std::cout << u - u2 << std::endl;

//     // int i = 10, i2 = 42;
//     // std::cout << i2 - i << std::endl;
//     // std::cout << i - i2 << std::endl;
//     // std::cout << i - u << std::endl;
//     // std::cout << u - i << std::endl;


//     return 0;
// }

//2.1.2

//2.3

//2.4

//2.5

//2.6

//2.7

//2.8
// #include <iostream>

// void test() {
//     int b;
//     std::cout << b << std::endl;
// }

// std::string global_str;
// int global_int;

// int main() {
//     int local_int;
//     std::string local_str;
//     //���ֲ�ͬ�ĳ�ʼ����ʽ
//     // int a1 = 1;
//     // int a2 = {1};
//     // int a3{1};
//     // int a4(1);

//     std::cout << "gs " <<global_str << std::endl;
//     std::cout << "gi " <<global_int << std::endl;
//     std::cout << "li " <<local_int << std::endl;
//     std::cout << "ls " <<local_str << std::endl;

//     // test();

//     return 0;
// }


// 2.13

//2.14
// #include <iostream>

// int main() {
//     int i = 100, sum = 0;
//     for (int i = 0; i != 10; ++i) {
//         sum += i;
//     }
//     std::cout << i << " " << sum << std::endl;

//     return 0;
// }

//2.15

//2.17
// #include <iostream>

// int main() {
//     int i, &ri = i;
//     i = 5; ri = 10;
//     std::cout << i << " " << ri << std::endl;

//     return 0;
// }


//2.3.2

#include <iostream>

int main() {
    // const int buf;
    int cnt = 0;
    const int sz = cnt;
    std::cout << sz << std::endl;
    return 0;
    //2.18
    // int *p = nullptr;
    // int a = 10;
    // p = &a;
    // *p = 20;
    // std::cout << a << std::endl;

    //2.19
    //ָ������һ�����󣬶����ý�����ĳ������ı����������Ƕ���
    //��ˣ�һ�����������ã����޷������ٰ󶨵�����Ķ���
    //��ָ�룬����Ըı�ָ��ָ��һ���¶���

    //2.20
    // int i = 12;
    // int *p1 = &i;
    // *p1 = *p1 * *p1;
    // std::cout << i << std::endl;

}