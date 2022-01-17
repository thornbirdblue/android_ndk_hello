#include <string.h>
#include <jni.h>

jstring Java_com_example_tb_MyActivity_stringFromJni(JNIEnv* env, jobject thiz) {
   return (*env)->NewStringUTF(env, "Hello World of NDK !");
}
