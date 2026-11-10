/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00465a90; name: FUN_.text__00465a90
 */


void FUN__text__00465a90(long *param_1,undefined4 param_2,uint param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN__text__004ceab0(param_1 + 0x17,param_4,param_1);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x20) =
         *(byte *)(lVar3 + 0x20) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  if (param_4 == 0) {
    FUN__text__004cfa40(param_1 + 0x17,param_2,param_3);
    iVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  }
  if ((((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x80))(param_1), iVar2 == 10)) ||
      (param_1[0xf] == 0)) || ((*(uint *)(param_1 + 0x13) & 0x1f000) != 0)) {
    plVar1 = param_1 + 5;
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 3) >> 5 & 1) != 0)) ||
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1d), (uVar4 & 1) != 0)) {
      param_3 = param_3 & 0xfffffffe;
    }
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 3) >> 6 & 1) != 0)) ||
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1e), (uVar4 & 1) != 0)) {
      param_3 = param_3 & 0xfffffffd;
    }
    if (((param_1[0xb] != 0) && (*(char *)(param_1[0xb] + 3) < '\0')) ||
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1f), (uVar4 & 1) != 0)) {
      param_3 = param_3 & 0xfffffffb;
    }
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 4) & 1) != 0)) ||
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x20), (uVar4 & 1) != 0)) {
      param_3 = param_3 & 0xfffffff7;
    }
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 4) >> 1 & 1) != 0)) ||
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x21), (uVar4 & 1) != 0)) {
      param_3 = param_3 & 0xffffffef;
    }
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00465c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}


