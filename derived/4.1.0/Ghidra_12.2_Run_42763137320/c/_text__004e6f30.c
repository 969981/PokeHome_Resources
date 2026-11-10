/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6f30; name: FUN_.text__004e6f30
 */


void FUN__text__004e6f30(float param_1,long param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_2 + 100);
  fVar9 = *(float *)(param_2 + 0x68) + param_1 * *(float *)(param_2 + 0x58);
  *(float *)(param_2 + 0x68) = fVar9 - (float)(int)fVar9;
  *(int *)(param_2 + 100) = iVar2 + (int)fVar9;
  while( true ) {
    if (*(long *)(param_2 + 0x38) == 0 && (*(byte *)(param_2 + 0x6c) & 4) == 0) {
      return;
    }
    if (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60)) break;
    if (((*(long *)(param_2 + 0x38) != 0) && ((*(byte *)(param_2 + 0x6c) >> 1 & 1) != 0)) &&
       (bVar6 = *(byte *)(param_2 + 0x44), (char)bVar6 < -0x10)) {
      bVar4 = *(byte *)(param_2 + 0x45);
      bVar5 = *(byte *)(param_2 + 0x46);
      pbVar8 = (byte *)FUN__text__00400f80(0,0x20);
      if (pbVar8 != (byte *)0x0) {
        pbVar8[4] = bVar4;
        pbVar8[1] = bVar6 & 0xf;
        bVar4 = 0x80;
        if (bVar5 != 0 || (bVar6 & 0xf0) != 0x90) {
          bVar4 = bVar6 & 0xf0;
        }
        pbVar8[5] = bVar5;
        pbVar8[0xc] = 0;
        pbVar8[0xd] = 0;
        pbVar8[0xe] = 0;
        pbVar8[0xf] = 0;
        pbVar8[0x10] = 0;
        pbVar8[0x11] = 0;
        pbVar8[0x12] = 0;
        pbVar8[0x13] = 0;
        *pbVar8 = bVar4;
        pbVar8[0x18] = 0;
        pbVar8[0x19] = 0;
        pbVar8[0x1a] = 0;
        pbVar8[0x1b] = 0;
        pbVar8[0x1c] = 0;
        pbVar8[0x1d] = 0;
        pbVar8[0x1e] = 0;
        pbVar8[0x1f] = 0;
        *(float *)(pbVar8 + 0xc) =
             *(float *)(param_2 + 0x54) * (float)(uint)(*(int *)(param_2 + 0x60) - iVar2);
        uVar3 = *(undefined4 *)(param_2 + 0x5c);
        pbVar8[0x18] = 0;
        pbVar8[0x19] = 0;
        pbVar8[0x1a] = 0;
        pbVar8[0x1b] = 0;
        pbVar8[0x1c] = 0;
        pbVar8[0x1d] = 0;
        pbVar8[0x1e] = 0;
        pbVar8[0x1f] = 0;
        *(undefined4 *)(pbVar8 + 0x10) = uVar3;
        plVar1 = param_3 + 1;
        if (param_3[1] != 0) {
          plVar1 = (long *)(*param_3 + 0x18);
        }
        *plVar1 = (long)pbVar8;
        *param_3 = (long)pbVar8;
      }
    }
    uVar7 = FUN__text__004e6b40(param_2);
    if ((uVar7 & 1) == 0) {
      return;
    }
  }
  return;
}


