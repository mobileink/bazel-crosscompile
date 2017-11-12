#!/bin/sh


javah -cp src/main/android/java -d src/main/android/jni org.example.hello.HelloApi
javah -cp src/main/android/java -d src/main/android/jni org.example.hello.GoodbyeApi
