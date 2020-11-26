from sklearn import tree

#bước 1: thu thập dữ liệu
#bước 2: Xử lý dữ liệu
#bước 3: Xây dựng model
#bước 4: Dự đoán kết quả
#Bước 5: đánh giá xem model có hiêu quả không ?
my_tree = tree.DecisionTreeClassifier()
dactrung = [[1, 3, 3, 7],
            [5, 2, 4, 6],
            [1, 2, 4, 6],
            [5, 4, 4, 3],
            [1, 4, 4, 7],
            [3, 2, 3, 7],
            [3, 3, 3, 6],
            [5, 2, 2, 7]
            ]

nhan = [0, 1, 1, 0, 0, 0, 0, 1]

result = my_tree.fit(dactrung, nhan)

kq = result.predict([[1, 4, 3, 6 ]])
print(kq)
