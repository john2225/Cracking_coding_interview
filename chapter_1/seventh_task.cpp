#include <iostream>


int** create_matrix(size_t&, size_t&);
void fill_array(int** arr, size_t, size_t);
void print(int**, size_t, size_t);
void rotate_matrix(int**, size_t);
void delete_arr(int**, size_t);


int main()
{
    size_t N = 0;
    size_t M = 0;
    int** created_array = create_matrix(N, M);
    fill_array(created_array, N, M);
    print(created_array, N, M);
    rotate_matrix(created_array, N);
    print(created_array, N, M);
    delete_arr(created_array, N);
    return 0;
}

int** create_matrix(size_t& row, size_t& column)
{
    std::cout << "Enter size of column: ";
    std::cin >> column;
    std::cout << "Enter size of row: ";
    std::cin >> row;
    
    int** arr = new int* [column];
    
    for(int i = 0; i < column; ++i)
    {
        arr[i] = new int[row];
    }
    return arr;
}

void fill_array(int** arr, size_t row, size_t column)
{
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            arr[i][j] = rand() % 10;
        }
    }
}

void print(int** arr, size_t row, size_t column)
{
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}

void rotate_matrix(int** arr, size_t row)
{
    for(int i = 0; i < row / 2; ++i)
    {
        for(int j = i; j < row - i - 1; ++j)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][row - 1 - i];
            arr[j][row - 1 - i] = arr[row - 1 - i][row - 1 - j];
            arr[row - 1 - i][row - 1 - j] = arr[row - 1 - j][i];
            arr[row - 1 - j][i] = tmp;
            
        }
    }
}


void delete_arr(int** arr, size_t column)
{
    for(int i = 0; i < column; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}


