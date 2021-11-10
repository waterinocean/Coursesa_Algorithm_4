

class quick_find
{
public:
  explicit quick_find(const int& num);
  
  void union_node(const int& p, const int& q);
  int node_find(const int& p);
  bool connected(const int& p, const int& q);
	  
private:
  int                   count_{0};
  int*                  id_ = nullptr;
};
