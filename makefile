include config.mk
all:
#-C指定目录
#make -C signal

#可执行文件应该放在最后
# make -C app

# 用shell命令的for搞，shell里面的变量用两个$
	@for dir in $(BUILD_DIR);\
	do \
		make -C $$dir;\
	done

clean:
# -rf : 删除文件夹，强制删除
	rm -rf app/link_obj app/dep GraphTheory
	