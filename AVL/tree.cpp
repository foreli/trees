#include "stdafx.h"
#include "tree.h"
#include <iostream>

using namespace std;

template <typename T>
tree<T>::tree() {

}

template <typename T>
tree<T>::~tree() {
	// TODO: Add logic
}

template <typename T>
void tree<T>::print(int style) {
	_print_node(_root, style);
}
template <typename T>
void tree<T>::_print_node(tree_node<T> *root, int style) {
	if (root == nullptr) return;

	switch (style) {
	case PRE_ORDER:
		cout << root->get_value() << endl;
		_print_node(root->get_left(), style);
		_print_node(root->get_right(), style);
		return;
	case IN_ORDER:
		_print_node(root->get_left(), style);
		cout << root->get_value() << endl;
		_print_node(root->get_right(), style);
		return;
	case POST_ORDER:
		_print_node(root->get_left(), style);
		_print_node(root->get_right(), style);
		cout << root->get_value() << endl;
	}
}

template class tree<int>;
