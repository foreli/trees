#include <string>

#pragma once
#define PRE_ORDER = 0;
#define IN_ORDER = 1;
#define POST_ORDER = 2;
template <typename T>
class tree {
protected:
	template <typename T>
	class tree_node {
	private:
		T _value;
		tree_node *_left;
		tree_node *_right;
		tree_node *_parent;
	public:
		tree_node(T &element) : _value(element), _left(nullptr), _right(nullptr), _parent(nullptr) {}
		~tree_node() {
			if (_left != nullptr) {
				delete _left;
			}

			if (_right != nullptr) {
				delete _right;
			}
		}

		T &get_value() {
			return _value;
		}

		tree_node *get_right() {
			return _right;
		}

		tree_node *get_left() {
			return _left;
		}

		tree_node *get_parent() {
			return _parent;
		}

		void set_value(T &val) {
			_value = val;
		}

		void set_right(tree_node *right) {
			_right = right;
		}

		void set_left(tree_node *left) {
			_left = left;
		}

		void set_parent(tree_node *parent) {
			_parent = parent;
		}
	};
	void _print_node(tree_node<T> *, int);
	tree_node<T> *_root;
	int _size;
	int _height;
public:
	tree();
	~tree();
	void print(int);

	virtual void add(T &) = 0;
	virtual void clear_tree() = 0;
	virtual bool search(T &) = 0;
};

