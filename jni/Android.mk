LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE   := nativie
LOCAL_SRC_FILES := Native.c
include $(BUILD_SHARED_LIBRARY)
