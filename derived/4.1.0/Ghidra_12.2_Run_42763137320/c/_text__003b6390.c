/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6390; name: FUN_.text__003b6390
 */


int FUN__text__003b6390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_4 [4];
  
  uVar1 = FUN__text__003b5f30(param_1,param_2,auStack_4);
  iVar2 = (int)((ulong)uVar1 >> 0x20);
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (int)uVar1 + *(int *)(param_1 + 0xc) * iVar2;
  }
  return iVar2 + *(int *)(param_1 + 0x10) * (int)uVar1;
}


