/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9400; name: FUN_.text__006b9400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b9400(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5,long param_6)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  FUN__text__006b2060();
  lVar1 = _DAT_008a6918;
  plVar5 = param_1 + 0x1e;
  *plVar5 = 0;
  param_1[0x1f] = 0;
  *param_1 = lVar1 + 0x10;
  lVar1 = param_5;
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) {
    lVar1 = param_4;
  }
  bVar2 = *(byte *)(lVar1 + 0x67);
  uVar6 = (uint)*(byte *)(lVar1 + 0x66);
  if (2 < uVar6) {
    uVar6 = 3;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  param_1[0x1d] = -1;
  if (((bVar2 & 1) == 0) && (uVar6 != 0)) {
    FUN__text__0069d6f4(plVar5);
    FUN__text__0069d730(plVar5,uVar6);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x54);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar1 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar1 + 0x60);
  if (uVar6 == 0) {
    uVar7 = 0x68;
  }
  else {
    if (((bVar2 & 1) == 0) && ((char)*plVar5 != '\0')) {
      FUN__text__0069d860(plVar5,lVar1 + 0x68,uVar6);
    }
    uVar7 = (ulong)(uVar6 * 0x20 + 0x68);
  }
  if ((bVar2 & 1) != 0) {
    FUN__text__006b95b8(param_1,param_2,param_3,lVar1,param_6,*(undefined4 *)(lVar1 + uVar7));
  }
  uVar3 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30),*(undefined2 *)(param_4 + 100));
  uVar4 = 0;
  if (param_5 != 0) {
    uVar4 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38),*(undefined2 *)(param_5 + 100));
  }
  plVar5 = (long *)FUN__text__006a0f04(0x50);
  if (plVar5 != (long *)0x0) {
    *plVar5 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar5,param_2,param_3,uVar3,uVar4,param_6);
  }
  param_1[0x1b] = (long)plVar5;
  FUN__text__006ab450(plVar5,param_2,param_3,param_6);
  FUN__text__006b97f8(param_1,param_2,param_3);
  return;
}


