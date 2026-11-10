/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d6d28; name: FUN_.text__001d6d28
 */


void FUN__text__001d6d28(long param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  *(undefined4 *)(param_1 + 0x648) = 0;
  FUN__text__001db970(*(undefined8 *)(param_1 + 0x6d0),1);
  iVar1 = *(int *)(param_1 + 0x64c);
  *(undefined4 *)(param_1 + 0x64c) = 0;
  uVar2 = iVar1 - 1;
  if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x001d6d80 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001d6d8c + (ulong)*(byte *)((ulong)uVar2 + 0x725efa) * 4))();
    return;
  }
  return;
}


