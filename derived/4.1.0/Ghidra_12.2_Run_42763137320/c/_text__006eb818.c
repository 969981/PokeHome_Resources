/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eb818; name: FUN_.text__006eb818
 */


void FUN__text__006eb818(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  *(int *)(param_1 + 0x24) = param_2;
  iVar1 = 0;
  if ((uVar2 & 1) != 0) {
    iVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((uVar2 & 4) != 0) {
    iVar1 = iVar1 + 8;
  }
  *(long *)(param_1 + 0x30) = (long)iVar1 * (long)param_2;
  return;
}


