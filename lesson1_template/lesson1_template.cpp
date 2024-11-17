#include <iostream>
#include <vector>
#include <string>
// тут был ваня
using namespace std;

template<typename T>
int search(T date, vector<T> arr)
{

    int l = 0;
    int r = arr.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (date == arr[mid]) 
        { return mid; }
        else if (date < arr[mid]) 
        { r = mid - 1; }
        else 
        { l = mid + 1; }
    }
    return -1;
}


template<typename T>
void Sort(vector<T> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

}

template<typename T>
void PrintArr(vector<T>& arr)
{
    for (int i = 0; i < arr.size(); i++) { cout << arr[i] << ' '; } cout << endl;
}

int main()
{
    vector<int> arr{ 5,7,4,7,3,2,8,4,7,9,0,1 };
    int num = 8;
    Sort(arr);
    PrintArr(arr);
    cout << "Index el: " << search(num,arr) << endl;
    vector<char> str{'h', 'e', 'l', 'l', 'o'};
    Sort(str);
    PrintArr(str);
    cout << "Index el 'l': " << search('e', str) << endl;
    vector<string> str2{ "hello", " ", "world" };
    PrintArr(str2);
    string word = " ";
    cout << "Index el ' ': " << search(word, str2) << endl;


}

