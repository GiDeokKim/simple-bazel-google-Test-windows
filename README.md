# Simple Bazel Google Test Setup on Windows

This repository provides a simple setup for building and running Google Test (gtest) using Bazel on Windows.

## Prerequisites

Before you begin, ensure you have the following installed:

- [Bazel](https://bazel.build/)
- [Visual Studio](https://visualstudio.microsoft.com/) with C++ tools

## Getting Started

Follow these steps to set up and run Google Test using Bazel:

1. **Clone the repository**:
    ```sh
    git clone https://github.com/GiDeokKim/simple-bazel-google-Test-windows.git
    cd simple-bazel-google-test-windows
    ```

2. **Build the sample code**:

    To build the project, use the following Bazel command:

    ```sh
    bazel build srcs:my_library
    ```

    ### Explanation
    The command bazel build `srcs:my_library` is used to compile and build the target `my_library` located in the srcs package. Here's a breakdown of the command:

    - `bazel build`: This is the Bazel command to build specified targets. Bazel analyzes the build files, resolves dependencies, and compiles the code.
    - `srcs:my_library`: This specifies the target to be built.
        - `srcs` is the package directory where the target is defined.
        - `my_library` is the name of the build target defined in the `BUILD`(or `BUILD.bazel`) file within the srcs directory.

    ### Steps to Build
    1. `Navigate to the Project Directory`: Ensure you are in the root directory of your project where the `WORKSPACE`(or `WORKSPACE.bazel`) file is located.
    2. `Run the Build Command`: Execute the build command in the terminal:
        ```sh
        bazel build srcs:my_library
        ```
    3. `Output`: Bazel will compile the source files and place the output binaries in the `bazel-bin/srcs` directory by default. You can find the compiled library named `my_library.lib` in this directory.

    ### Additional Information
    - Ensure that the `BUILD` file in the `srcs` directory correctly defines the my_library target with its source files and dependencies.
    - You can use `bazel build //...` to build all targets in the workspace.
    - To clean the build outputs, use `bazel clean`.
    
    For more details on Bazel commands and build configurations, refer to the [Bazel Documentation](https://bazel.build/docs).

3. **Running Tests with Bazel**:

    To run tests in the project, use the following Bazel command:

    ```sh
    bazel test tests:my_test
    ```

    ### Explanation
    The command `bazel test tests:my_test` is used to execute the test target `my_test` located in the tests package. Here's a breakdown of the command:
    - `bazel test`: This is the Bazel command to run specified test targets. Bazel builds the test binaries and then executes them, reporting the results.
    - `tests:my_test`: This specifies the test target to be executed.
        - `tests` is the package directory where the test target is defined.
        - `my_test` is the name of the test target defined in the `BUILD` file within the `tests` directory.

    ### Steps to Run Tests
    1. `Navigate to the Project Directory`: Ensure you are in the root directory of your project where the `WORKSPACE` file is located.
    2. `Run the Test Command`: Execute the test command in the terminal:
        ```sh
        bazel test tests:my_test
        ```
    3. `Output`: Bazel will compile the test source files, execute the test binary, and report the test results. The results will be displayed in the terminal, and detailed logs can be found in the `bazel-testlogs/tests` directory.

    ### Additional Information
    - Ensure that the `BUILD` file in the `tests` directory correctly defines the my_test target with its source files and dependencies.
    - You can use `bazel test //...` to run all tests in the workspace.
    - To view detailed test logs, you can navigate to the `bazel-testlogs/tests` directory.