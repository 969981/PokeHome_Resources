/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c880; name: FUN_.text__0046c880
 */


void FUN__text__0046c880(uint param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  
  if (DAT_00aea708 != 0) {
    uVar1 = 0;
    if (DAT_00aea708 != 0) {
      uVar1 = param_1 / DAT_00aea708;
    }
    plVar2 = (long *)(DAT_00aea700 + (ulong)(param_1 - uVar1 * DAT_00aea708) * 8);
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    } while (*(uint *)(plVar2 + 1) != param_1);
    for (lVar3 = plVar2[2]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x48)) {
      local_18 = 0xffffffffffffffff;
      if (*(long *)(lVar3 + 0x50) != 0) {
        FUN__text__0046c410(&DAT_00aea6f8,lVar3);
        FUN__text__00469530(*(undefined8 *)(lVar3 + 0x50),lVar3,&local_18,1);
        *(undefined8 *)(lVar3 + 0x50) = 0;
      }
    }
  }
  return;
}


