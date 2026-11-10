/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6a58; name: FUN_.text__005f6a58
 */


bool FUN__text__005f6a58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return true;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  FUN__text__005f65a0(auStack_38,param_1,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  return lVar1 == local_28;
}


