# X-TRACK 更新日志
> https://github.com/FASTSHIFT/X-TRACK

## [v0.1] - 2021-3-21
* 1.框架搭建完成，全新MPV架构
* 2.更新3D Model，门板完美安装
* 3.修复串口缓冲队列过载导致GPS解析连续失败的BUG
* 4.添加长按开机功能
* 5.添加计步显示
* 6.速度显示使用kph为单位
* 7.添加新的ButtonEvent库
* 8.添加Filters数字滤波器库 
* 9.添加新的TonePlayer库
* 10.格式化LIS3DMDL库的代码
* 11.格式化LISM6DSM库的代码
* 12.添加新的简易表盘页面
* 13.为LiveMap页面添加group，优化Encoder交互
* 14.LiveMap已可以正常显示航向，使用GPS的航向信息
* 15.重新校准MapConv地图坐标
* 16.添加HAL_AHRS姿态解算
* 17.添加HAL_Encoder接口
* 18.添加HAL_GPS串口透传，可使用上位机对GPS模块进行配置
* 19.添加GNSSToolKit_Lite配置工程
* 20.添加lv_get_indev()
* 21.添加__wfi()，可能省点电

## [v0.2] - 2021-4-19
* 1.添加ArtDesign工程，使用Adobe Illustrator
* 2.添加异步无锁Buffer库：PingPongBuffer
* 3.删除离线图片和字体转换工具
* 4.修改页面ID格式：DialplatePage->Pages/Dialplate
* 5.添加消息发布订阅框架：DataCenter
* 6.将HAL.h转移至应用层
* 7.HAL: Clock_GetValue->Clock_GetInfo
* 8.在PC模拟器上使用PC的电量显示
* 9.更新PageManager
* 10.降低SD热插拔监控扫描速度
* 11.删除Music_Astronomia
* 12.在编码器按下时忽略滚动，减少误触
* 13.更新Dialplate页面
* 14.更新LiveMap页面

## [v0.3] - 2021-5-12
* 1.lvgl迁移至v8.0.0
* 2.PingPongBuffer转移至App/Utils/DataCenter，以提供无锁的线程安全的数据块访问，添加volatile关键字
* 3.VS工程在Debug下启用AddressSanitizer，捕获异常的内存操作
* 4.Heap和Stack调整
* 5.更新ButtonEvent库
* 6.更换新的文件系统接口lv_fs_if
* 7.系统配置文件SysConfig.h -> Config.h
* 8.Utils添加WString for PC
* 9.ResourceManager更新，使用std::vector作为资源池
* 10.PageManager更新，lvgl-v8适配，简化子模块命名，使用std::vector作为页面池，使用std::stack作为页面栈
* 11.地图坐标转换器MapConv更新，但未找到更精确的地图坐标换算算法
* 12.去除lv_theme_custom
* 13.添加GPX库，将来用于生成GPX格式的标准轨迹记录文件
* 14.使用C++ template重写Filters滤波器合集库
* 15.数据发布订阅处理中心DataCenter更新，添加错误码、通知、数据提交等功能
* 16.StatusBar更新，添加背景色柔和渐变、电池充电等特效
* 17.LiveMap页面更新，新的滚动条和info按钮
* 18.Dialplate页面更新，操作按钮已可以使用
* 19.数据处理节点DP_SportStatus更新，更新卡路里换算算法、距离、速度滤波等处理方法
* 20.添加新的数据处理节点DP_Recorder，用于记录轨迹于SD卡中
* 21.电池AD采样使用中断模式，而不使用DMA
* 22.文件系统SD对象不再全局共享
* 23.屏蔽开机启动时Encoder按键事件

## [v0.4] - 2021-5-16
* 1.lvgl更新
* 2.支持导出GPX格式的轨迹记录文件，推荐使用[GPXSee](https://github.com/tumic0/GPXSee)查看轨迹
* 3.Clock_info_t结构体成员单词全拼
* 4.LiveMap页面更新，改进的操作方式与显示特效
* 5.去除MAP数据映射宏，使用lv_map替代
* 6.SD支持时间戳记录，支持自动检测和创建缺失的文件夹