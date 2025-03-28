#!/bin/csh

# Kiểm tra xem tham số đầu vào có được cung cấp hay không
if ($#argv != 1) then
    echo "Usage: $0 <file>"
    exit 1
endif

# Gán tham số đầu vào vào biến file
set file = $argv[1]

# Kiểm tra xem tệp tin có tồn tại hay không
if (! -f $file) then
    echo "File not found!"
    exit 1
endif

# Đọc tệp tin và in ra từng dòng với định dạng mong muốn
set line_number = 1
foreach line ("`cat $file`")
    echo "dòng $line_number: $line"
    @ line_number++
end
