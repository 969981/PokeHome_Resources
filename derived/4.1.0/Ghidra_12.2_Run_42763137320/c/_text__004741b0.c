/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004741b0; name: FUN_.text__004741b0
 */


void FUN__text__004741b0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  puVar1 = (uint *)(param_1 + 0x313);
  uVar2 = *puVar1;
  if ((uVar2 >> 0x1a & 1) != 0) {
    FUN__text__00475880(param_1,0);
    uVar2 = *puVar1;
  }
  if ((uVar2 >> 0x14 & 1) != 0) {
    return;
  }
  *puVar1 = uVar2 | 0x100000;
  if (*(int *)(param_1 + 0x378) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x370);
    do {
      puVar4 = puVar3 + 1;
      FUN__text__00463510(*puVar3,param_1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)
                       (*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8));
  }
  *(undefined4 *)(param_1 + 0x378) = 0;
  uStack_30 = 0x100000000;
  local_28 = 0x100;
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_40 = 0;
  uStack_48 = 0;
  local_38 = param_1;
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x120))(*(long **)(param_1 + 0x1e8),&local_50);
  return;
}


