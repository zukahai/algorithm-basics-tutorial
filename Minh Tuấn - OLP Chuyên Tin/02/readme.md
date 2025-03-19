# Giờ cao điểm

Một nhà hàng mới khai trương, mỗi ngày nhà hàng tiếp rất nhiều khách hàng. Để thuận tiện thống kê, nhà hàng quyết định lưu lại thời gian mỗi khách hàng đến nhà hàng. Mỗi khách hàng sẽ có thời gian đến nhà hàng và thời gian trước khi rời nhà hàng. Nhà hàng muốn biết tại thời điểm nhà hàng đông nhất có bao nhiêu khách hàng.

Tìm số lượng khách hàng đông nhất tại một thời điểm đông nhất.

**Dữ liệu:**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sub>6</sub>), số lượng khách hàng.
- n dòng tiếp theo, mỗi dòng chứa 2 số nguyên a<sub>i</sub>, b<sub>i</sub> (0 ≤ a<sub>i</sub> ≤ b<sub>i</sub> ≤ 10<sup>18</sup>), thời gian khách hàng i đến và trước khi rời nhà hàng.

**Kết quả:**

- Số lượng khách hàng đông nhất tại một thời điểm đông nhất.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 5 <br> 1 9 <br> 2 4 <br> 3 5 <br> 4 6 <br> 5 7 | 4 |

**Giải thích:**

- Tại thời điểm 5, có 4 khách hàng đang ở nhà hàng. |

# Số cách đổi tiền

Một người có một số tiền lớn và muốn đổi số tiền này thành các tờ tiền nhỏ hơn. Người đó muốn biết có bao nhiêu cách để đổi số tiền đó. 

Cho một mảng a gồm n phần tử, mỗi phần tử a<sub>i</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>3</sup>) là mệnh giá của tờ tiền, các mệnh giá trong dãy khác nhau. Hãy đếm số cách để đổi số tiền thành các tờ tiền có mệnh giá trong mảng a.

**Dữ liệu:**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>2</sup>), số lượng mệnh giá tờ tiền.

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>3</sup>), mệnh giá của các tờ tiền.

- Dòng thứ ba chứa số nguyên m (1 ≤ m ≤ 10<sup>6</sup>), số tiền cần đổi.

**Kết quả:**

- Số cách để đổi số tiền thành các tờ tiền có mệnh giá trong mảng a.

**Ví dụ:**

| Input | Output |
| :--- | :--- |
| 3 <br> 1 2 5 <br> 5 | 4 |

**Giải thích:**

- Có 4 cách để đổi số tiền thành các tờ tiền có mệnh giá 1, 2, 5:

    - 1 tờ 5
    - 2 tờ 2, 1 tờ 1
    - 1 tờ 2, 3 tờ 1
    - 5 tờ 1
