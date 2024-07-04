#include<stdio.h>
class oya
{
public:
	virtual void Size () = 0;
	virtual void Draw () = 0;

protected:
	float size;
	float radius;
};

class enn : public oya
{
public:
	void Size();
	void Draw() { printf("�ʐ� %f\n", size); };
};

class shikaku : public oya
{
public:
	void Size() override;
	void Draw() { printf("�ʐ� %f\n", size); };
};

void oya ::Size() {}

void enn ::Size() {
	radius = 5.0f;
	printf("�~�̔��a %f\n", radius);
	size = radius * radius * 3.14f;
}

void shikaku ::Size() {
	radius = 5.0f;
	printf("��`�̔��a %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	oya *ishape[2] = {new enn, new shikaku};

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}