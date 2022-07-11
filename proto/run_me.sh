#创建目录
file_path="./proto"
if [[ ! -d "$file_path" ]]; then
 echo "mkdir $file_path"
 mkdir "$file_path"
fi

for file in $file_path/*.proto; do
echo $file
protoc -I=$file_path --cpp_out=$file_path $file
done
