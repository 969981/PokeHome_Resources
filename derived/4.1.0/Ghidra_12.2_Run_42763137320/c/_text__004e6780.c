/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6780; name: FUN_.text__004e6780
 */


undefined8 FUN__text__004e6780(long param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  uVar4 = bVar1 & 0xfc;
  *(char *)(param_1 + 0x6c) = (char)uVar4;
  if ((param_2 != (ushort *)0x0) && (param_3 != 0)) {
    uVar4 = uVar4 | 1;
    *(ushort **)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x10) = param_3;
    *(char *)(param_1 + 0x6c) = (char)uVar4;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar2 != 0) {
      fVar5 = *(float *)(param_2 + 1);
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(float *)(param_1 + 0x50) = fVar5;
      fVar5 = fVar5 * (float)uVar2;
      *(ushort **)(param_1 + 0x28) = param_2 + 3;
      *(float *)(param_1 + 0x58) = fVar5 * 1.6666667e-05;
      *(ulong *)(param_1 + 0x30) = (long)param_2 + (ulong)param_3;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar4 = bVar1 | 3;
      *(char *)(param_1 + 0x6c) = (char)uVar4;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar5;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar3 = FUN__text__004e6884(param_1);
      uVar4 = 2;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      uVar4 = *(byte *)(param_1 + 0x6c) & 0xfffffffd | uVar4;
      *(char *)(param_1 + 0x6c) = (char)uVar4;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      return 1;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 2;
}


