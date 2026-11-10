/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00450cf0; name: FUN_.text__00450cf0
 */


void FUN__text__00450cf0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xe0) + 0x18);
  plVar8 = (long *)(lVar7 + 0x18);
  if ((*(ushort *)(lVar7 + 0x220) & 1) == 0) {
    (**(code **)(*plVar8 + 0x70))(plVar8,0);
  }
  else {
    (**(code **)(*plVar8 + 0x78))(plVar8);
    if ((*(ushort *)(lVar7 + 0x220) >> 4 & 1) != 0) {
      (**(code **)(*plVar8 + 0x80))(plVar8);
    }
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0xe8) + 0x18);
    plVar8 = (long *)(lVar9 + 0x18);
    if ((*(ushort *)(lVar9 + 0x220) & 1) == 0) {
      (**(code **)(*plVar8 + 0x70))(plVar8,0);
    }
    else {
      (**(code **)(*plVar8 + 0x78))(plVar8);
      if ((*(ushort *)(lVar9 + 0x220) >> 4 & 1) != 0) {
        (**(code **)(*plVar8 + 0x80))(plVar8);
      }
    }
  }
  if ((*(ushort *)(lVar7 + 0x220) & 0x300) != 0) {
    uVar5 = FUN__text__00477300(lVar7);
    if (((uVar5 & 1) != 0) || (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined8 *)(param_1 + 0x110) = 0x200000001;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(lVar7 + 0x1c8) = 0;
    FUN__text__00476af0(lVar7);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  fVar11 = *(float *)(lVar7 + 0x88) * 0.05;
  fVar10 = 0.0;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (-37.0 <= fVar11) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar1 = fVar11 < 37.0;
      bVar2 = fVar11 == 37.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    uVar6 = (uint)(*(float *)(lVar7 + 0x88) * 1393317.6 + 1.0653532e+09);
    fVar10 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
             (float)(uVar6 & 0xff800000);
  }
  *(float *)(param_1 + 0x10) = *(float *)(lVar7 + 0x100) * fVar10;
  if (((*(byte *)(lVar7 + 0x170) >> 3 & 1) != 0) && (iVar4 = FUN__text__00479490(lVar7), iVar4 != 0)
     ) {
    thunk_FUN__text__00480320(lVar7,lVar7 + 0x1a8);
  }
  FUN__text__00459d00(param_1);
  return;
}


