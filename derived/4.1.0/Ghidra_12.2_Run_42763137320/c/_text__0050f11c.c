/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050f11c; name: FUN_.text__0050f11c
 */


void FUN__text__0050f11c(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                        undefined8 *param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (ushort *)
           (*(long *)(param_1 + 8) +
           (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*puVar1 * 0xc);
  uVar3 = *puVar2;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_3 = uVar3;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)puVar1[1] * 0xc);
  uVar3 = *puVar2;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_4 = uVar3;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)puVar1[2] * 0xc);
  uVar3 = *puVar2;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_5 = uVar3;
  return;
}


