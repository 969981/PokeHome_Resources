/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458de0; name: FUN_.text__00458de0
 */


undefined8 FUN__text__00458de0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  lVar2 = FUN__text__00400f80(0,0x30);
  if (lVar2 == 0) {
    *param_1 = 0;
    return 2;
  }
  FUN__text__00458468();
  *param_1 = lVar2;
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0xa0);
  *(undefined8 **)(lVar2 + 0x18) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 1;
  }
  uVar4 = 0;
  *(undefined8 **)(lVar2 + 0x10) = puVar3;
  *(undefined4 *)(lVar2 + 0x20) = 4;
  do {
    puVar1 = puVar3;
    *(undefined1 *)(puVar1 + 4) = 0;
    uVar4 = uVar4 + 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = puVar1 + 5;
    puVar1[1] = 0;
    puVar3 = puVar1 + 5;
  } while (uVar4 < *(uint *)(lVar2 + 0x20));
  *puVar1 = 0;
  return 1;
}


