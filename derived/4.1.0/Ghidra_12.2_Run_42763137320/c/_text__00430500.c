/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430500; name: FUN_.text__00430500
 */


undefined8 FUN__text__00430500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)FUN__text__00400f80(0,0xc0);
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    *(undefined4 *)(param_1 + 0x30) = 8;
    do {
      puVar1 = puVar2;
      *puVar1 = puVar1 + 3;
      uVar3 = uVar3 + 1;
      puVar2 = puVar1 + 3;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
    *puVar1 = 0;
    puVar2 = (undefined8 *)FUN__text__00400f80(0,0x100);
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = 0;
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      *(undefined4 *)(param_1 + 0x60) = 8;
      do {
        puVar1 = puVar2;
        *puVar1 = puVar1 + 4;
        uVar3 = uVar3 + 1;
        puVar2 = puVar1 + 4;
      } while (uVar3 < *(uint *)(param_1 + 0x60));
      *puVar1 = 0;
      return 1;
    }
  }
  return 0x34;
}


