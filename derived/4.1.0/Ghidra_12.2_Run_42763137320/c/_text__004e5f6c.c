/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5f6c; name: FUN_.text__004e5f6c
 */


void FUN__text__004e5f6c(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_28;
  
  FUN__text__004470f0();
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 400) = 0;
    *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 8;
    FUN__text__004470a8(param_1);
    if ((*(byte *)(param_1 + 0x194) >> 1 & 1) == 0) {
      *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 2;
      FUN__text__00447104(param_1);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 400)) {
    *(uint *)(param_1 + 400) = param_2;
  }
  plVar2 = (long *)(param_1 + 0x70);
  local_28 = (**(code **)(*plVar2 + 0x38))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  FUN__text__0046c3b0(plVar2,&local_28,uVar1 & 1);
  FUN__text__00447104(param_1);
  return;
}


