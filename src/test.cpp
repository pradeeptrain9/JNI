#include<jni.h>
#include<stdio.h>
#include <windows.h>
#include "test.h"


JNIEXPORT jdouble JNICALL
Java_test_multiply(JNIEnv *env, jobject obj, jdouble a, jdouble b)
{
 printf("Hello world");
 return a*b;
}
