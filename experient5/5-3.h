class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void set_value(double clength, double cwidth, double cheight) {
		length = clength;
		width = cwidth;
		height = cheight;
	}
	double volume() {
		return length * width * height;
	}
};