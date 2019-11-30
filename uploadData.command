cd `dirname $0`
git pull origin master
git add -A
git commit -m "Auto update"
git push origin master
