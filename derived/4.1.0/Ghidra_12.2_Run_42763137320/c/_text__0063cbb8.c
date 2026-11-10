/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063cbb8; name: FUN_.text__0063cbb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0063cbb8(undefined4 param_1,uint param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (param_3 != 6) {
    bVar1 = 5;
    if (param_3 != 0) {
      bVar1 = param_3;
    }
    lVar6 = *(long *)(_DAT_008a6308 + (ulong)bVar1 * 8);
    if (lVar6 != 0) {
      plVar3 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar6 = FUN__text__0063d690(lVar6,param_1);
      if ((lVar6 == 0) || (plVar5 = (long *)(&DAT_00c16298)[bVar1], plVar5 == (long *)0x0)) {
        iVar4 = 0;
      }
      else {
        plVar7 = plVar5 + 9;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar5[0xc] = lVar6;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        param_2 = param_2 & 0xff;
        if (2 < param_2) {
          param_2 = 3;
        }
        uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
        iVar4 = uVar2 + (param_2 * (uVar2 & 0xff) * 0x1999c >> 0x13);
        plVar3 = plVar7;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return iVar4;
    }
  }
  return 0;
}


