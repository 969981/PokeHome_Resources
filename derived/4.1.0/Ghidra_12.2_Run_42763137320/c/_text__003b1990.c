/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b1990; name: FUN_.text__003b1990
 */


undefined8 FUN__text__003b1990(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0xa14) == '\0') {
    iVar1 = *(int *)(param_2 + 0x908);
  }
  else {
    param_1 = *(undefined4 *)(*(long *)(param_2 + 0x748) + 0x1d4);
    iVar1 = *(int *)(param_2 + 0x908);
  }
  if (iVar1 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x003b1a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__003b1a0c + (ulong)*(byte *)((ulong)(iVar1 - 1U) + 0x73a7b1) * 4))
                      (param_1);
    return uVar2;
  }
  FUN__text__003b9408(*(undefined8 *)(param_2 + 0x748));
  *(undefined1 *)(param_2 + 0xa14) = 0;
  return 1;
}


