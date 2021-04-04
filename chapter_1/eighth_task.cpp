#include <iostream>

int** create_matrix(size_t&, size_t&);
void fill_array(int** arr, size_t, size_t);
void print(int**, size_t, size_t);
void delete_arr(int**, size_t);
void check_matrix(int**, size_t, size_t);


int main()
{
    size_t N = 0;
    size_t M = 0;
    int** created_array = create_matrix(N, M);
    fill_array(created_array, N, M);
    print(created_array, N, M);
    check_matrix(created_array, N, M);
    print(created_array, N, M);
    delete_arr(created_array, N);
    return 0;
}

int** create_matrix(size_t& row, size_t& column)
{
    std::cout << "Enter size of row: ";
    std::cin >> row;
    std::cout << "Enter size of column: ";
    std::cin >> column;
    
    int** arr = new int* [row];
    
    for(int i = 0; i < row; ++i)
    {
        arr[i] = new int[column];
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

void check_matrix(int** arr, size_t row, size_t column)
{
    bool boolRow[row];
    bool boolCol[column];
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            if(0 == arr[i][j])
            {
                boolRow[i] = true;
                boolCol[j] = true;
            }
        }
    }
    
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            if(boolRow[i] || boolRow[j])
                {
                    arr[i][j] = 0;
                }
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

