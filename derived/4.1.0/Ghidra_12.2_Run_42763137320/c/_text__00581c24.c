/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00581c24; name: FUN_.text__00581c24
 */


void FUN__text__00581c24(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
    if ((*(byte *)(lVar5 + 0x18) >> 2 & 1) == 0) goto LAB__text__00581c44;
LAB__text__00581c84:
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
    *(uint *)(param_1 + 8) = (int)(*(float *)(lVar5 + 0x10) * fVar6) + 3U & 0xfffffffc;
    *(undefined1 *)(lVar5 + 0x18) = 0;
    uVar1 = *(ushort *)(param_2 + 2);
    *(ushort *)((long)param_2 + 0x12) = uVar1;
    sVar2 = *(short *)(param_1 + 0x14);
  }
  else {
    *(float *)(param_1 + 0x1c) = (*(float *)(lVar5 + 8) * 6.2831855) / *(float *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x18) >> 2 & 1) != 0) goto LAB__text__00581c84;
LAB__text__00581c44:
    *(undefined1 *)(lVar5 + 0x18) = 0;
    uVar1 = *(ushort *)(param_2 + 2);
    *(ushort *)((long)param_2 + 0x12) = uVar1;
    sVar2 = *(short *)(param_1 + 0x14);
  }
  if (sVar2 == 0) {
LAB__text__00581cd0:
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar1;
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    sVar2 = *(short *)((long)param_2 + 0x12);
  }
  else {
    uVar3 = *(int *)(param_1 + 8) * (int)sVar2;
    uVar4 = uVar3 - *(uint *)(param_1 + 0xc);
    if (uVar3 < *(uint *)(param_1 + 0xc) || uVar4 == 0) {
      uVar4 = 0;
    }
    else if (uVar1 < uVar4) goto LAB__text__00581cd0;
    *(short *)((long)param_2 + 0x12) = (short)uVar4;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uVar4 & 0xffff);
    *(undefined4 *)((long)param_2 + 0xc) = 0x11;
    sVar2 = *(short *)((long)param_2 + 0x12);
  }
  if (sVar2 != 0) {
    FUN__text__00582060(*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc),param_1 + 0x18,*param_2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
  }
  return;
}


