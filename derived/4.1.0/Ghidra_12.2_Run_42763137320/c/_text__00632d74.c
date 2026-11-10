/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632d74; name: FUN_.text__00632d74
 */


bool FUN__text__00632d74(long param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,uVar1);
  if (((iVar2 == param_2) ||
      (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,uVar1), iVar2 == param_2)) ||
     (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,uVar1), iVar2 == param_2)) {
    return true;
  }
  iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,uVar1);
  return iVar2 == param_2;
}


