#pragma once

namespace std{
	template <class T> class EasyList{
	private:
		template <class T2> class EasyElement;
		EasyElement<T> * headElement;
		EasyElement<T> * currentElement;
		template <class T2>	class EasyElement{
		private:
			T2 pInfo;
			EasyElement<T2> * pPrevious;
			EasyElement<T2> * pNext;
		public:
			EasyElement();
			~EasyElement();
			void setInfo(T2);
			void setPrevious(EasyElement<T2>*);
			void setNext(EasyElement<T2>*);
			T2 getInfo();
			EasyElement<T2>* getPrevious();
			EasyElement<T2>* getNext();
		};

	public:
		EasyList();
		~EasyList();
		void add(T);
		void remove(T);
		T get(int);
	};
};

template <class T> template <class T2> std::EasyList<T>::EasyElement<T2>::EasyElement(){
	pInfo = nullptr;
	pPrevious = nullptr;
	pNext = nullptr;
};

template <class T> template <class T2> std::EasyList<T>::EasyElement<T2>::~EasyElement(){
	pInfo = nullptr;
	pPrevious = nullptr;
	pNext = nullptr;
};

template <class T> template <class T2> void std::EasyList<T>::EasyElement<T2>::setInfo(T2 info){
	pInfo = info;
};

template <class T> template <class T2> void std::EasyList<T>::EasyElement<T2>::setPrevious(EasyElement<T2>* previous){
	pPrevious = previous;
};

template <class T> template <class T2> void std::EasyList<T>::EasyElement<T2>::setNext(EasyElement<T2>* next){
	pNext = next;
};

template <class T> template <class T2> T2 std::EasyList<T>::EasyElement<T2>::getInfo(){
	return pInfo;
};

template <class T> template <class T2> typename std::EasyList<T>::EasyElement<T2>* std::EasyList<T>::EasyElement<T2>::getPrevious(){
	return pPrevious;
};

template <class T> template <class T2> typename std::EasyList<T>::EasyElement<T2>* std::EasyList<T>::EasyElement<T2>::getNext(){
	return pNext;
};

template <class T> std::EasyList<T>::EasyList(){
	headElement = nullptr;
	currentElement = nullptr;
};

template <class T> std::EasyList<T>::~EasyList(){
	std::EasyList<T>::EasyElement<T>* pAux;
	while (headElement != nullptr){
		pAux = headElement->getNext();
		delete headElement;
		headElement = pAux;
	}
	headElement = nullptr;
	currentElement = nullptr;
};

template <class T> void std::EasyList<T>::add(T item){
	std::EasyList<T>::EasyElement<T>* newElement = new std::EasyList<T>::EasyElement<T>();
	newElement->setInfo(item);
	if (headElement == nullptr){		
		headElement = newElement;
		currentElement = newElement;
	}
	else{
		newElement->setPrevious(currentElement);
		currentElement->setNext(newElement);
		currentElement = newElement;
	}
};

template <class T> void std::EasyList<T>::remove(T item){
	std::EasyList<T>::EasyElement<T>* pAux = headElement;
	while (pAux != nullptr){
		if (pAux->getInfo() == item){
			if (pAux->getPrevious() != nullptr){
				pAux->getPrevious()->setNext(pAux->getNext());
			}
			if (pAux->getNext() != nullptr){
				pAux->getNext()->setPrevious(pAux->getPrevious());
			}
			delete pAux;
			pAux = nullptr;
		}
		if (pAux != nullptr){
			pAux = pAux->getNext();
		}
	}
};

template <class T> T std::EasyList<T>::get(int index){
	std::EasyList<T>::EasyElement<T>* pAux = headElement;
	int count = 0;
	while (count < index || pAux == nullptr){
		count++;
		pAux = pAux->getNext();
	}
	return (pAux == nullptr ? nullptr : pAux->getInfo());
}