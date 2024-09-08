// // #include <iostream>
// // using namespace std;

// // class MatrixSearch
// // {
// // private:
// //     int rows;
// //     int cols;
// //     int matrix[3][4];

// // public:
// //     MatrixSearch(int arr[3][4], int r, int c)
// //     {
// //         rows = r;
// //         cols = c;
// //         for (int i = 0; i < rows; ++i)
// //         {
// //             for (int j = 0; j < cols; ++j)
// //             {
// //                 matrix[i][j] = arr[i][j];
// //             }
// //         }
// //     }
// //     bool binarySearch(int target)
// //     {
// //         int left = 0;
// //         int right = rows * cols - 1;

// //         while (left <= right)
// //         {
// //             int mid = (left + right) / 2;
// //             int row = mid / cols;
// //             int col = mid % cols;

// //             if (matrix[row][col] == target)
// //             {
// //                 return true;
// //             }
// //             else if (matrix[row][col] < target)
// //             {
// //                 left = mid + 1;
// //             }
// //             else
// //             {
// //                 right = mid - 1;
// //             }
// //         }
// //         return false;
// //     }
// // };

// // int main()
// // {
// //     int arr[3][4] = {{1, 3, 5, 7},
// //                      {10, 11, 16, 20},
// //                      {23, 30, 34, 60}};
// //     int n = 3;
// //     int m = 4;

// //     MatrixSearch sr(arr, n, m);

// //     int target;
// //     cout << "Enter the target number: ";
// //     cin >> target;

// //     bool found = sr.binarySearch(target);

// //     if (found)
// //     {
// //         cout << "True" << endl
// //              << "Target found in the matrix!" << endl;
// //     }
// //     else
// //     {
// //         cout << "False" << endl
// //              << "Target not found in the matrix." << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class Matrix
// {
// private:
//     int mat[3][3];
//     int rows, cols;

// public:
//     Matrix(int r, int c) : rows(r), cols(c)
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     void display() const
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void transpose() const
//     {
//         int res[3][3] = {};
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 res[j][i] = mat[i][j];
//             }
//         }
//         cout << "Transposed Matrix:" << endl;
//         for (int i = 0; i < cols; i++)
//         {
//             for (int j = 0; j < rows; j++)
//             {
//                 cout << res[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void multiplyConstant(int constant) const
//     {
//         int res[3][3] = {};
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 res[i][j] = mat[i][j] * constant;
//             }
//         }
//         cout << "Matrix after multiplication by " << constant << ":" << endl;
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 cout << res[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void add(const Matrix &other) const
//     {
//         if (rows != other.rows || cols != other.cols)
//         {
//             cout << "Addition not possible!" << endl;
//             return;
//         }
//         int res[3][3] = {};
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 res[i][j] = mat[i][j] + other.mat[i][j];
//             }
//         }
//         cout << "Result of matrix addition:" << endl;
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 cout << res[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void subtract(const Matrix &other) const
//     {
//         if (rows != other.rows || cols != other.cols)
//         {
//             cout << "Subtraction not possible!" << endl;
//             return;
//         }
//         int res[3][3] = {};
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 res[i][j] = mat[i][j] - other.mat[i][j];
//             }
//         }
//         cout << "Result of matrix subtraction:" << endl;
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 cout << res[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void multiply(const Matrix &other) const
//     {
//         if (cols != other.rows)
//         {
//             cout << "Multiplication not possible!" << endl;
//             return;
//         }
//         int res[3][3] = {};
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < other.cols; j++)
//             {
//                 for (int k = 0; k < cols; k++)
//                 {
//                     res[i][j] += mat[i][k] * other.mat[k][j];
//                 }
//             }
//         }
//         cout << "Result of matrix multiplication:" << endl;
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < other.cols; j++)
//             {
//                 cout << res[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// void rows_cols(int &r1, int &c1, int &r2, int &c2)
// {
//     cout << "Enter number of rows for matrix 1: ";
//     cin >> r1;
//     cout << "Enter number of columns for matrix 1: ";
//     cin >> c1;
//     cout << "Enter number of rows for matrix 2: ";
//     cin >> r2;
//     cout << "Enter number of columns for matrix 2: ";
//     cin >> c2;
// }

// int main()
// {
//     int choice;
//     do
//     {
//         cout << "\nWhich operation do you want to perform?" << endl;
//         cout << "1. Transpose of a Matrix" << endl;
//         cout << "2. Multiply a matrix with a constant" << endl;
//         cout << "3. Addition of 2 matrices" << endl;
//         cout << "4. Subtraction of 2 matrices" << endl;
//         cout << "5. Multiplication of 2 matrices" << endl;
//         cout << "Enter your choice (0 to exit): ";
//         cin >> choice;

//         if (choice == 0)
//             cout<<"Exit...";
//             break;

//         switch (choice)
//         {
//         case 1:
//         {
//             int r1, c1;
//             cout << "Enter number of rows: ";
//             cin >> r1;
//             cout << "Enter number of columns: ";
//             cin >> c1;
//             Matrix mat1(r1, c1);
//             mat1.transpose();
//             break;
//         }
//         case 2:
//         {
//             int r1, c1;
//             cout << "Enter number of rows: ";
//             cin >> r1;
//             cout << "Enter number of columns: ";
//             cin >> c1;
//             Matrix mat1(r1, c1);
//             int constant;
//             cout << "Enter the constant: ";
//             cin >> constant;
//             mat1.multiplyConstant(constant);
//             break;
//         }
//         case 3:
//         {
//             int r1, c1, r2, c2;
//             rows_cols(r1, c1, r2, c2);
//             Matrix mat1(r1, c1);
//             Matrix mat2(r2, c2);
//             mat1.add(mat2);
//             break;
//         }
//         case 4:
//         {
//             int r1, c1, r2, c2;
//             rows_cols(r1, c1, r2, c2);
//             Matrix mat1(r1, c1);
//             Matrix mat2(r2, c2);
//             mat1.subtract(mat2);
//             break;
//         }
//         case 5:
//         {
//             int r1, c1, r2, c2;
//             rows_cols(r1, c1, r2, c2);
//             Matrix mat1(r1, c1);
//             Matrix mat2(r2, c2);
//             mat1.multiply(mat2);
//             break;
//         }
//         default:
//             cout << "Invalid choice!" << endl;
//             break;
//         }
//     } while (choice != 0);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void firstopr(vector<int> A, vector<int> B, int x, int y)
// {
//     vector<int> res;
//     for (int i = 0; i < A.size(); i++)
//     {
//         res.push_back(x * A[i] + y * B[i]);
//     }
//     cout << "XA + YB = ";
//     for (auto &a : res)
//     {
//         cout << a << " ";
//     }
//     cout << endl;
// }
// void secondopr(vector<int> A, vector<int> B)
// {
//     int res = 0;
//     for (int i = 0; i < A.size(); i++)
//     {
//         res += A[i] * B[i];
//     }
//     cout << "A.B = " << res << endl;
// }
// int main()
// {
//     vector<int> A;
//     vector<int> B;
//     int a1, b1, X, Y;
//     cout << "How many numbers do you want to enter in Vector A?" << endl;
//     cin >> a1;
//     for (int i = 0; i < a1; i++)
//     {
//         int n1;
//         cout << "Enter numbers: ";
//         cin >> n1;
//         A.push_back(n1);
//     }
//     cout << "How many numbers do you want to enter in Vector B?" << endl;
//     cin >> b1;
//     if (a1 != b1)
//     {
//         cout << "Vectors A and B must be of the same size." << endl;
//     }
//     else
//     {
//         for (int i = 0; i < b1; i++)
//         {
//             int n2;
//             cout << "Enter numbers: ";
//             cin >> n2;
//             B.push_back(n2);
//         }

//         cout << "Enter a value of X: ";
//         cin >> X;
//         cout << "Enter a value of Y: ";
//         cin >> Y;
//         cout << endl;
//         firstopr(A, B, X, Y);
//         secondopr(A, B);
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> constantMultiply(vector<int> A ,vector<int> B ,int X , int Y)
{
    vector<int> result;
    for(int i=0;i<A.size();i++)
    {
        A[i]*=X;
        B[i]*=Y;
        result.push_back(A[i]+B[i]);
        
    }
    return result;

}

vector<int> DotProduct(vector<int> A ,vector<int> B)
{
    vector<int> result;
    for(int i=0;i<A.size();i++)
    {
        result.push_back(A[i]*B[i]);
    }
    return result;
}
int main()
{
    vector<int> A={16,-6,7};
    vector<int> B={4,2,-3};
    vector<int> result;
    vector<int> result2;
    int X=2;
    int Y=-5;
    result=constantMultiply(A,B,X,Y);
    cout<<"Part A"<<endl;
    for(int i=0;i<result.size();i++)
    {
        
        cout<<result[i]<<" ";
    }
    cout<<endl;
    result2=DotProduct(A,B);
    cout<<"Part B"<<endl;
    for(int i=0;i<result2.size();i++)
    {
        cout<<result2[i]<<" ";
    }



}