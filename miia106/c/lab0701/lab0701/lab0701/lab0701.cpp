#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // �� address �ͧ x

    cout << "��Ңͧ x: " << x << endl;           // �ʴ���Ңͧ x
    cout << "���˹觢ͧ x: " << &x << endl;    // �ʴ� address �ͧ x
    cout << "��Ҽ�ҹ ptr: " << *ptr << endl;   // ��Ҷ֧��Ҽ�ҹ ptr
    cout << "���˹�� ptr: " << ptr << endl;  // �ʴ� address ��� ptr �����

    return 0;
}
