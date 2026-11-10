/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053928c; name: FUN_.text__0053928c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0053928c(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar7) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN__text__0053d990(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar7) {
      return (long *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*param_1 == 0) {
    return (long *)0x0;
  }
  plVar6 = (long *)(*param_1 + (ulong)uVar7 * 0x50);
  plVar6[2] = 0;
  plVar6[3] = 0;
  lVar3 = _DAT_008a4288;
  plVar6[4] = 0;
  *(undefined4 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  *plVar6 = lVar3 + 0x10;
  plVar6[1] = 0;
  FUN__text__0053d740(plVar6,param_2);
  uVar4 = FUN__text__005426f0(plVar6);
  FUN__text__0053d870(param_1,uVar4);
  return plVar6;
}


