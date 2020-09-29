#ifndef USBDEVWRAP_H
#define USBDEVWRAP_H

#include <node.h>
#include <node_object_wrap.h>
#include "usbdev.h"

#include "videostreaming.h"
//#include "cameraviewer.h"

class usbdevWrap : public node::ObjectWrap {
 public:
  static void Init(v8::Local<v8::Object> exports);

 private:
  explicit usbdevWrap(double value = 0);
  ~usbdevWrap();

  double value_;
  usbdev oscannlight;

  Videostreaming VS;
  //cameraViewer CV;

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void PlusOne(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void OpenDevice(const v8::FunctionCallbackInfo<v8::Value>& args);

  static void ServiceSlot(const v8::FunctionCallbackInfo<v8::Value>& args);
};


#endif