/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00653f90; name: FUN_.text__00653f90
 */


undefined8 FUN__text__00653f90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar1 = (long *)(lVar3 + lVar2 * 0x20);
  plVar4 = (long *)*plVar1;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3);
    if (lVar3 != 0) break;
    plVar4 = (long *)plVar4[2];
  }
  FUN__text__00656b90(plVar1,plVar4,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}


