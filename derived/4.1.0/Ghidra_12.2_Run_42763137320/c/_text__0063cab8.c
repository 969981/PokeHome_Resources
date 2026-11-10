/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063cab8; name: FUN_.text__0063cab8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0063cab8(undefined4 param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 != 6) {
    bVar1 = 5;
    if (param_2 != 0) {
      bVar1 = param_2;
    }
    lVar6 = *(long *)(_DAT_008a6308 + (ulong)bVar1 * 8);
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar6 = FUN__text__0063d690(lVar6,param_1);
      if (lVar6 == 0) {
        bVar2 = false;
      }
      else {
        plVar5 = (long *)(&DAT_00c16298)[bVar1];
        bVar2 = false;
        if (plVar5 != (long *)0x0) {
          plVar7 = plVar5 + 9;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          plVar5[0xc] = lVar6;
          (**(code **)(*plVar4 + 0x18))(plVar4);
          iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
          bVar2 = iVar3 == 0x65;
          plVar4 = plVar7;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return bVar2;
    }
  }
  return false;
}


