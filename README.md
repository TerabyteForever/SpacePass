# SpacePass
A password "engine" for C++ developers to use in their apps.

Currently, It can encrypt and decrypt a very basic algorithm. Adding Base64 support is on my TODO list.

# Cross platform support

SpacePass is a cross-platform engine. It can run on any operating system that supports C++ Standard Library.


# Let's talk about some capabilities of the SpacePass engine!
```cpp
 SpacePass::BasicEncryption(char plaintext[], bool writeToFile);
```
With this function, you can encrypt the text that you've sent to engine with using the plaintext parameter. The "writeToFile" parameter is the switch to whether turn the "save-to-file" function on or off.

```cpp
 SpacePass::DecryptBasicEncryption(char text[]);
```

With this function, you can decrypt the text that you've sent to engine over the text parameter. It must be the same algorithm as before to encrypt it.

### SpacePass is licenced under the terms of MIT licence.
