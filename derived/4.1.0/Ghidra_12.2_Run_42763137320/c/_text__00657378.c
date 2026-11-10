/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657378; name: FUN_.text__00657378
 */


undefined8 * FUN__text__00657378(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN__text__006783d4(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0x2d2d2d2d2d2d2d2d;
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0x2d2d2d2d2d2d2d2d;
    puVar2[5] = 0x2d2d2d2d2d2d2d2d;
    iVar1 = FUN__text__006669f8(param_1,puVar2 + 7,0x11);
    if (iVar1 == 0) {
      *(undefined4 *)(puVar2 + 10) = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
    }
    else {
      FUN__text__006783e4(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


