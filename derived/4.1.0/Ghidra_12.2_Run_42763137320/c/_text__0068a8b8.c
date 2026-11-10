/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068a8b8; name: FUN_.text__0068a8b8
 */


void FUN__text__0068a8b8(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_3 + 0x28) + 0x20))();
  iVar2 = (**(code **)(**(long **)(param_3 + 0x28) + 0x28))();
  *(float *)(param_3 + 0xc) = param_1 / (float)iVar1;
  *(float *)(param_3 + 0x10) = param_2 / (float)iVar2;
  return;
}


