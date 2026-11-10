/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006677ac; name: FUN_.text__006677ac
 */


undefined4 FUN__text__006677ac(void)

{
  int iVar1;
  long lVar2;
  long *in_x3;
  undefined4 uVar3;
  
  lVar2 = nnsocketRecv();
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    uVar3 = 0x51;
    if (iVar1 != 4 && iVar1 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
    *in_x3 = lVar2;
  }
  return uVar3;
}


