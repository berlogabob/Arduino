void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}


void l - probel() {
  k_rt(); k_rt();
}

void l_a() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_up();
  k_rt(); k_dw(); k_up(); k_up(); k_lf();
  k_up(); k_rt();
}


void l_b() {
  k_rt(); k_dw(); k_rt(); k_lf(); k_dw();
  k_dw(); k_rt(); k_up(); k_lf(); k_up();
  k_up(); k_rt();
}


void l_v() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_rt();
  k_up(); k_lf(); k_rt2();  k_up(); k_lf2();
  k_up(); k_rt();
}


void l_g() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_up();
  k_up(); k_rt(); k_lf(); k_up(); k_rt();
}

void l_x(){
  k_rt(); k_dw();
  for( int i=0; i<20; ++i){
    k_dw10();
    k_rt20();
  }
  for( int i=0; i<10; ++i){
    k_lf20();
    k_up10();    
  }
  for( int i=0; i<10; ++i){
    k_dw10();
    k_lf20();
  }
  for( int i=0; i<20; ++i){
    k_rt20();
    k_up10();
  }
  for( int i=0; i<10; ++i){
    k_dw10();
    k_lf20();
  }
  for( int i=0; i<10; ++i){
    k_lf20();
    k_up10();
  }
 k_up(); k_rt(); 
}


