#!/bin/csh

# Đặt tên tệp
set filea = "c.log"

# Đặt biến n để bắt đầu từ dòng 1
set n = 1
set r = 0
set report_config_data = "report_config_data"
set comman = "command "
set c = 0 #dat co 
set data = ""
set file_name = "gon_lu"
set file_index = 1

# Lặp để đọc từng dòng đến cuối tệp
while (1)
    # Đọc dòng thứ n
    set line = `sed -n "${n}p" $filea`
    if ("$line" == "") then # Kiểm tra nếu dòng đã đọc rỗng (nghĩa là hết tệp)
        @ r++  # Tăng biến r nếu gặp dòng rỗng
    else
        @ r = 0  # Reset biến r nếu không gặp dòng rỗng
    endif

    if ($r > 100) then  # Nếu có quá nhiều dòng rỗng, thoát khỏi vòng lặp
        break
    endif

    # Kiểm tra và xử lý nội dung dòng
    if ("$line" != "") then
        echo "$line" | grep -q "$comman"
        if ($status == 0) then
            if ("$data" != "") then
                echo "luu"
                echo "$data"
                
                set c = 0  # Đặt c về 0 để dừng cộng dồn
                # Lưu $data vào tệp file_name_file_index.txt
                echo "$data" >> ${file_name}_${file_index}.txt
                set data = ""  # Xóa dữ liệu đã lưu
                @ file_index++
                
            endif
        endif

        echo "$line" | grep -q "$report_config_data"
        if ($status == 0) then
            set c = 1
        endif
        
	    if ($c == 1) then
		    set data = "$data$line\n"  # Cộng dồn dữ liệu
		endif
    endif
    @ n++
end

echo "Kết thúc chương trình"