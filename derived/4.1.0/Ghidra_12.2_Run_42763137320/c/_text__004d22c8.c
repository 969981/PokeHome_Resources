/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d22c8; name: FUN_.text__004d22c8
 */


void FUN__text__004d22c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x68);
  if (*plVar3 == 0) {
    uVar1 = 0;
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = FUN__text__0045cdec(plVar3);
    if (*plVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*plVar3 + 0x20);
    }
  }
  FUN__text__004c5540(uVar1,uVar2,*(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 0x30 + 0xc0),
                      param_3,param_4);
  return;
}


