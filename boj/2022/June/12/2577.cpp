#include <iostream>

using namespace std;

int arr[10];

void exnum(int num)
{
    arr[num % 10]++;
    num /= 10;
    if (num) exnum(num);
//    else return;
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    exnum(a*b*c);

    for(int i=0;i<10;i++) cout << arr[i] << endl;

    return 0;

}