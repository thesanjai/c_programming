
typedef struct Element{
    int i;//row
    int j;//col
    int x;//non-zero value
}Element;

typedef struct Sparse_Matrix{
    int m; //matrix row
    int n; //matrix col
    int num; // no. of non zero elements
    Element* ele;
}Sparse_Matrix;

void Create_Sparse_Matrix(Sparse_Matrix* s);
void Create_Sparse_Matrix_from_file(Sparse_Matrix *s);
void display(Sparse_Matrix s);