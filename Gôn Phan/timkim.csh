#!/bin/csh

# Đặt tên tệp
set filea = "c.log"

# Đặt biến n để bắt đầu từ dòng 1
set n = 1
set r = 0

set s = "report_config_data"
set p = "command "
set c = 0 #dat co 
set data = ""

# Lặp để đọc từng dòng đến cuối tệp
while (1)
    # Đọc dòng thứ n
    set line = `sed -n "${n}p" $filea`

    # Kiểm tra nếu dòng đã đọc rỗng (nghĩa là hết tệp)
    if ("$line" == "") then
        @ r++  # Tăng biến r nếu gặp dòng rỗng
    else
        @ r = 0  # Reset biến r nếu không gặp dòng rỗng
    endif
    
    if ($r > 100) then  # Nếu có quá nhiều dòng rỗng, thoát khỏi vòng lặp
        break
    endif

    # Kiểm tra và xử lý nội dung dòng
    if ("$line" != "") then

        echo "$line" | grep -q "$s"
        if ($status == 0) then
            #echo "$line"
            set c = 1
             if ("$data" != "") then
                    echo "luu"
                    echo "$data"
                    set data = ""  # Xóa dữ liệu đã lưu
                
                endif
        else
            echo "$line" | grep -q "$p"
            if ($status == 0) then
                if ("$data" != "") then
                    echo "luu"
                    echo "$data"
                    set data = ""  # Xóa dữ liệu đã lưu
                    set c = 0  # Đặt c về 0 để dừng cộng dồn
                endif
            else
	        if ($c == 1) then
		    # Sử dụng lệnh echo để nối các dòng lại với nhau, đảm bảo dấu xuống dòng
		    set data = `echo "$data\n$line"`
		endif
        
            endif
        endif
    endif

    # Tăng biến n lên 1 để đọc dòng tiếp theo
    @ n++
end

echo "Đã đọc hết tệp."

