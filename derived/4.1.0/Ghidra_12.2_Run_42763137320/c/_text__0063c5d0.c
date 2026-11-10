/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063c5d0; name: FUN_.text__0063c5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__0063c5d0(undefined4 param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != 6) {
    bVar1 = 5;
    if (param_2 != 0) {
      bVar1 = param_2;
    }
    lVar5 = *(long *)(_DAT_008a6308 + (ulong)bVar1 * 8);
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar5 = FUN__text__0063d690(lVar5,param_1);
      if (lVar5 == 0) {
        uVar2 = 0;
      }
      else {
        plVar4 = (long *)(&DAT_00c16298)[bVar1];
        uVar2 = 0;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 9;
          (**(code **)(*plVar6 + 0x10))(plVar6);
          plVar4[0xc] = lVar5;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
          plVar3 = plVar6;
        }
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return uVar2 & 1;
    }
  }
  return 0;
}


