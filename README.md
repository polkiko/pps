# Programación para Sistemas
Repositorio para las clases de Programación para Sistemas (pps) de 2º de Ingeniería Informática de la UPM ([Guía docente 2019/2020](https://www.upm.es/comun_gauss/publico/guias/2019-20/1S/GA_10II_105000016_1S_2019-20.pdf))


## Puesta a punto
Una vez tengamos preparado [nuestro entorno de desarrollo](https://github.com/aherranz/pps/blob/master/2019-2020/00-ejercicios-presenta.pdf) (recomendado instalar Ubuntu 18.04 en tu máquina), vamos a intentar trabajar con Git y Github.

Para ello, debemos [descargarnos la última versión de Git](https://git-scm.com/downloads) para nuestro sistema operativo (si tienes linux git vendrá instalado por defecto)

### Tutorial básico de Git (en desarrollo)

Una vez tengamos correctamente instalado git, podemos comprobarlo introduciendo lo siguiente en nuestro terminal:

`git config --list`

A continuación, configuraremos nuestras variables locales de usuario y email:

`$ git config --global user.name tu_usuario`

`$ git config --global user.email tu@email.com`

El siguiente paso será clonar todo el contenido de este repositorio Git (Github) en nuestra carpeta local. Para ello, nos situamos en el directorio desde el cual queramos crear la carpeta que contendrá todo el repositorio (por ejemplo en `Desktop`) y a continuación insertamos el siguiente comando:

`$ git clone https://github.com/polkiko/pps.git nombre_carpeta`

Y entramos en nuestro proyecto:

`$ cd nombre_carpeta`

De esta manera tendremos directamente en nombre_carpeta todos los archivos del repositorio en nuestra máquina, pudiendo trabajar sobre ellos si queremos.

### Nota
Si conoces más a fondo Git, puedes aportar cualquier mejora o ampliación de cualquiera de los ficheros. Para ello, puedes [ponerte en contacto conmigo](https://t.me/polkiko), y crearemos una rama con tu nombre para trabajar sobre ella (dejar la rama `master` libre siempre)
