class Debug{
public:
	constexpr Debug(bool b=true): hw(b), io(b), other(b) { }
	constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) { }
	constexpr  bool any() {return hw || io || other}

	void set_io(bool b) {io = b};
	void set_hw(bool h) {hw = h};
	void set_other(bool o) {hw = o};
private:
	bool hw;
	bool io;
	bool other;
};