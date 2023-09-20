# Harmony
## Build Environment
To build the project, the wxWidgets library must be installed on the computer.
The only approach that has been tested is to compile the library from source using the MCVC++ toolchain.
The steps to do this are the following:
- Clone the wxWidgets repository to any directory <wx_install_dir>:
  ```
  git clone https://github.com/wxWidgets/wxWidgets --recurse-submodules
  ```
- The library can then be built in various ways. Still, the simplest on Windows is to launch any of the Visual Studio solutions located under <wx_install_dir>/build/msw corresponding to the version of VS currently installed.
- The solution can then be built from within the IDE for the wanted configuration and platform. To compile all, go to build->batch build and select all and build.
  > [!WARNING]
  > The build process may take up to 20 minutes to complete during which the system might slow down.
- The compiled libraries will then be installed under <wx_install_dir>/lib.
- Finally, one must add an environment variable called "WXWIN" which points to <wx_install_dir>.
Apart from installing the library, Cmake must also be installed (version 3.27.0 or higher).
## Building and running the project
After having set up the [build environment](##build-environment), the project can be built on the command line at the project's root by running
```
cmake -B build
```
to generate the build directory with a default generator. Regardless of the generator used, the project can be built by running
```
cmake --build build
```
The produced executable can then be found within the build directory, the location of which can depend on the generator used, build configuration, and target platform.
