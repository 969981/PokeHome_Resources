/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004601fc; name: FUN_.text__004601fc
 */


void FUN__text__004601fc(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  
  FUN__text__0046a2e0(param_1,1,*(undefined8 *)(param_2 + 0x10));
  FUN__text__00469b30(param_1);
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x120))(plVar3,param_2);
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0xc0) != 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x110) == 0) || (*(int *)(param_1 + 0x144) == 0)) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8;
    FUN__text__0045fe00(param_1);
    return;
  }
  iVar2 = FUN__text__0045fff0(param_1);
  bVar1 = *(byte *)(param_1 + 0x19c) & 0xf8;
  if (iVar2 == 1) {
    bVar1 = bVar1 | 2;
  }
  *(byte *)(param_1 + 0x19c) = bVar1;
  FUN__text__0045fe00(param_1);
  return;
}


