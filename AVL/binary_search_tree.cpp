#include "stdafx.h"
#include "binary_search_tree.h"

template <typename T>
binary_search_tree<T>::binary_search_tree() {
	_root = nullptr;
	_size = 0;
	_height = 0;
}

template <typename T>
binary_search_tree<T>::~binary_search_tree() {
	delete _root;
}

template <typename T>
void binary_search_tree<T>::add(T &element) {
	tree_node<T> *tmp = new tree_node<T>(element);
	_size++;
	_height++;
	if (_root == nullptr) {
		_root = tmp;
		return;
	}

	tree_node<T> *curr = _root;
	do {
		if (curr->get_value() > element) {
			curr = curr->get_left();
		} else {
			curr = curr->get_right();
		}
	} while (curr != nullptr);
	tree_node<T> *parent = curr->get_parent();
	tmp->set_parent(parent);
	if (parent->get_value() < element) {
		parent->set_right(tmp);
		return;
	}

	parent->set_left(tmp);
}

template <typename T>
void binary_search_tree<T>::clear_tree() {

}

template <typename T>
bool binary_search_tree<T>::search(T& element) {
	return true;
}

template class binary_search_tree<int>;
