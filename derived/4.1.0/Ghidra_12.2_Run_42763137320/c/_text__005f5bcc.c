/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5bcc; name: FUN_.text__005f5bcc
 */


bool FUN__text__005f5bcc(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 0x18;
  lVar2 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar2 = 0x28;
  }
  if (param_2 < 0x11) {
    lVar1 = 0x28;
  }
  return 0x27 < (ulong)(lVar2 - lVar1);
}


