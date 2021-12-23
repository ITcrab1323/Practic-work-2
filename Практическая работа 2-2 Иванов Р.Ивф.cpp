#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
using namespace std;
using namespace chrono;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    const int N = 100;
    int arr[N];
    bool answer;

    void Создание_Массива(int arr[], int& N);
    {
        do
        {
            cout << "Задание 1" << endl;

            for (int i = 0; i < N; i++)
            {
                arr[i] = rand() % 199 - 99;
            }
            for (int i = 0; i < N; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Пузырьковая_сортировка(int arr[], int& N);
    {
        do
        {
            cout << "Задание 2" << endl;

            steady_clock::time_point begin = steady_clock::now();

            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < 99; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int b = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = b;
                    }
                }

            }
            cout << "Отсортированный массив arr[N], (от меньшего к большему): " << endl;
            for (int i = 0; i < 100; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            steady_clock::time_point end = steady_clock::now();
            duration<float> time = end - begin;
            cout << "Время затраченное на сортировку массива: " << time.count() << " мс" << endl;
            cout << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Найти_максимальный_и_минимальный_элемент_массива(int arr[], int& N);
    {
        do
        {
            cout << "Задание 3" << endl;

            steady_clock::time_point begin = steady_clock::now();
            cout << "Минимум: " << arr[0] << endl << "Максимум: " << arr[N - 1] << endl;
            steady_clock::time_point end = steady_clock::now();
            duration<float> time = end - begin;

            cout << "Время затраченное на поиск минимального и максимального значений в отсортированном массиве arr[N]: " << time.count() << " мс" << endl;

            int const M = 100;
            int arr[M];

            for (int i = 0; i < M; i++)
            {
                arr[i] = rand() % 199 - 99;
            }

            begin = steady_clock::now();
            int minimum = arr[0];
            for (int i = 0; i < M; i++)
            {
                if (arr[i] < minimum)
                {
                    minimum = arr[i];
                }
            }
            int maxsimum = arr[0];
            for (int i = 0; i < M; i++)
            {
                if (arr[i] > maxsimum)
                {
                    maxsimum = arr[i];
                }
            }
            cout << "Минимум: " << minimum << endl << "Максимум: " << maxsimum << endl;
            end = steady_clock::now();
            time = end - begin;

            cout << "Время затраченное на поиск минимального и максимального значений в неотсортированном массиве arr[M]: " << time.count() << " мс" << endl;
            cout << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Вывести_среднее_значение(int arr[], int& N);
    {
        do
        {
            cout << "Задание 4" << endl;

            int t, r = 0;
            t = round((arr[0] + arr[N - 1]) / 2);
            cout << "Среднее значение = " << t << endl << "Индекс: ";

            for (int i = 0; arr[i] <= t; ++i)
            {
                if (arr[i] == t)
                {
                    cout << i << " " << endl;
                    r++;
                }
            }
            if (r == 0)
                cout << "Нет" << endl;

            cout << "Количество индексов: " << r << endl;
            cout << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Количество_элементов_меньше_числа_a(int arr[], int& N);
    {
        do
        {
            cout << "Задание 5" << endl;

            int num_a, s = 0;
            cout << "Введите число чтобы узнать сколько элементов массива arr[N] меньше этого числа: ";
            cin >> num_a;

            for (int i = 0; arr[i] < num_a && i < N; ++i)
                s++;

            cout << "Количество элементов меньше введённого вами числа: " << s << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }


    cout << "Задание 6" << endl;

    void Количество_элементов_больше_числа_b(int arr[], int& N);
    {
        do
        {
            int num_b, b = 0;
            cout << "Введите число чтобы узнать сколько элементов массива arr[N] больше этого числа: ";
            cin >> num_b;

            for (int i = N - 1; i >= 0 && arr[i] > num_b; --i)
                b++;

            cout << "Количество элементов больше введённого вами числа: " << b << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Бинарный_поиск(int arr[], int& N);
    {
        do
        {
            cout << "Задание 7" << endl;

            cout << "Введите число для его поиска в массиве arr[N]: ";
            int mid, l = 0, r = N - 1, key;
            bool flag = false;
            cin >> key;
            cin.sync();
            steady_clock::time_point begin = steady_clock::now();
            while ((l <= r) && (flag != true))
            {
                mid = (l + r) / 2;
                if (arr[mid] == key)
                    flag = true;
                if (arr[mid] > key)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (flag)
                cout << "Индекс элемента: " << key << " в массиве arr[N] = " << mid << endl;
            else
                cout << "Введённого вами числа нет в массиве arr[N]" << endl;
            steady_clock::time_point end = steady_clock::now();
            duration<float> time = end - begin;
            cout << "Скорость работы бинарного поиска: " << time.count() << " мс" << endl;
            begin = steady_clock::now();
            for (int i = 0; i < N; ++i)
            {
                if (key == arr[i])
                    break;
            }
            end = steady_clock::now();
            time = end - begin;
            cout << "Скорость работы линейного поиска (перебором): " << time.count() << " мс" << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl;
    }

    void Поменять_элементы_местами(int arr[], int& N);
    {
        do
        {
            cout << "Задание 8" << endl;

            int x1, x2;
            cout << "Введите индексы элементов массива arr[N]: ";
            cin >> x1 >> x2;
            cin.sync();
            steady_clock::time_point begin = steady_clock::now();
            swap(arr[x1], arr[x2]);
            steady_clock::time_point end = steady_clock::now();
            duration<float> time = end - begin;

            cout << "Скорость обмена местами элементов массива arr[N]: " << time.count() << " мс" << endl;
            cout << "Желаете повторить? 1 - Да, 0 - Нет ";
            cin >> answer;
            cout << endl;
        } while (answer);
        cout << endl << endl;
    }

}