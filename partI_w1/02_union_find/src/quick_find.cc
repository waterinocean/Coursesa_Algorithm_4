#include "quick_find.hh"

quick_find::quick_find(const int& num) : count_(num)
{
  if (num <= 0)
    return;

  id_ = new int[num];
  count_array_ = count_ = num;
}

void quick_find::union_node(const int& p, const int& q)
{
  if (p == q || p < 0 || p > count_array_ - 1 || q < 0 || q > count_array_ - 1)
    return;

  int p_id = id_[p];
  int q_id = id_[q];


}
  
int quick_find::node_find(const int& p)
{
  if (p < 0 || p >= count_array_)
    return -1;

  return id_[p];
}
  
bool quick_find::connected(const int& p, const int& q)
{
  
  return id_[p] == id_[q];
}
