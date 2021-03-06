include $(Rul)
basic:
	cd $(Src)/Log/src/ && make all
	cd $(Src)/Array/src && make all
	cd $(Src)/Algorithm/List/src/ && make all
	cd $(Src)/Algorithm/FixedLengthList/src/ && make all 
	cd $(Src)/Algorithm/KMP/src/ && make all 
	cd $(Src)/Algorithm/Heap/src/ && make all 

basic_app:
	cd $(Src)/Algorithm/Stack/src/ && make all 
	cd $(Src)/Algorithm/Queue/src/ && make all 
	cd $(Src)/Algorithm/BinaryTree/src/ && make all 
	cd $(Src)/Algorithm/BST/src/ && make all 
	cd $(Src)/Algorithm/Heap/src/ && make all 

app:

clean:
	cd $(Src)/Log/src/ && make clean
	cd $(Src)/Algorithm/List/src/ && make clean
	cd $(Src)/Algorithm/FixedLengthList/src/ && make clean
	cd $(Src)/Algorithm/Stack/src/ && make clean
	cd $(Src)/Algorithm/Queue/src/ && make clean
	cd $(Src)/Algorithm/BinaryTree/src && make clean 
	cd $(Src)/Algorithm/BST/src && make clean 
	cd $(Src)/Algorithm/Heap/src/ && make clean 



