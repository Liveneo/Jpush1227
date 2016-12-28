# Jpush1227

1、新建工程，上传项目到github，并创建license文件

2、打开终端 CD到当前项目根目录下，在此目录下初始化一个Podspec文件

$pod spec create XXXX

3、编辑该文件，将相关项目的配置信息进行编辑

$vim XXXX.podspec

然后使用linux命令，i进入编辑状态 esc退出编辑状态 shift+Z+Z 保存

4、验证内容是否正确，不能有任何warning和error

$pod spec lint XXXX.podspec

5、创建tag，并上传

$git tag '0.0.1'

$git push --tags

6、注册trunk

$pod trunk register msy_gaoyang@163.com 'gaoyang5' --description='演示'

7、查看信息是否注册成功

$pod trunk me

8、提交到cocoapods。此步骤可能会报错，不影响使用

$pod trunk push XXXX.podspec
