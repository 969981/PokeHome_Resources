/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015a030; name: FUN_.text__0015a030
 */


undefined8 FUN__text__0015a030(short *param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*param_1 == 0x10) {
    uVar2 = FUN__text__005f37a0();
    if (((uVar2 & 0xff00) == 0x100) && (cVar1 = FUN__text__005f37a0(param_1), cVar1 == '\x14')) {
      return 1;
    }
  }
  return 0;
}


