/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666ab4; name: FUN_.text__00666ab4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00666ab4(ulong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar2 = (int)param_1;
  if (iVar2 != 0) {
    param_1 = param_1 & 0xffffffff;
    if (iVar2 < 0) {
      nnsocketSetLastErrno(0x16);
      param_1 = 0xffffffff;
    }
    else {
      auVar5 = FUN__text__0066c6a8();
      piVar1 = _DAT_008a6578;
      do {
        iVar3 = nnsocketPoll(0,0,param_1);
        if ((iVar3 != -1) ||
           ((iVar4 = nnsocketGetLastErrno(), iVar4 != 0 &&
            ((iVar3 = -1, iVar4 != 4 || (*piVar1 != 0)))))) goto LAB__text__00666b50;
        auVar6 = FUN__text__0066c6a8();
        iVar3 = FUN__text__0066c6d8(auVar6._0_8_,auVar6._8_8_,auVar5._0_8_,auVar5._8_8_);
        param_1 = (ulong)(uint)(iVar2 - iVar3);
      } while (iVar2 - iVar3 != 0 && iVar3 <= iVar2);
      iVar3 = 0;
LAB__text__00666b50:
      param_1 = (ulong)-(uint)(iVar3 != 0);
    }
  }
  return param_1;
}


