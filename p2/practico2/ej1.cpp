struct nodo {
	int elem;
	nodo *sig;
};
typedef nodo *lista;

int last(lista lst) {
	lista loc = lst;
	while (loc->sig != NULL) loc = loc->sig;
	return loc->elem;
};

float average(lista lst) {
	lista loc = lst;
	int suma = 0;
	int cont = 0;
	while (loc != NULL) {
		suma += loc->elem;
		loc = loc->sig;
		cont++;
	}
	return suma / cont;
};

void insert(int x, lista &lst) {
	lista loc = lst;
	while (loc->sig != NULL && loc->sig->elem < x) {
		loc = loc->sig;
	}
	lista loc1 = new nodo;
	loc1->elem = x;
	loc1->sig = loc->sig;
	loc->sig = loc1;
}

void snoc(int x, lista &lst) {
	lista loc = lst;
	while (loc->sig != NULL) loc = loc->sig;
	localizador loc1 = new nodo;
	loc->sig = loc1;
	loc1->elem = x;
	loc1->sig = NULL;
}

void remove(int x, lista) {
	lista loc = lst;
	lista loc1;
	while (loc->sig != NULL) {
		if (loc->sig->elem = x) {
			loc1 = loc->sig;
			loc->sig = loc->sig->sig;
			delete loc1;
		}
		loc = loc->sig;
	}
	if (lst->elem == x) {
		loc1 = lst;
		lst = lst->sig;
		delete loc1;
	}
}
// 1, 2, 3, 3, 4 -> p
// 3, 4 -> l

// 1, 3, 1, 2, 4 -> p
// 1, 2 -> l

bool isIncluded1(lista l, lista p) {
	if (l == NULL) return true;
	if (l != NULL && p == NULL) return false;
	bool flag = false;
	lista locL, locPf = p, locPm;
	while (locPf->sig != NULL && !flag) {
		locL = l;
		locPm = locPf;/* p */
		while (!flag && locPm->elem == locL->elem) {
			if (locL->sig == NULL) flag = true;
			locL = locL->sig;
			locPm = locPm->sig;
		};
		locPf = locPf->sig;
	};
	return flag;
}

bool isIncluded2(lista l, lista p) {
	if (l == NULL) return true;
	if (l != NULL && p == nu) return false;
	lista locP = p;
	while(locP != null){
		locL = l;
		if(locP == locL){
			lista locP2 = locP;
			while(locP2->sig == locL->sig){
				locP2 = locP2->sig;
				locL = locL->sig;
			}
			if(locL->sig == null) return true;
			else locP = locP->sig;
		}
	}
}
