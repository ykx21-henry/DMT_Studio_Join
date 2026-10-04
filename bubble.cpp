#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 8, 3, 6, 2, 7, 1 };
    int n = 6;

    // 冒泡排序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换两个数字
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出排序之后的结果
    cout << "从小到大排序结果：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
