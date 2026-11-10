/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447460; name: FUN_.text__00447460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00447460(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined8 *)FUN__text__00400f80(0,0x80);
  uVar5 = 0x34;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(undefined4 *)(param_1 + 0x20) = 8;
    do {
      puVar1 = puVar2;
      *puVar1 = puVar1 + 2;
      uVar4 = uVar4 + 1;
      puVar2 = puVar1 + 2;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
    *puVar1 = 0;
    uVar3 = FUN__text__004474f0(_DAT_008a4b40,0x80);
    uVar5 = 0x34;
    if ((uVar3 & 1) != 0) {
      uVar5 = 1;
    }
  }
  return uVar5;
}


