/**
 * Cho một dãy số nguyên a
 * Tìm độ dài của dãy con tăng liên tiếp dài nhất
 * Ví dụ: a = [6, 7, 4, 2, 1, 4, 3]
 * 
 * b[k]: độ dài của dài con giảm liên tiếp dài nhất, kết thúc tại k
 * b[k] = b[k - 1] + 1 nếu a[k] < a[k - 1]
 * b[k] = 1 nếu ngược lại
 * 
 * b[0] = 1
 * b[1] = 1
 * b[2] = 2
 * b[3] = 3
 * b[4] = 4
 * b[5] = 1
 * b[6] = 2
 */