/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3148; name: FUN_.text__006a3148
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__006a3148(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                          uint param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 8);
  if (lVar7 == 0) {
    return (long *)0x0;
  }
  uVar2 = FUN__text__00699b8c(param_4);
  plVar3 = (long *)(*(code *)*_DAT_008a6960)((uVar2 & 0xffff) * 8 + 0x58,4,*_DAT_008a6970);
  if (plVar3 != (long *)0x0) {
    FUN__text__006a8030(plVar3);
    lVar1 = _DAT_008a6820;
    plVar3[9] = 0;
    *(undefined4 *)(plVar3 + 10) = 0;
    pcVar4 = *(code **)(lVar1 + 0x50);
    *plVar3 = lVar1 + 0x10;
    (*pcVar4)(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),lVar7);
    plVar6 = (long *)(param_1 + 8);
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *plVar5 = *plVar6;
    *(long **)(lVar7 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar5;
    *plVar6 = lVar7;
    FUN__text__006a84a0(plVar3,param_4,*(undefined8 *)(param_1 + 0x20),plVar3 + 0xb,param_5 & 1);
  }
  return plVar3;
}


