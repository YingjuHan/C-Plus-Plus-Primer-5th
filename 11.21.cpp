
while (cin >> word)
	++word_count.insert({word, 0}).first->second;
// 若`insert`成功：先添加一个元素，然后返回一个 `pair`，`pair` 的 `first`元素是一个迭代器。
// 这个迭代器指向刚刚添加的元素，这个元素是`pair`，然后递增`pair`的`second`成员。
// 若`insert`失败：递增已有指定关键字的元素的 `second`成员。

