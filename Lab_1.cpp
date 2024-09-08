// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows, columns;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> columns;
//     int arr[rows][columns];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;
//     cout << "Original Matrix" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int index = 0;
//     int arr1[rows * columns] = {};
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             arr1[index] = arr[j][i];
//             index++;
//         }
//     }
//     cout << "Column-Major Order" << endl;
//     for (int i = 0; i < rows * columns; i++)
//     {
//         cout << arr1[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// float calculatecgpa(float arr[])
// {
//     int count = 0;
//     float sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] != -1)
//         {
//             sum += arr[i];
//             count++;
//         }
//     }
//     return (sum / count);
//     ;
// }
// int main()
// {
//     string names[5] = {"Ali", "Hiba", "Asma", "Zain", "Faisal"};
//     float arr[5][5] = {{3.66, 3.33, 4.0, 3.0, 2.66},
//                        {3.33, 3.0, 3.66, 3.0, -1},
//                        {4.0, 3.66, 2.66, -1, -1},
//                        {2.66, 2.33, 4.0, -1, -1},
//                        {3.33, 3.66, 4.0, 3.0, 3.33}};

//     for (int i = 0; i < 5; i++)
//     {
//         float cgpa = calculatecgpa(arr[i]);
//         cout << names[i] << ": " << cgpa << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int size = int(sizeof(nums) / sizeof(nums[0]));
    int number;
    cout << "Enter the target number: ";
    cin >> number;
    int index = binarysearch(nums, size, number);
    if (index != -1)
    {
        cout << "Target is found at " << index << " index" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

bool binarysearch(int arr[3][4], int n, int m, int target)
{
    int i = 0;
    int j = n * m - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;
        int row = mid / m;
        int col = mid % m;

        if (arr[row][col] == target)
        {
            return true;
        }
        else if (arr[row][col] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[3][4] = {{1, 3, 5, 7},
                     {10, 11, 16, 20},
                     {23, 30, 34, 60}};
    int n = 3;
    int m = 4;

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    bool found = binarysearch(arr, n, m, target);

    if (found)
    {
        cout << "True"<<endl<<"Target found in the matrix!" << endl;
    }
    else
    {
        cout << "False"<<endl<<"Target not found in the matrix." << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// class MedianCalculator
// {
// private:
//     int *dataArray;
//     int currentSize;
//     int maxCapacity;

// public:
//     MedianCalculator()
//     {
//         currentSize = 0;
//         maxCapacity = 1;
//         dataArray = new int[maxCapacity];
//     }
//     ~MedianCalculator()
//     {
//         delete[] dataArray;
//     }
//     void insertNumber(int number)
//     {
//         if (currentSize == maxCapacity)
//         {
//             int *newArray = new int[maxCapacity * 2];
//             maxCapacity *= 2;
//             for (int i = 0; i < currentSize; i++)
//             {
//                 newArray[i] = dataArray[i];
//             }
//             delete[] dataArray;
//             dataArray = newArray;
//         }
//         int position = currentSize - 1;
//         while (position >= 0 && dataArray[position] > number)
//         {
//             dataArray[position + 1] = dataArray[position];
//             position--;
//         }
//         dataArray[position + 1] = number;
//         currentSize++;
//     }
//     double getMedian()
//     {
//         if (currentSize % 2 == 0)
//         {
//             int middleIndex1 = currentSize / 2 - 1;
//             int middleIndex2 = currentSize / 2;
//             double median = (dataArray[middleIndex1] + dataArray[middleIndex2]) / 2.0;
//             return median;
//         }
//         else
//         {
//             int middleIndex = currentSize / 2;
//             double median = dataArray[middleIndex];
//             return median;
//         }
//     }
// };

// int main()
// {
//     MedianCalculator medianCalculator;
//     medianCalculator.insertNumber(1);
//     medianCalculator.insertNumber(2);
//     cout << medianCalculator.getMedian() << endl;
//     medianCalculator.insertNumber(3);
//     cout << medianCalculator.getMedian() << endl;
//     return 0;
// }