# <center>*Git 常用指令*
<style>
table td:nth-child(1) {
    white-space: nowrap; 
}
</style>
|指令|功能|
|---|---|
|==git init==| 初始化一个git 仓库
|==git add== |将修改加入暂存区
|==git commit -m < message >==|将修改从暂存区提交到分支
|==git status==|查看当前的修改与待提交状态
|==cd==| 更改工作区目录
|==cat==| 查看某一文件内容
|==ls==|显示当前文件夹下的文件目录
|==git diff HEAD -- file== | 查看工作区和版本库里面最新版本的区别
|==git restore --file==|放弃本次工作区中的修改，让这个文件回到最近一次  git add 或者 git add 的内容，实际是用版本库里的版本替换工作区的版本
|==git reset HEAD < file >==|放弃本次暂存区中的修改
|==git rm==|用于删除一个文件
|==touch==| 新建文件
|==pwd==|查看当前工作区目录
|==git remote add origin < SSH >==|添加远程库（SSH由GitHub仓库提供）,远程库名叫origin，也可以叫其他
|==git push -u origin master==|本地库的内容推送到远程库实际上是把当前分支master推送到远程库origin，第一次推送master分支的所有内容|
|==git push origin master==|单次本地提交
|==git clone < SSH >==|克隆一个远程仓库
|==git branch==|查看所有分支（*为当前分支）
|==git branch < name >==|创建新分支
|==git switch < name >==|切换至某一分支
|==git switch -c < name >==| 创建+切换分支
|==git merge < name >==|合并某一分支到当前分支
|==git branch -d< name >==|删除某一分支