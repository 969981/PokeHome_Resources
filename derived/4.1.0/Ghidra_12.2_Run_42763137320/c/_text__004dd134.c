/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd134; name: FUN_.text__004dd134
 */


undefined8 FUN__text__004dd134(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int local_30 [2];
  undefined4 local_28;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  bVar5 = 8;
  if ((param_3 & 1) == 0) {
    bVar5 = 0;
  }
  uVar1 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x68) - uVar2;
  *(uint *)(param_1 + 0x6c) = uVar2 + *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = uVar1;
  *(ulong *)(param_1 + 0x60) = param_2 + (ulong)uVar2;
  bVar5 = *(byte *)(param_1 + 0x82) & 0xf7 | bVar5;
  *(int *)(param_1 + 0x68) = iVar3;
  *(byte *)(param_1 + 0x82) = bVar5;
  uVar2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x80) != 1) {
    uVar2 = *(uint *)(param_1 + 0x7c);
  }
  if (uVar1 < uVar2) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    return 1;
  }
  *(uint *)(param_1 + 0x68) = (iVar3 - uVar1) + uVar2;
  if (*(short *)(param_1 + 0x80) == 1) {
    *(byte *)(param_1 + 0x82) = bVar5 | 1;
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x80))
                    (*(long **)(param_1 + 0x58),iVar3,0,local_30);
  if (iVar4 != 1) {
    return 2;
  }
  *(int *)(param_1 + 0x70) = local_30[0];
  *(int *)(param_1 + 0x74) = iVar3 - local_30[0];
  iVar3 = 0;
  if (*(ushort *)(param_1 + 0x80) != 0) {
    iVar3 = *(ushort *)(param_1 + 0x80) - 1;
  }
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 0x40;
  *(short *)(param_1 + 0x80) = (short)iVar3;
  if (iVar3 == 1) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_30);
    local_28 = 0;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_30);
  }
  return 1;
}


