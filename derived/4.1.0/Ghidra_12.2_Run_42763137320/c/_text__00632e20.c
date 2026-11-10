/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632e20; name: FUN_.text__00632e20
 */


bool FUN__text__00632e20(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0);
  if (((iVar1 == param_2) ||
      (iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,param_3), iVar1 == param_2))
     || (iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,param_3), iVar1 == param_2))
  {
    return true;
  }
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,param_3);
  return iVar1 == param_2;
}


