/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045e544; name: FUN_.text__0045e544
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045e544(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  undefined4 local_38;
  char local_34 [4];
  
  *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) | 0xf000000007f80020;
  *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | 0x13f;
  FUN__text__0045e0f0();
  uVar3 = (ulong)_DAT_0073b558;
  if (_DAT_0073b558 != 0x1a) {
    fVar6 = *(float *)(param_2 + 0x10);
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_2 + 0xa0) & 1) != 0)) {
      if (fVar6 != 0.0) {
        local_34[0] = '\0';
        local_40 = 0;
        local_38 = 0;
        lVar2 = FUN__text__004626a0(param_2 + 0x68,&local_40,local_34);
        if (lVar2 == 0) {
          fVar6 = 0.0;
          fVar4 = 0.0;
          bVar1 = *(byte *)(param_2 + 0xb0);
        }
        else {
          if (local_34[0] == '\0') {
            fVar4 = 0.0;
          }
          else {
            fVar4 = *(float *)(lVar2 + 0xc);
          }
          fVar6 = fVar4 + fVar6;
          *(float *)(lVar2 + 0xc) = fVar6;
          bVar1 = *(byte *)(param_2 + 0xb0);
        }
        if (((bVar1 & 1) != 0) ||
           ((fVar5 = *(float *)(param_2 + uVar3 * 4), fVar4 == fVar5 && (fVar6 < fVar5)))) {
          *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
        }
        else if (fVar5 < fVar6) {
          *(float *)(param_2 + uVar3 * 4) = fVar6;
        }
      }
    }
    else {
      *(float *)(param_2 + uVar3 * 4) = *(float *)(param_2 + uVar3 * 4) + fVar6;
    }
  }
  if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
    *(undefined4 *)(param_2 + 0x7c) = **(undefined4 **)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 8);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xc);
  }
  *(ushort *)(param_2 + 0xc2) =
       *(ushort *)(param_2 + 0xc2) & 0xfffe |
       (ushort)((uint)*(undefined4 *)(param_1 + 0xd2) >> 0x12) & 1;
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0xa0);
  return;
}


