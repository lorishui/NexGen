
#ifndef _I_WORLD_H_
#define _I_WORLD_H_

#include "../public/module.h"

class IScene;

class IWorld : public IEntity
{
public:
	// 渲染窗口宽度
	virtual void SetWidth(int value) = 0;
	virtual int GetWidth() const = 0;

	// 渲染窗口高度
	virtual void SetHeight(int value) = 0;
	virtual int GetHeight() const = 0;
	// 创建渲染设备
	virtual bool CreateDevice(bool multithreading = false) = 0;
	// 每帧渲染
	virtual void Display(float offset_seconds) = 0;
	// 背景颜色
  virtual void SetBackColor(const char* value) = 0;
  // 主场景对象
  virtual void SetMainSceneID(const PERSISTID& id) = 0;
  virtual PERSISTID GetMainSceneID() const = 0;
  virtual IScene* GetMainScene() const = 0;
  virtual void SetMainGuiID(const PERSISTID& id) = 0;
};

#endif