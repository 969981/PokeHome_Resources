/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e310; name: FUN_.text__0066e310
 */


undefined8 FUN__text__0066e310(byte *param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  puVar4 = param_2;
  do {
    bVar1 = *param_1;
    if (bVar1 == 0x3a) {
      if (param_1[1] == 0x2f) {
        if (param_2 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        return 1;
      }
    }
    else if (bVar1 == 0) {
      return 0;
    }
    uVar3 = FUN__text__00656854((ulong)bVar1);
    if ((int)uVar3 == 0) {
      if (0x2e < bVar1) {
        return uVar3;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0) {
        return uVar3;
      }
    }
    if (param_2 != (undefined1 *)0x0) {
      iVar2 = tolower((uint)bVar1);
      *puVar4 = (char)iVar2;
    }
    puVar4 = puVar4 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}


