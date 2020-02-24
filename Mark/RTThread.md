# <center>RTThread 学习笔记
## 1.RTThread文件目录结构
    +application    //用户应用代码
    ++-main.c
    +bulid
    +drivers //rtthread底层驱动代码
    +kernel_sample-0.1.0 //内核例程
    +Libraries   //stm32官方固件库
        ++-----CMSIS
        ++-----STM32HAL_Driver
    +rt-thread             //存放核心源码
        ++-components  //rtthread的外部组件
        +++--drivers  //设备驱动
        +++--finsh   //命令行工具
        ++-include     //rtthread内核头文件
        ++-libcpu      //各类芯片以及内核移植文件
        ++-src         //rtthread内核源代码
## 2.RTThread启动过程
    1.SubMain()：先关中断，再进入rtthread_startup()启动rtthread
    2.用户应用在rt_application_init()创建
    3.main_thread_entry()中调用了main
    4.\$Super\$\$main和\$Sub\$\$main是MDK中的拓展功能；
     \$Sub\$\$main实现了rtthread的内核启动，使得原本的main能够>用于编辑用户应用代码
## 3.线程的创建
    1.线程是系统的最基本调度单位，小任务的程序实体
    2.线程由“线程代码（入口函数）”，“线程控制块”，“线程堆栈”构成
        （1）线程代码：进行任务操作
        （2）线程控制块(结构体：rt_thread)：管理线程的数据结构，存放线程的相关信息
        （3）线程堆栈（一段连续的内存空间）：每个线程都有独立的栈空间，当进行线程切换时，系统会将线程的上下文保存在线程栈中，当线程回复运行时，再从线程栈中读取上下文，回复线程运行（类似中断时的出栈与入栈）
    3. 创建线程的两个API：
        (1)rt_thread_init();    //创建静态线程
            形参解析：thread(线程控制块)
                     name(线程命名)
                     （*entry)(void *parameter)(线程代码)
                     *parameter（线程代码的参数）
                     *stack_start(线程堆栈的起始地址)
                     stack_size(线程堆栈的空间大小)
                     priority(线程的优先级,数字越小，执行优先级越高)？？
                     tick(线程的时间片参数)？？
        (2)rt_thread_create();  //创建动态线程
            形参解析：name(命名)
                     （*entry)(void *parameter)(线程代码)
                     *parameter（线程代码的参数）
                     stack_size(线程堆栈的空间大小)
                     priority(线程的优先级,数字越小，执行优先级越高)
                     tick(线程的时间片参数)
        静态线程与动态线程的区别:
        动态在于没有规定堆栈的起始位置，使内存空间使用更加灵活
    4.启动线程
        rt_thread_startup();