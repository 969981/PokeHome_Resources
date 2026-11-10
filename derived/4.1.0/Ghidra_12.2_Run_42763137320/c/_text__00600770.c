/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600770; name: FUN_.text__00600770
 */


uint FUN__text__00600770(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  lVar1 = DAT_00c15cb0;
  if (DAT_00c15cb0 == 0) {
    return 0;
  }
  plVar5 = (long *)(DAT_00c15cb0 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar3 = (long *)(*(code *)**(undefined8 **)(lVar1 + 0x50))();
  plVar4 = (long *)FUN__text__00600930();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 == (long *)0x0) {
      uVar2 = 0;
      goto LAB__text__00600818;
    }
  }
  uVar2 = FUN__text__00644728(lVar1,param_1,param_2);
LAB__text__00600818:
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return uVar2 & 1;
}


