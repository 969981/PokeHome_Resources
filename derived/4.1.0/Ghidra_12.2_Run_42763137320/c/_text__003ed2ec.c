/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ed2ec; name: FUN_.text__003ed2ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ed2ec(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  param_1[7] = 0;
  lVar7 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar7 + 0x10;
  if (uVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  *_DAT_008a53a8 = 1;
  lVar4 = _DAT_008a53b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar8;
  param_1[9] = lVar4 + 0x40;
  param_1[10] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar8 == 0)) {
    lVar8 = FUN__text__005f52b0();
    param_1[0x15] = 0;
    param_1[0x12] = lVar8;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (uVar1 != 0) goto LAB__text__003ed3d0;
LAB__text__003ed3fc:
    lVar8 = FUN__text__005f52b0();
    param_1[0x18] = lVar8;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if (uVar1 != 0) goto LAB__text__003ed418;
LAB__text__003ed42c:
    lVar8 = FUN__text__005f52b0();
  }
  else {
    param_1[0x15] = 0;
    param_1[0x12] = lVar8;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
LAB__text__003ed3d0:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar8 == 0))
    goto LAB__text__003ed3fc;
    param_1[0x1b] = 0;
    param_1[0x18] = lVar8;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
LAB__text__003ed418:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar8 == 0))
    goto LAB__text__003ed42c;
  }
  param_1[0x1e] = lVar8;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar5 = _DAT_0089f970;
  pbVar10 = _DAT_0089f968;
  if (((*_DAT_0089f968 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_0089f968), iVar6 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_0089f750), plVar3 = _DAT_0089f758, iVar6 != 0)) {
      *_DAT_0089f758 = lVar7 + 0x10;
      plVar3[7] = 0;
      *(undefined4 *)(plVar3 + 8) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined4 *)(plVar3 + 6) = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
      }
      *(undefined4 *)(plVar3 + 10) = 0;
      lVar4 = _DAT_0089f760;
      plVar3[0xd] = 0;
      uVar9 = 0xcbf29ce484222645;
      *plVar3 = lVar4 + 0x10;
      plVar3[1] = lVar8;
      plVar3[9] = lVar4 + 0x48;
      pbVar11 = (byte *)*_DAT_0089f768;
      plVar3[0xb] = -0x340d631b7bddd9bb;
      plVar3[0xc] = (long)pbVar11;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        pbVar11 = pbVar11 + 1;
        uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar11;
      }
      plVar3[0xb] = uVar9;
      plVar3[0xd] = 0;
      plVar3[1] = 0;
      plVar3[2] = (long)plVar3;
      __cxa_guard_release(_DAT_0089f750);
    }
    plVar3 = _DAT_0089f758;
    *plVar5 = (long)_DAT_0089f758;
    (**(code **)(plVar3[9] + 0x10))();
    FUN__text__001001d0(_DAT_0089f960,plVar5,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  lVar8 = *plVar5;
  param_1[0x21] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (((*pbVar10 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_0089f968), plVar3 = _DAT_0089f758, iVar6 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_0089f750), iVar6 != 0)) {
      plVar3[7] = 0;
      *(undefined4 *)(plVar3 + 8) = 0;
      *plVar3 = lVar7 + 0x10;
      *(undefined4 *)(plVar3 + 6) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
      }
      *(undefined4 *)(plVar3 + 10) = 0;
      lVar8 = _DAT_0089f760;
      plVar3[0xd] = 0;
      uVar9 = 0xcbf29ce484222645;
      *plVar3 = lVar8 + 0x10;
      plVar3[1] = lVar7;
      plVar3[9] = lVar8 + 0x48;
      pbVar10 = (byte *)*_DAT_0089f768;
      plVar3[0xb] = -0x340d631b7bddd9bb;
      plVar3[0xc] = (long)pbVar10;
      bVar2 = *pbVar10;
      while (bVar2 != 0) {
        pbVar10 = pbVar10 + 1;
        uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
      }
      plVar3[0xb] = uVar9;
      plVar3[0xd] = 0;
      plVar3[1] = 0;
      plVar3[2] = (long)plVar3;
      __cxa_guard_release(_DAT_0089f750);
    }
    *plVar5 = (long)plVar3;
    (**(code **)(plVar3[9] + 0x10))(plVar3 + 9);
    FUN__text__001001d0(_DAT_0089f960,plVar5,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  lVar7 = *plVar5;
  param_1[0x22] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2a),false,0);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar7 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar7 == 0)) {
    lVar7 = FUN__text__005f52b0();
    param_1[0x30] = lVar7;
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
    param_1[0x33] = 0;
    if (uVar1 != 0) goto LAB__text__003ed4ec;
  }
  else {
    param_1[0x30] = lVar7;
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
    param_1[0x33] = 0;
LAB__text__003ed4ec:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar7 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar7 != 0))
    goto LAB__text__003ed504;
  }
  lVar7 = FUN__text__005f52b0();
LAB__text__003ed504:
  param_1[0x34] = lVar7;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x39),false,0);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  return;
}


