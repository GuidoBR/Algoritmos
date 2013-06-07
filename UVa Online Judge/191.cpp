#include <iostream>

using namespace std;

typedef struct {int x, y;}Ponto;
typedef struct {Ponto p, q;}Segmento;

int max(int a, int b);
int min(int a, int b);
int SentidoPercurso(Ponto p1, Ponto p2, Ponto p3);
int Intercepta(Segmento s1, Segmento s2);
int PertenceQuadrado(Segmento s, int x1, int y1, int x2, int y2);

int main() {
    int n, x1, y1, x2, y2;
	Segmento s, l1, l2, l3, l4;
	
	cin >> n;
	while(n--) {
		cin >> s.p.x >> s.p.y >> s.q.x >> s.q.y >> x1 >> y1 >> x2 >> y2;
		//cima
		l1.p.x = x1;
		l1.p.y = y1;
		l1.q.x = x2;
		l1.q.y = y1;
		//baixo
		l2.p.x = x1;
		l2.p.y = y2;
		l2.q.x = x2;
		l2.q.y = y2;
		//esquerda
		l3.p.x = x1;
		l3.p.y = y1;
		l3.q.x = x1;
		l3.q.y = y2;
		//direita
		l4.p.x = x2;
		l4.p.y = y1;
		l4.q.x = x2;
		l4.q.y = y2;
		
		if (Intercepta(s, l1) || Intercepta(s, l2) || Intercepta(s, l3) || Intercepta(s, l4) || PertenceQuadrado(s, x1, y1, x2, y2))
			cout << "T";
		else
			cout << "F"; 
		
		cout << endl;
		
	}
	
	return 0;
}

int max(int a, int b)
{  if (a > b) return a;  else return b;
}
int min(int a, int b)
{  if (a < b) return a;  else return b;
}
int SentidoPercurso(Ponto p1, Ponto p2, Ponto p3)
{  long long a, b, c, d;
   a= p2.x - p1.x;  b= p3.y - p1.y;  c=p3.x - p1.x;  d=p2.y - p1.y;
   a = a*b-c*d;
   if (a > 0) return 1;
   else if (a < 0) return -1;
   else return 0;
}
int Intercepta(Segmento s1, Segmento s2)
{  if ((max(s1.p.x,s1.q.x)>=min(s2.p.x,s2.q.x))&&
       (max(s2.p.x,s2.q.x)>=min(s1.p.x,s1.q.x))&&
       (max(s1.p.y,s1.q.y)>=min(s2.p.y,s2.q.y))&&
       (max(s2.p.y,s2.q.y)>=min(s1.p.y,s1.q.y))&&
       (SentidoPercurso(s1.p,s1.q,s2.p)*SentidoPercurso(s1.p,s1.q,s2.q)<=0)&&
       (SentidoPercurso(s2.p,s2.q,s1.p)*SentidoPercurso(s2.p,s2.q,s1.q)<=0))
       return 1;
    else return 0;     
}

int PertenceQuadrado(Segmento s, int x1, int y1, int x2, int y2) {
	if ((s.p.x > min(x1, x2) && s.p.x < max(x1, x2) && s.p.y > min(y1, y2) && s.p.y < max(y1, y2)) || (s.q.x > min(x1, x2) && s.q.x < max(x1, x2) && s.q.y > min(y1, y2) && s.q.y < max(y1, y2)))
		return 1;
	return 0;
}