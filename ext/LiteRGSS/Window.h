#ifndef L_WINDOW_HEADER
#define L_WINDOW_HEADER

#include "Graphics.h"


VALUE rb_Window_Initialize(int argc, VALUE* argv, VALUE self);
VALUE rb_Window_getViewport(VALUE self);
VALUE rb_Window_setWindowSkin(VALUE self, VALUE val);
VALUE rb_Window_getWindowSkin(VALUE self);
VALUE rb_Window_setWidth(VALUE self, VALUE val);
VALUE rb_Window_getWidth(VALUE self);
VALUE rb_Window_setHeight(VALUE self, VALUE val);
VALUE rb_Window_getHeight(VALUE self);
VALUE rb_Window_setSize(VALUE self, VALUE x, VALUE y);
VALUE rb_Window_setWindowBuilder(VALUE self, VALUE val);
VALUE rb_Window_getWindowBuilder(VALUE self);
VALUE rb_Window_setX(VALUE self, VALUE val);
VALUE rb_Window_getX(VALUE self);
VALUE rb_Window_setY(VALUE self, VALUE val);
VALUE rb_Window_getY(VALUE self);
VALUE rb_Window_setPosition(VALUE self, VALUE x, VALUE y);
VALUE rb_Window_setZ(VALUE self, VALUE val);
VALUE rb_Window_getZ(VALUE self);
VALUE rb_Window_setOX(VALUE self, VALUE val);
VALUE rb_Window_getOX(VALUE self);
VALUE rb_Window_setOY(VALUE self, VALUE val);
VALUE rb_Window_getOY(VALUE self);
VALUE rb_Window_setOrigin(VALUE self, VALUE x, VALUE y);
VALUE rb_Window_setStretch(VALUE self, VALUE val);
VALUE rb_Window_getStretch(VALUE self);
VALUE rb_Window_getCursorRect(VALUE self);
VALUE rb_Window_setCursorRect(VALUE self, VALUE val);
VALUE rb_Window_getCursorSkin(VALUE self);
VALUE rb_Window_setCursorSkin(VALUE self, VALUE val);
VALUE rb_Window_getPauseSkin(VALUE self);
VALUE rb_Window_setPauseSkin(VALUE self, VALUE val);
VALUE rb_Window_getPause(VALUE self);
VALUE rb_Window_setPause(VALUE self, VALUE val);
VALUE rb_Window_getPauseX(VALUE self);
VALUE rb_Window_setPauseX(VALUE self, VALUE val);
VALUE rb_Window_getPauseY(VALUE self);
VALUE rb_Window_setPauseY(VALUE self, VALUE val);
VALUE rb_Window_getActive(VALUE self);
VALUE rb_Window_setActive(VALUE self, VALUE val);
VALUE rb_Window_update(VALUE self);
VALUE rb_Window_getOpacity(VALUE self);
VALUE rb_Window_setOpacity(VALUE self, VALUE val);
VALUE rb_Window_getBackOpacity(VALUE self);
VALUE rb_Window_setBackOpacity(VALUE self, VALUE val);
VALUE rb_Window_getContentsOpacity(VALUE self);
VALUE rb_Window_setContentsOpacity(VALUE self, VALUE val);
VALUE rb_Window_getRect(VALUE self);
VALUE rb_Window_getVisible(VALUE self);
VALUE rb_Window_setVisible(VALUE self, VALUE val);
VALUE rb_Window_lock(VALUE self);
VALUE rb_Window_unlock(VALUE self);
VALUE rb_Window_locked(VALUE self);

VALUE rb_Window_getIndex(VALUE self);
VALUE rb_Window_Dispose(VALUE self);
VALUE rb_Window_Copy(VALUE self);

VALUE rb_Window_DisposeFromViewport(VALUE self);

namespace rb {
	template<>
	void Mark<CWindow_Element>(CWindow_Element* window);
}
#endif // !L_WINDOW_HEADER
