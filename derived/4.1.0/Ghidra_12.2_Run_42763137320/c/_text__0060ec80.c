/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060ec80; name: FUN_.text__0060ec80
 */


undefined8 FUN__text__0060ec80(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (param_2 & 0xff) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0060ec9c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__0060eca8 + (ulong)*(byte *)((ulong)uVar1 + 0x75a530) * 4))();
    return uVar2;
  }
  return 0;
}


