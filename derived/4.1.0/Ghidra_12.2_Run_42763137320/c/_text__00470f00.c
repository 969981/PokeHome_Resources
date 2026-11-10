/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00470f00; name: FUN_.text__00470f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00470f00(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  puVar2 = _DAT_008a4cd0;
  *_DAT_008a4cc8 = 0;
  *puVar2 = 0;
  *_DAT_008a4cd8 = 0;
  puVar4 = (undefined8 *)FUN__text__00400f80(0,0x800);
  lVar3 = _DAT_008a4ce0;
  *(undefined8 **)(_DAT_008a4ce0 + 0x18) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar6 = 0;
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(undefined4 *)(lVar3 + 0x20) = 0x40;
  do {
    puVar1 = puVar4;
    *puVar1 = puVar1 + 4;
    uVar6 = uVar6 + 1;
    puVar4 = puVar1 + 4;
  } while (uVar6 < *(uint *)(lVar3 + 0x20));
  *puVar1 = 0;
  *(undefined8 *)(_DAT_008a4ce8 + 0x20) = 0;
  uVar5 = FUN__text__00405cd4();
  return uVar5;
}


