#include "stdafx.h"
#include <iostream>
#include "binary_search_tree.h"

using namespace std;

int main()
{
	binary_search_tree<int> bst;
	for (int i = 0; i < 10; i++) {
		bst.add(i);
	}
    return 0;
}

