<details>
<summary>MACROS</summary>
  
- Marco là 1 tên bất kì (do lập trình viên đặt tên) trỏ tới 1 khối lệnh thực hiện một chức năng nào đó.
- Trong quá trình tiền xử lí (pre-processor), các macro được sử dụng trong chương trình được thay thế bởi các khối câu lệnh tương ứng.
  1. Khi ta sử dụng chỉ thị #include, nội dung chứa trong header file sẽ được sao chép vào file hiện tại. Khi include sử dụng dấu ngoặc nhọn < > thì preprocessor sẽ được dẫn tới Include Directory của Compiler.
     
     #include <file>
  
  2. Một Macro có thể coi là một loại viết tắt. Trước khi sử dụng một macro, phải định nghĩa nó rõ ràng bằng chỉ thị #define, cấu trúc như ví dụ sau: 
  
     #define MAX 10
  
 </details>
 
<details>
<summary>COMPILER</summary>
Quy trình dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao sang ngôn ngữ máy để máy tính có thể hiểu và thực thi. Ngôn ngữ lập trình C là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:
  
- Giai đoàn tiền xử lý (Pre-processor)
- Giai đoạn dịch ngôn ngữ bậc cao sang Asembly (Compiler)
- Giai đoạn dịch Asembly sang ngôn ngữ máy (Asember)
- Giai đoạn liên kết (Linker)
  
  ![Screenshot 2023-06-11 115314](https://github.com/anhkhoa15159357/EmbeddedT6/assets/136165537/4351c0fe-bc92-4ac5-8ba7-5d3851494c43)
  
  CHI TIẾT TỪNG QUÁ TRÌNH
  
    1. Giai đoàn tiền xử lý (Pre-processor)
  - file (.c .h .hpp .cpp) --> file (.i) (preprocessed source)
  - Nhận mã nguồn, các thư viện được include trong main.c được thêm vào, xóa bỏ comment
  - Cú pháp: gcc -E main.c -o main.i
  
    2. Giai đoạn dịch ngôn ngữ bậc cao sang Asembly (Compiler)
  - file (.i) --> (.s) (Assembly code)
  - Dich ngôn ngữ bậc cao sang ngôn ngữ Assembly (một ngôn ngữ bậc thấp gần với tập lệnh của bộ vi xử lý) và mỗi vi điều khiển sẽ có cách code Assembly khác nhau.
  - Cú pháp: gcc main.i -S -o main.s
  
  3. Giai đoạn dịch asembly sang ngôn ngữ máy (Asember)
  - file (.s) --> (.o/ .obj)
  - Dịch chương trình sang mã máy (0 & 1), tạo ra các file hệ thống 
  - Cú pháp: gcc -c main.s -o main.o
  
  4. Giai đoạn liên kết (Linker)
  - file (.o) --> (.exe) (executable)
  - Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích duy nhất
  
