# git学习
1. `git init`   
   初始化
2. `git add .`   
   将该目录下所有文件加入本地缓存区
3. `git status`  
   查看状态
4. `git commit -m "注释"`
5. `git remote add origin https://github.com/....`  
   将本地历史区中的文件添加到github服务器的暂存区中
6. `git pull origin master`  
   如果出现错误，用`git pull originmaster--allow-unrelated-histories`
7. `git push -u origin master`  
   向github提交