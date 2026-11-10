/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ff214; name: FUN_.text__005ff214
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005ff214(undefined4 param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = _DAT_008a5d78;
  if (param_3 == 2) {
    plVar4 = *(long **)(_DAT_008a5d78 + 0x10);
    param_3 = 2;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 9;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,param_2);
      param_3 = 2;
      if ((uVar2 & 1) == 0) {
        param_3 = 0;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    if (param_3 == 6) {
      return 0;
    }
    if (7 < param_3) {
      return 0;
    }
  }
  lVar3 = *(long *)(lVar3 + (ulong)param_3 * 8);
  if (lVar3 == 0) {
    return 0;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar1 = FUN__text__00600a20(lVar3,param_1,param_2);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return uVar1;
}


