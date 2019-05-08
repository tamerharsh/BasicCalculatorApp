This is a simple application of basic calculator which adds two numbers. The source code is tested using one of the UNIT TEST FRAME WORK called "gtest". Also, the complete application is created using build generator CMake.

Following step are be followed to run the application.

Explicitly setting the variables and cloing the repository.

    cd C:\

Clone the repository

    git clone https://github.com/tamerharsh/BasicCalculatorApp.git

Setting variables

    set  BasicCalculatorApp_BUILD_DIR="C:/BasicCalculatorApp"
    set CONFIG=RELEASE

Downloading googletest library
  
     cd  %BasicCalculatorApp_BUILD_DIR% 
     git clone https://github.com/google/googletest.git

Creating a build folder

     cd  %BasicCalculatorApp_BUILD_DIR%
     mkdir build  
     cd build 

Compling the application

    cmake -Ax64 -DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=ON -DBUILD_SDK_PKG=ON -DGTEST_CMAKE_DIR="%BasicCalculatorApp_BUILD_DIR%\googletest" -Dgtest_force_shared_crt=TRUE -DCMAKE_INSTALL_PREFIX="%BasicCalculatorApp%\install" ..

Building the application

    cmake --build . --clean-first --config %CONFIG% --target INSTALL

To run the application

    cd  %BasicCalculatorApp_BUILD_DIR%\install\bin_src 

and run the executable file 
     
     mylib.exe

  
To run the test

    cd  %BasicCalculatorApp_BUILD_DIR%\install\bin_test
 and run the executable file 
    
      unit_test.exe

