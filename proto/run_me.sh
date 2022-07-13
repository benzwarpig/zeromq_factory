#创建目录
file_path="./proto"
if [[ ! -d "$file_path" ]]; then
 echo "mkdir $file_path"
 mkdir "$file_path"
fi

proto_source_path="./proto_source"
if [[ ! -d "$proto_source_path" ]]; then
 echo "mkdir $proto_source_path"
 mkdir "$proto_source_path"
fi

for file in $file_path/*.proto; do
echo $file
protoc -I=$file_path --cpp_out=$proto_source_path $file
done
