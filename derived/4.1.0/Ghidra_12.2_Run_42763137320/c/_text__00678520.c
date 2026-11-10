/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678520; name: FUN_.text__00678520
 */


int FUN__text__00678520(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int local_28;
  undefined1 local_24 [4];
  
  local_28 = 0;
  if (param_1 == 0) {
    iVar3 = 0x62;
  }
  else {
    local_24[0] = 0;
    uVar1 = nnsslConnectionPeek(*(undefined8 *)(param_1 + 0x298),local_24,&local_28,1);
    uVar2 = nnResultIsFailure(uVar1);
    if ((uVar2 & 1) == 0) {
      iVar3 = 1;
      if (local_28 < 1) {
        iVar3 = -(uint)(local_28 != 0);
      }
    }
    else {
      uVar2 = FUN__text__006786ac(uVar1,0x1987b);
      iVar3 = -1;
      if ((uVar2 & 1) != 0) {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}


