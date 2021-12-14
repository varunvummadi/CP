#include<iostream>
 using namespace std; int main() { int *p = (int *)malloc(sizeof(int)); p = NULL; free(p); return 0; }