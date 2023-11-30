// Mã nguồn cho công thức đạo hàm thương
double DaoHamThuong(Function* f, Function* g, double x){
		if (g != NULL) {
			return (f->Derive()*g->Value()-f->Value()*g->Derive())/(g->Value()*g->Value())
		}
		return 0;
	}
}
//Mã nguồn cho công thức đạo hàm hợp
double DaoHamCuaHamHop(Function* f, Function* g, double x){
		if (f != NULL && g != NULL){
			return f->Derive(g->Value())*g->Derive();
		}
		return 0;
	}