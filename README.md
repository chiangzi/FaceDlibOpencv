# FaceDlibOpencv
本项目基于 [OpenCV](https://opencv.org) 和 [Dlib](http://dlib.net) 的图片、视频人脸检测和人脸识别

## 版本
* [OpenCV 3.4.1](https://opencv.org/opencv-3-4-1.html) 的 Android SDK
* [Dlib 19.10](http://dlib.net/files/dlib-19.10.tar.bz2)

## 说明
* 算法模型存放在SD卡的```model```文件夹下，可以通过修改```com.zzwtec.facedlibopencv.Constants```
* 人脸库存放在SD卡的```faces```文件夹下，可以通过修改```com.zzwtec.facedlibopencv.Constants```
* 目前 OpenCV 只是用于摄像头的管理和显示，人脸检测、特征标记、识别都是使用 Dlib