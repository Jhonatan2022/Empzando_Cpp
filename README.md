## C++ en Visual Studio Code

- [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)

* Instalamos [MSYS2](https://www.msys2.org/) para poder usar g++ en Visual Studio Code

1 Abrimos el Aplicativo

```sh
pacman -Syu # Actualizamos los paquetes
pacman -Su # Descargamos las actualizaciones

# Instalamos las herramientas de desarrollo
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

2. Agregaremos el path de g++, la dirección en este caso: `C:\msys64\mingw64\bin` Agregamos la dirección que ya copiamos.

![](Aprendiendo%20C++/img/path3.png)

```sh
# Comprobamos que g++ este instalado
pacman -Ss gcc
g++ --version # Comprobamos la versión
# Reiniciamos vscode
```

## Ejecutando Código

```sh
g++ nombe_archivo -o nombre_ejecutable

./nombre_ejecutable # Ejecutamos el archivo
```
