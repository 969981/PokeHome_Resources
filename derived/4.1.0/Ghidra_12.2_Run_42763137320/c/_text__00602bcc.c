/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602bcc; name: FUN_.text__00602bcc
 */


uint FUN__text__00602bcc(undefined8 param_1,byte param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN__text__0063e460();
  bVar1 = *(byte *)(lVar2 + 0x10);
  if ((byte)(bVar1 + 2) < 3) {
    return *(uint *)((long)(char)(bVar1 + 2) * 4 + 0x759f00);
  }
  return (uint)(param_2 < bVar1);
}


