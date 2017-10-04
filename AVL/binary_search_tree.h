#pragma once
#include "tree.h"
#include <string>
template <typename T>
class binary_search_tree : public tree<T> {
public:
	binary_search_tree();
	~binary_search_tree();

	virtual void add(T&) override;

	virtual void clear_tree() override;

	virtual bool search(T&) override;
};

