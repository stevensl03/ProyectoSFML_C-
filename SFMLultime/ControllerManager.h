#pragma once
class ControllerManager{
	bool _buttons[6];
public:
	enum class Buttons {
		Up = 0,
		Down,
		Left,
		Right,

		Button1,
		Button2

	};

	void reset();

	void setPress(Buttons button);
	bool isPress(Buttons button);
};

