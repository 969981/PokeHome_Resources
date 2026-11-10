/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af7f0; name: FUN_.text__004af7f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004af7f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(_DAT_008a45b0 + 0xc);
  lVar2 = FUN__text__00400f80(0x10,(ulong)uVar5);
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    return 2;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  *(long *)(param_1 + 0x18) = lVar2;
  *(uint *)(param_1 + 0x30) = uVar5;
  *(ulong *)(param_1 + 0x28) = lVar2 + (ulong)uVar5;
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0x300);
  *(undefined8 **)(param_1 + 0x50) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    *(undefined4 *)(param_1 + 0x58) = 0x20;
    do {
      puVar1 = puVar3;
      *puVar1 = puVar1 + 3;
      uVar5 = uVar5 + 1;
      puVar3 = puVar1 + 3;
    } while (uVar5 < *(uint *)(param_1 + 0x58));
    *puVar1 = 0;
    puVar3 = (undefined8 *)FUN__text__00400f80(0,0x300);
    *(undefined8 **)(param_1 + 0x78) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = 0;
      *(undefined8 **)(param_1 + 0x70) = puVar3;
      *(undefined4 *)(param_1 + 0x80) = 0x20;
      do {
        puVar1 = puVar3;
        *puVar1 = puVar1 + 3;
        uVar5 = uVar5 + 1;
        puVar3 = puVar1 + 3;
      } while (uVar5 < *(uint *)(param_1 + 0x80));
      *puVar1 = 0;
      uVar4 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0xc0) = uVar4;
      return 1;
    }
  }
  uVar4 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  return 0x34;
}


