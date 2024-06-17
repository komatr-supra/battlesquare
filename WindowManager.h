#pragma once

class WindowManager
{
public:
	WindowManager(int widthWindow = 1920 / 2, int heightWindow = 1080 / 2)
	{
		WindowManager::width = widthWindow;
		WindowManager::height = heightWindow;
		WindowManager::widthHalf = widthWindow/2;
		WindowManager::heightHalf = heightWindow/2;
	}
	static int GetWidth() { return GetInstance().width; }
	static int GetHeight() { return GetInstance().height; }
	static int GetWidthHalf() { return GetInstance().widthHalf; }
	static int GetHeightHalf() { return GetInstance().heightHalf; }

private:
	static int width;
	static int height;
	static int widthHalf;
	static int heightHalf;

	static WindowManager& GetInstance() {
		static WindowManager instance;
		return instance;
	}

	WindowManager(const WindowManager&) = delete;
	WindowManager operator=(const WindowManager&) = delete;
};

