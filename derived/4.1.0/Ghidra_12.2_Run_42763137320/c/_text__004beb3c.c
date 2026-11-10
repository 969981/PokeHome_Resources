/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004beb3c; name: FUN_.text__004beb3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004beb3c(long *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN__text__00473c80();
  puVar1 = _DAT_008a4648;
  if (iVar3 != 1) {
    return iVar3;
  }
  if (param_1[0x51] == 0) {
LAB__text__004beb9c:
    lVar4 = param_1[0x52];
  }
  else {
    iVar3 = FUN__text__0042f400(*_DAT_008a4648,param_1[0x51],param_1 + 2);
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 0xb8))(param_1,0xe,0xffffffff);
      goto LAB__text__004beb9c;
    }
    param_1[0x51] = 0;
    *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0xf8 | 2;
    lVar4 = param_1[0x52];
  }
  if (lVar4 != 0) {
    iVar3 = FUN__text__0042f400(*puVar1,lVar4,param_1 + 2);
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 0xb8))(param_1,0xe,0xffffffff);
      bVar2 = param_1[0x52] == 0;
      goto LAB__text__004bec08;
    }
    param_1[0x52] = 0;
  }
  bVar2 = true;
LAB__text__004bec08:
  if ((((*(byte *)((long)param_1 + 0x312) & 7) == 0) && (*(int *)((long)param_1 + 0x32c) != 0)) &&
     (bVar2)) {
    *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0xf8 | 1;
  }
  return 1;
}


