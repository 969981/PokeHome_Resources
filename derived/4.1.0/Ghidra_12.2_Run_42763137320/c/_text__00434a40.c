/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434a40; name: FUN_.text__00434a40
 */


undefined8
FUN__text__00434a40(undefined4 param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 local_38;
  undefined1 local_34 [4];
  
  uVar6 = param_3 >> 0x20 & 0xff;
  plVar5 = (long *)(param_2 + uVar6 * 0x18);
  uVar1 = *(uint *)(plVar5 + 1);
  if (uVar1 == 0) {
LAB__text__00434aa8:
    plVar5 = (long *)FUN__text__00434fac(param_2,param_3 & 0xffffff0000000000 |
                                                 param_3 & 0xffffffff | uVar6 << 0x20);
    if (plVar5 == (long *)0x0) {
      return 0x34;
    }
  }
  else {
    uVar2 = 0;
    uVar4 = (uint)param_3;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    plVar5 = (long *)(*plVar5 + (ulong)(uVar4 - uVar2 * uVar1) * 8);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB__text__00434aa8;
    } while (*(uint *)(plVar5 + 1) != uVar4);
  }
  if (*(long *)((long)plVar5 + 0x20) == 0) {
    local_34[0] = 0;
    local_38 = param_1;
    uVar3 = FUN__text__004363b0(plVar5,param_4,&local_38,local_34,param_5,param_6,param_7 & 1);
    return uVar3;
  }
  return 2;
}


