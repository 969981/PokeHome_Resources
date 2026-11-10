/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a23ec; name: FUN_.text__005a23ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a23ec(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  void *__s;
  long lVar6;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar2 = tpidr_el0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar6 = 0;
  if (uVar2 != 0) {
    if (*(long *)(uVar2 + 0x98) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar4 = _DAT_008a0238;
  plVar1 = param_1 + 0xb;
  *param_1 = _DAT_008a0238 + 0x10;
  param_1[1] = lVar6;
  param_1[9] = lVar4 + 0x50;
  FUN__text__005b4f04(plVar1);
  FUN__text__005b4f04(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  FUN__text__005b4f8c(plVar1,0x10,param_2,param_3,param_4);
  FUN__text__005b4f8c(param_1 + 0x19,0x10,param_2,param_3,param_4);
  piVar5 = _DAT_008a0300;
  lVar6 = _DAT_008a0310 + 0x50;
  *param_1 = _DAT_008a0310 + 0x10;
  param_1[9] = lVar6;
  iVar3 = *piVar5;
  *(int *)(param_1 + 0x27) = iVar3;
  FUN__text__005b52c0(*_DAT_0089f418,param_1);
  __s = (void *)thunk_FUN__text__006ec5f4(plVar1 + (long)iVar3 * 0xe);
  memset(__s,0,param_3 * param_2);
  thunk_FUN__text__006ec608(plVar1 + (long)iVar3 * 0xe);
  return;
}


