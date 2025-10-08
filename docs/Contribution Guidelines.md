# How to contribute (Contribution Guidelines)

<p>First there are some basic rules that you have to follow but in a nutshell we will try to be disorganized in an organized manner.</p>

  

<ul>

    <li>Branches: Since everyone can bring contributions we want to avoid collisions. Use branches and pull requests when merging on master and not work on the master branch and have a branch for each feature.</li>

    <li>Modules:  Let's split the engine into individual modules so it is easier to work in parallel.</li>

    <li>Keep things hand-made: It would be easy to add a library that prints and formats logs to the console but why do that when a beginner would love to implement that task. Let's try to implement as many things by hand as we can and use libraries only for difficult stuff. And even for difficult stuff you can pair program with a more experienced programmer and maybe in the end we will not be using any libraries!</li>

    <li>Let's write new things: You might have your own libraries, I already have mine but let's have fun and re-write things from scratch.</li>

    <li>Cross-Platform: let's try to make the engine work both on Windows and Linux, if you have a feature that could only work on Windows that is ok as long as you make sure that it still compiles on Linux (have some macros that disable your feature on Linux). The same goes for Linux specific features.</li>

</ul>

  

<hr>

  

## Modules

<ul>

    <li>There is a module example in the repo as a template.</li>

    <li>You can access other modules (by linking to them in the CMake) but this gives us the problem that people now have to maintain compatibility with every other module linked to them. To keep things simple if you want to access another module just message on discord someone that works on that module to talk about the feature that you want to add to see if there are problems that might appear.</li>

    <li>If you are a major contributor to a module you should add a discord contact in the README file of that module so that people can contact you on discord.</li>

</ul>

  

<hr>

  

## Tips

<blockquote>

Document your changes in the README.md file of the module that you are working on.

</blockquote>

  

<blockquote>

Don't feature hate speech in your code.

</blockquote>

  

<blockquote>

<p>Following the style guidelines will make it easier to read your code.</p>

</blockquote>

  

<blockquote>

<p>Use namespaces for modules.</p>

</blockquote>

  

<blockquote>

<p>Try to use comments where necessary.<br>Don't use comments in places where they are not needed.</p>

</blockquote>

  

<blockquote>

<p>Try to have a clean API when designing your modules.<br>A clean api is an api that doesn't let the user do something that can fail, and comment how your functions are supposed to be used if it is not self evident.</p>

</blockquote>

  

<blockquote>

<p>Don't have too of an OOP (Object-Oriented-Programming) approach, we will try to have a data oriented design. You can use some encapsulation when designing the modules api.<br>Data oriented design example: the window will have an input struct that is just plain old data that can be passed to the gameplay or any other system that needs some information about input.</p>

</blockquote>

  

<blockquote>

<p>Don't use polymorphism and don't abuse heap allocations.</p>

</blockquote>

  

<blockquote>

<p>Don't use exceptions or RTTI!</p>

</blockquote>

  

<blockquote>

<p>Modules that need to allocate memory should have a create function rather than a constructor and a cleanup function that will be called by hand. Implementing a RAII class like a std::vector can have too many pitfalls so let's keep things simple</p>

</blockquote>

  

<blockquote>

<p>More information in the module example</p>

</blockquote>

  
  

## Style Guidelines

### Parenthesis

  

```cpp

void main() {

    if(stuff) {

  

    }

}

```

  

### camelCase

  

```cpp

int variable;

void function();

struct MyStruct();

void MyStruct::myMethod();

```

  

<hr>

  

# Running the engine

  

### Opening the Solution

  

<img src="enter gif here in raw format" width="350">

  

Or

  

<img src="enter gif here in raw format" width="500">

  

Running the engine

  

Go to CMakeLists.txt, <kbd>CTRL + S</kbd>

  

<img src="https://raw.githubusercontent.com/meemknight/photos/master/llge3.gif" width="200">

  

<kbd>Ctrl + F5</kbd>

  
  

### Refreshing your changes:

Close Visual Studio, delete the out folder, reopen VS, <kbd>CTRL + S</kbd> on CMakeLists.txt</p>

  

### Adding a module:

  

<img src="https://raw.githubusercontent.com/meemknight/photos/master/llge4.gif" width="600">

  

<u>Don't forget to make a branch for it!</u>