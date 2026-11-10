/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005213f4; name: FUN_.text__005213f4
 */


undefined1  [16]
FUN__text__005213f4(double param_1,double param_2,double param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double local_48;
  double dStack_40;
  double local_38;
  
  dVar4 = param_2;
  dVar3 = param_3;
  local_48 = param_1;
  dStack_40 = param_2;
  local_38 = param_3;
  dVar1 = (double)FUN__text__00520f94(param_4,&local_48);
  dVar1 = param_1 - dVar1;
  dVar4 = SQRT(dVar1 * dVar1 + (param_2 - dVar4) * (param_2 - dVar4) +
               (param_3 - dVar3) * (param_3 - dVar3));
  if (dVar4 == 0.0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar1 * 0.009999999776482582 * (1.0 / dVar4);
  }
  auVar2._0_8_ = dVar4 + param_1;
  auVar2._8_8_ = 0;
  return auVar2;
}


