# android-hidl-demo
# 系统修改
weiqifa@bsp-ubuntu1804:~/mt8167s-9.0-sdk$ git status .
On branch ruying-dev
Your branch is up to date with 'origin/romdev-001'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   build/make/target/product/vndk/28.txt
        modified:   build/make/target/product/vndk/current.txt
        modified:   device/mediatek/mt8167/manifest.xml

Untracked files:
  (use "git add <file>..." to include in what will be committed)

        hardware/interfaces/naruto/


It took 3.09 seconds to enumerate untracked files. 'status -uno'
may speed it up, but you have to be careful not to forget to add
new files yourself (see 'git help status').
no changes added to commit (use "git add" and/or "git commit -a")
weiqifa@bsp-ubuntu1804:~/mt8167s-9.0-sdk$ git diff
diff --git a/build/make/target/product/vndk/28.txt b/build/make/target/product/vndk/28.txt
old mode 100644
diff --git a/build/make/target/product/vndk/28.txt b/build/make/target/product/vndk/28.txt
old mode 100644
new mode 100755
index 712e91c587..82b4f53a7e
--- a/build/make/target/product/vndk/28.txt
+++ b/build/make/target/product/vndk/28.txt
@@ -106,6 +106,7 @@ VNDK-core: android.hardware.media.bufferpool@1.0.so
 VNDK-core: android.hardware.media.omx@1.0.so
 VNDK-core: android.hardware.media@1.0.so
 VNDK-core: android.hardware.memtrack@1.0.so
+VNDK-core: android.hardware.naruto@1.0.so
 VNDK-core: android.hardware.neuralnetworks@1.0.so
 VNDK-core: android.hardware.neuralnetworks@1.1.so
 VNDK-core: android.hardware.nfc@1.0.so
diff --git a/build/make/target/product/vndk/current.txt b/build/make/target/product/vndk/current.txt
old mode 100644
new mode 100755
index 712e91c587..82b4f53a7e
--- a/build/make/target/product/vndk/current.txt
+++ b/build/make/target/product/vndk/current.txt
@@ -106,6 +106,7 @@ VNDK-core: android.hardware.media.bufferpool@1.0.so
 VNDK-core: android.hardware.media.omx@1.0.so
 VNDK-core: android.hardware.media@1.0.so
 VNDK-core: android.hardware.memtrack@1.0.so
+VNDK-core: android.hardware.naruto@1.0.so
 VNDK-core: android.hardware.neuralnetworks@1.0.so
 VNDK-core: android.hardware.neuralnetworks@1.1.so
 VNDK-core: android.hardware.nfc@1.0.so
diff --git a/device/mediatek/mt8167/manifest.xml b/device/mediatek/mt8167/manifest.xml
index 2ae425901b..0bef90c30e 100644
--- a/device/mediatek/mt8167/manifest.xml
+++ b/device/mediatek/mt8167/manifest.xml
@@ -29,6 +29,16 @@
             <instance>default</instance>
         </interface>
     </hal>
+
+<hal format="hidl">
+    <name>android.hardware.naruto</name>
+    <transport>hwbinder</transport>
+    <version>1.0</version>
+    <interface>
+        <name>INaruto</name>
+        <instance>default</instance>
+    </interface>
+</hal>
     <hal format="hidl">
         <name>android.hardware.light</name>
         <transport>hwbinder</transport>
weiqifa@bsp-ubuntu1804:~/mt8167s-9.0-sdk$ tree hardware/interfaces/naruto/
hardware/interfaces/naruto/
└── 1.0
    ├── Android.bp
    ├── default
    │   ├── Android.bp
    │   ├── android.hardware.naruto@1.0-service.rc
    │   ├── Naruto.cpp
    │   ├── Naruto.h
    │   └── service.cpp
    ├── INaruto.hal
    └── test
        ├── Android.mk
        └── client.cpp

3 directories, 9 files
weiqifa@bsp-ubuntu1804:~/mt8167s-9.0-sdk$
