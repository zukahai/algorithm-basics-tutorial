# Đổi thư mục làm việc tới thư mục chứa repo Git của bạn
Set-Location -Path "G:\algorithm-mastery-in-30-days/Khoá Học Thuật Toán T8-2024/12_kỳ_thi_giữa_khoá/"
# Set-Location -Path "G:\algorithm-mastery-in-30-days/Phạm Thành An/02_quy_hoạch_động_1/"

# Lấy danh sách tất cả các tệp tin chưa được theo dõi từ git status
$untracked_files = git ls-files --others --exclude-standard

# Danh sách các thông điệp commit phong phú
$commit_messages = @(
    "Initial commit for",
    "Added new functionality to",
    "Fixed issues in",
    "Updated implementation of",
    "Refactored code in",
    "Improved performance in",
    "Optimized algorithms in",
    "Enhanced user experience for",
    "Added tests for",
    "Removed deprecated code from",
    "Documented changes in",
    "Reorganized project structure with",
    "Improved error handling in",
    "Updated dependencies for",
    "Fixed typos in",
    "Code cleanup for",
    "Improved readability of",
    "Added comments to",
    "Revised implementation of",
    "Resolved bugs in"
)

foreach ($file in $untracked_files) {
    if ($file -ne "") {
        try {
            # Chuyển đổi dấu gạch chéo thành gạch chéo ngược
            $valid_file = $file -replace '^.*09_functional', '09_functional'

            Write-Output "Processing file: $valid_file"

            # Chọn ngẫu nhiên một thông điệp commit từ danh sách
            $random_commit_message = $commit_messages | Get-Random

            # Thêm từng tệp vào staging area
            git add "$valid_file"
            
            # Commit từng tệp với thông điệp commit ngẫu nhiên ghép với tên tệp
            git commit -m "$random_commit_message $valid_file"
            
            # Đẩy commit lên remote repository
            git push
        } catch {
            Write-Output "Error processing file: $file"
        }
    }
}
