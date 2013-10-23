#pragma once
class Bicycle
{
public:
	Bicycle(void);
	~Bicycle(void);

	void setSuspension(bool);

	void ride();

private:
	bool isFullSuspension();
};

