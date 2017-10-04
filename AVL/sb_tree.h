#pragma once
#include "tree.h"
template <typename T>
class sb_tree : tree<T> {
public:
	sb_tree();
	~sb_tree();

	virtual void rotate_left();

	virtual void rotate_right();
};

