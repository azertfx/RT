# RT


[![All Contributors](https://img.shields.io/badge/all_contributors-1-blue.svg?style=flat-square)](#contributors-)


<p align="center">
  <a href="https://en.wikipedia.org/wiki/Ray_tracing_(graphics)">
    <img alt="RT" src="https://www.numerama.com/content/uploads/2018/08/ballsrender.jpg" width="500" />
  </a>
</p>
<h1 align="center">
  Ray Tracing Using C
</h1>


## About
**RT** is a project i made it during my student years at 1337 School khouribga (one of 42 Network), This project is the first step to create a Raytracing program, for you to finally be able to render computer-generated images.

## Project Contents :

- [x] 01. Libft : C library regrouping usual functions that we’ll be allowed to use in all your other projects.
- [x] 02. minilibx
- [x] 03. Ray Tracing files + Parsing
- [x] 03. scenes


## ID of evey Shape (for parsing) :

| id | Shape |
| ------ | ------ |
| 1 | sphere |
| 2 | plane |
| 3 | cylinder |
| 4 | cone |
| 5 | cube |
| 6 | Torus (soon) |

## Parsing file format

```sh

Under the construction

```


**Camere**

```sh
camera <position> <look at> <field of view> 
```

**light**

```sh
light <position> <intensity> <color> 
```
**Sphere**

```sh
sphere <origin> <raduis> <color> <translation> <rotation>
```

**Plane**

```sh 
plane <origin> <color> <norme> <translation> <rotation> 
```
**Cylindre**

```sh
cylindre <origin> <raduis> <height> <axis> <color> <translation> <rotation>
```

**Cone**

```sh
cone <origin> <raduis> <height> <color> <axis vector> <translation> <rotation>
```

## Resources :

- **[KhanAcademy - Vectors & Spaces](https://www.khanacademy.org/math/linear-algebra/vectors-and-spaces)**
- **[Ray Tracing in One Weekend - PDF](https://www.realtimerendering.com/raytracing/Ray%20Tracing%20in%20a%20Weekend.pdf)**
- **[Ray Tracing in One Weekend - Website](https://raytracing.github.io/books/RayTracingInOneWeekend.html)**
- **[All about Ray Tracing - YouTube](https://youtu.be/Ahp6LDQnK4Y)**
- **[Images in minilibx](https://github.com/keuhdall/images_example)**
- **[Ray tracing Cone - Maths behind](http://www.illusioncatalyst.com/notes_files/mathematics/line_cone_intersection.php)**
- **[Raytracing shapes on hugi.scene.org](http://hugi.scene.org/online/hugi24/coding%20graphics%20chris%20dragan%20raytracing%20shapes.htm)**
- **[Scratchapixel : Introduction to Ray Tracing: a Simple Method for Creating 3D Images](https://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing)**
- **[Geogebra : Draw objects in 3D](https://www.geogebra.org/3d?lang=en)**
- **[Ray Tracing Tutorial - Youtube Playlist](https://www.youtube.com/playlist?list=PLAqGIYgEAxrUO6ODA0pnLkM2UOijerFPv)**



## Getting Started

### Compiling

Run the following commands:

* To compile
	- `make`
* To remove objects:
	- `make clean`
* To remove objects and binary file (program):
	- `make fclean`
* To re-compile:
	- `make re`

### Executing

To run the program:

`./rt [scene.xml]`

## Screenshots

### Screen1 
<img src="https://i.imgur.com/4of1CJQ.png" width="1000" />

### Screen2

<img src="https://i.imgur.com/1OHon4g.png" width="1000" />


## keys keyboards (Minilibx)

<img src="https://i.imgur.com/VIuTiO9.png" width="700" />

## I want to contribute to the project! But how?

 - Fork this repository
 - Clone your repository forked
 - Contribute
 - Push
 - Create a pull request in this repository
 - Wait the merged !
 - Be happy :)


