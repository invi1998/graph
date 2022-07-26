# 定义项目编译的根目录，通过export把某个变量声明为全局变量（其他文件可以使用）这里获取当前这个文件所在的的路径作为根路径
export BUILD_ROOT = $(shell pwd)

# 定义头文件所在的路径变量
export INCLUDE_PATH = $(BUILD_ROOT)/include

# 定义我们需要编译的目录
BUILD_DIR = $(BUILD_ROOT)/graph/\
			$(BUILD_ROOT)/app/

# 编译时是否生成调试信息。GNU调试器可以利用该信息
# 很多调试工具，包括valgrind工具集也都会因为这个true能够输出更多的调试信息
export DEBUG = true