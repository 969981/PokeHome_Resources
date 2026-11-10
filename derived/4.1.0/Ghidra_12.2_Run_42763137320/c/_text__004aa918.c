/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa918; name: FUN_.text__004aa918
 */


undefined8 FUN__text__004aa918(long *param_1,int *param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  byte *pbVar10;
  
  param_3[3] = 0;
  param_3[4] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar5 = *(undefined4 *)*param_1;
  *param_1 = (long)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((long)param_3 + 4) = uVar5;
  pbVar10 = (byte *)*param_1;
  bVar7 = *pbVar10;
  *param_1 = (long)(pbVar10 + 1);
  uVar5 = *(undefined4 *)(pbVar10 + 1);
  *param_1 = (long)(pbVar10 + 5);
  *(undefined4 *)(param_3 + 1) = uVar5;
  *(undefined4 *)((long)param_3 + 0xc) = uVar5;
  uVar5 = *(undefined4 *)*param_1;
  *param_1 = (long)((undefined4 *)*param_1 + 1);
  *(undefined4 *)(param_3 + 2) = uVar5;
  bVar6 = *(byte *)*param_1;
  *param_1 = (long)((byte *)*param_1 + 1);
  uVar8 = *(ushort *)((long)param_3 + 0x14);
  uVar4 = bVar6 & 1;
  uVar3 = (bVar6 >> 3 & 1) << 10;
  uVar9 = uVar8 & 0xf800;
  uVar1 = (ushort)(bVar7 == 1) << 1;
  uVar2 = *(uint *)((long)param_3 + 4) & 0xf;
  *(ushort *)((long)param_3 + 0x14) = uVar9 | uVar8 & 0x3fc | uVar4 | uVar3 | uVar1;
  if (uVar2 != 0) {
    if (uVar2 != 2) {
      if (uVar2 == 1) {
        if (bVar7 == 0) {
          *(ushort *)((long)param_3 + 0x14) = uVar9 | uVar8 & 0x38c | uVar4 | uVar3 | 0xc;
          return 1;
        }
        if (0xfffffffd < bVar7 - 3) {
          *(ushort *)((long)param_3 + 0x14) = uVar9 | uVar8 & 900 | uVar4 | uVar3 | uVar1 | 4;
          return 1;
        }
      }
      return 0x38;
    }
    uVar2 = *(uint *)*param_1;
    *param_1 = (long)((uint *)*param_1 + 1);
    *(uint *)(param_3 + 4) = uVar2;
    param_3[3] = *param_1;
    *param_1 = *param_1 + (ulong)uVar2;
    *param_2 = *param_2 - *(int *)(param_3 + 4);
  }
  return 1;
}


