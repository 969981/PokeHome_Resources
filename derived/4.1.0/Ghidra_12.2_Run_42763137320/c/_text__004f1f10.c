/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f1f10; name: FUN_.text__004f1f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f1f10(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_4c;
  undefined4 local_44;
  char local_34 [4];
  
  FUN__text__00475d30();
  lVar1 = param_1 + 0xa0;
  fVar6 = log10f(*(float *)(param_1 + 700));
  uVar5 = (ulong)_DAT_0073b564;
  bVar3 = _DAT_0073b564 != 0x1a;
  *(float *)(param_1 + 0xa4) = fVar6 * 3986.3135;
  if (bVar3) {
    fVar6 = *(float *)(param_1 + 0x3bc);
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_1 + 0x140) >> 3 & 1) != 0)) {
      if (fVar6 != 0.0) {
        local_34[0] = '\0';
        local_4c = 0x403;
        local_44 = 0;
        lVar4 = FUN__text__004626a0(param_1 + 0x108,&local_4c,local_34);
        if (lVar4 == 0) {
          fVar6 = 0.0;
          fVar7 = 0.0;
          bVar2 = *(byte *)(param_1 + 0x150);
        }
        else {
          if (local_34[0] == '\0') {
            fVar7 = 0.0;
          }
          else {
            fVar7 = *(float *)(lVar4 + 0xc);
          }
          fVar6 = fVar7 + fVar6;
          *(float *)(lVar4 + 0xc) = fVar6;
          bVar2 = *(byte *)(param_1 + 0x150);
        }
        if (((bVar2 >> 3 & 1) != 0) ||
           ((fVar8 = *(float *)(lVar1 + uVar5 * 4), fVar7 == fVar8 && (fVar6 < fVar8)))) {
          *(ushort *)(param_1 + 0x162) = *(ushort *)(param_1 + 0x162) | 0x400;
        }
        else if (fVar8 < fVar6) {
          *(float *)(lVar1 + uVar5 * 4) = fVar6;
        }
      }
    }
    else {
      *(float *)(lVar1 + uVar5 * 4) = *(float *)(lVar1 + uVar5 * 4) + fVar6;
    }
  }
  uVar5 = (ulong)_DAT_0073b568;
  if (_DAT_0073b568 != 0x1a) {
    fVar6 = *(float *)(param_1 + 0x3c0);
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_1 + 0x140) >> 4 & 1) != 0)) {
      if (fVar6 != 0.0) {
        local_34[0] = '\0';
        local_4c = 0x404;
        local_44 = 0;
        lVar4 = FUN__text__004626a0(param_1 + 0x108,&local_4c,local_34);
        if (lVar4 == 0) {
          fVar6 = 0.0;
          fVar7 = 0.0;
          bVar2 = *(byte *)(param_1 + 0x150);
        }
        else {
          if (local_34[0] == '\0') {
            fVar7 = 0.0;
          }
          else {
            fVar7 = *(float *)(lVar4 + 0xc);
          }
          fVar6 = fVar7 + fVar6;
          *(float *)(lVar4 + 0xc) = fVar6;
          bVar2 = *(byte *)(param_1 + 0x150);
        }
        if (((bVar2 >> 4 & 1) != 0) ||
           ((fVar8 = *(float *)(lVar1 + uVar5 * 4), fVar7 == fVar8 && (fVar6 < fVar8)))) {
          *(ushort *)(param_1 + 0x162) = *(ushort *)(param_1 + 0x162) | 0x400;
          return;
        }
        if (fVar8 < fVar6) {
          *(float *)(lVar1 + uVar5 * 4) = fVar6;
          return;
        }
      }
    }
    else {
      *(float *)(lVar1 + uVar5 * 4) = *(float *)(lVar1 + uVar5 * 4) + fVar6;
    }
  }
  return;
}


