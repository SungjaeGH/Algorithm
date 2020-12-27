package list.arraylist.implementation;

public class ArrayList {
	// size =  몇 개의 data가 list에 들어 있는가
	private int size = 0;
	private Object[] elementData = new Object[100];

	// 0번째 list에 데이터 추가
		public boolean addFirst(Object element) {
			return add(0, element);
		}
	
	// 순차적으로 데이터 삽입
	public boolean addLast(Object element) {
		elementData[size] = element;
		size++;
		return true;
	}
	
	// list 사이에 데이터 삽입
	public boolean add(int index, Object element) {
		for(int i = size - 1; i >= index; i--) {
			elementData[i + 1] = elementData[i];
		}
		elementData[index] = element;
		size++;
		return true;
	}
}
