class ExamRoom {
private:
	vector<int> v;
	int sz;
public:
	ExamRoom(int n) {
		sz = n;
	}

	int seat() {
		if (v.size() == 0) {
			v.push_back(0);
			return 0;
		}
		int maxi = max(v[0], sz - 1 - v.back());
		for (int i = 0; i < v.size() - 1; ++i) maxi = max(maxi, (v[i + 1] - v[i]) >> 1);

		if (v[0] == maxi) {
			v.insert(v.begin(), 0);
			return 0;
		}

		for (int i = 0; i < v.size() - 1; ++i) {
			if (((v[i + 1] - v[i]) >> 1) == maxi) {
				v.insert(v.begin() + i + 1, (v[i + 1] + v[i]) >> 1);
				return v[i + 1];
			}
		}
		v.push_back(sz - 1);
		return sz - 1;
	}

	void leave(int p) {
		for (int i = 0; i < v.size(); ++i) if (v[i] == p) v.erase(v.begin() + i);
	}
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */