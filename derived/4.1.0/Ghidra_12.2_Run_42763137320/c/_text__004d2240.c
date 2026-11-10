/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d2240; name: FUN_.text__004d2240
 */


void FUN__text__004d2240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  if (*(long *)(param_1 + -0x30) == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffffffffffff;
    plVar3 = *(long **)(param_1 + 0xf8);
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(param_1 + -0x30) + 0x20);
    uVar2 = FUN__text__0045cdec();
    plVar3 = *(long **)(param_1 + 0xf8);
  }
  if (plVar3 == (long *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x10))();
  }
  FUN__text__004c5540(uVar4,uVar2,uVar1,param_2,param_3);
  return;
}


