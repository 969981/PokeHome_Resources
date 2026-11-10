/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb6f0; name: FUN_.text__001fb6f0
 */


void FUN__text__001fb6f0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auStack_1d38 [3684];
  int aiStack_ed4 [921];
  long local_70 [2];
  
  lVar10 = DAT_008e2080;
  if (((DAT_008e2080 == 0) || (lVar8 = *(long *)(DAT_008e2080 + 0x70), lVar8 == 0)) ||
     (lVar11 = *(long *)(DAT_008e2080 + 0x290), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar9 = (long *)(lVar11 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar4 = FUN__text__001933c8(lVar8);
  local_70[0] = lVar11;
  uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN__text__001fb528(uVar6,local_70,lVar10 + 0xa4);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  uVar6 = FUN__text__00306bc4(lVar11);
  FUN__text__005fc870(param_1 + 0xf0,uVar6,uVar4);
  *(undefined4 *)(param_1 + 0x1dbc) = 0;
  *(undefined4 *)(param_1 + 0x2c24) = 0;
  *(undefined4 *)(param_1 + 0x3a8c) = 0;
  *(undefined4 *)(param_1 + 0x48f4) = 0;
  *(undefined4 *)(param_1 + 0x575c) = 0;
  *(undefined4 *)(param_1 + 0x65c4) = 0;
  *(undefined4 *)(param_1 + 0x742c) = 0;
  *(undefined4 *)(param_1 + 0x8294) = 0;
  *(undefined4 *)(param_1 + 0x90fc) = 0;
  *(undefined4 *)(param_1 + 0x9f64) = 0;
  *(undefined4 *)(param_1 + 0xadcc) = 0;
  *(undefined4 *)(param_1 + 0x1f924) = 0;
  *(undefined4 *)(param_1 + 0x2078c) = 0;
  *(undefined4 *)(param_1 + 0x215f4) = 0;
  *(undefined4 *)(param_1 + 0x2245c) = 0;
  *(undefined4 *)(param_1 + 0x232c4) = 0;
  *(undefined4 *)(param_1 + 0xbc34) = 0;
  *(undefined4 *)(param_1 + 0xca9c) = 0;
  *(undefined4 *)(param_1 + 0xd904) = 0;
  *(undefined4 *)(param_1 + 0xe76c) = 0;
  *(undefined4 *)(param_1 + 0xf5d4) = 0;
  *(undefined4 *)(param_1 + 0x1043c) = 0;
  *(undefined4 *)(param_1 + 0x2412c) = 0;
  *(undefined4 *)(param_1 + 0x24f94) = 0;
  *(undefined4 *)(param_1 + 0x25dfc) = 0;
  *(undefined4 *)(param_1 + 0x26c64) = 0;
  *(undefined4 *)(param_1 + 0x27acc) = 0;
  *(undefined4 *)(param_1 + 0x112a4) = 0;
  *(undefined4 *)(param_1 + 0x1210c) = 0;
  *(undefined4 *)(param_1 + 0x12f74) = 0;
  *(undefined4 *)(param_1 + 0x13ddc) = 0;
  *(undefined4 *)(param_1 + 0x14c44) = 0;
  *(undefined4 *)(param_1 + 0x15aac) = 0;
  *(undefined4 *)(param_1 + 0x16914) = 0;
  *(undefined4 *)(param_1 + 0x1777c) = 0;
  *(undefined4 *)(param_1 + 0x185e4) = 0;
  *(undefined4 *)(param_1 + 0x1944c) = 0;
  *(undefined4 *)(param_1 + 0x1a2b4) = 0;
  *(undefined4 *)(param_1 + 0x1b11c) = 0;
  *(undefined4 *)(param_1 + 0x1bf84) = 0;
  *(undefined4 *)(param_1 + 0x1cdec) = 0;
  *(undefined4 *)(param_1 + 0x1dc54) = 0;
  *(undefined4 *)(param_1 + 0x1eabc) = 0;
  *(undefined4 *)(param_1 + 0x28934) = 0;
  *(undefined4 *)(param_1 + 0x2979c) = 0;
  *(undefined4 *)(param_1 + 0x2a604) = 0;
  *(undefined4 *)(param_1 + 0x2b46c) = 0;
  *(undefined4 *)(param_1 + 0x2c2d4) = 0;
  lVar10 = *(long *)(lVar10 + 600);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x3b8) + 0x10))(lVar10 + 0x3b8);
  }
  uVar2 = *(uint *)(param_1 + 0xf54);
  if (uVar2 != 0) {
    uVar13 = 0;
    do {
      if (uVar13 < 0x399) {
        iVar5 = *(int *)(param_1 + 0xf0 + uVar13 * 4);
        if (iVar5 != *(int *)(param_1 + 0xa8)) {
LAB__text__001fb940:
          if (((iVar5 != *(int *)(param_1 + 0xac)) && (iVar5 != *(int *)(param_1 + 0xb0))) &&
             (iVar5 != *(int *)(param_1 + 0xb4))) {
            uVar7 = FUN__text__003d02dc(lVar10,iVar5);
            lVar8 = param_1 + (uVar7 & 0xffffffff) * 0xe68;
            uVar3 = *(uint *)(lVar8 + 0x1dbc);
            *(uint *)(lVar8 + 0x1dbc) = uVar3 + 1;
            *(int *)(lVar8 + (ulong)uVar3 * 4 + 0xf58) = iVar5;
            uVar3 = *(uint *)(param_1 + 0x2c2d4);
            *(uint *)(param_1 + 0x2c2d4) = uVar3 + 1;
            *(int *)(param_1 + 0x2b470 + (ulong)uVar3 * 4) = iVar5;
          }
        }
      }
      else {
        iVar5 = 0;
        if (*(int *)(param_1 + 0xa8) != 0) goto LAB__text__001fb940;
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  memset(aiStack_ed4,0,0xe64);
  iVar5 = FUN__text__003d02d0(lVar10);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      uVar13 = FUN__text__003d02b0(lVar10,iVar12);
      aiStack_ed4[uVar13 & 0xffffffff] = iVar12;
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  lVar8 = param_1 + 0xf58;
  lVar11 = 0x2f;
  do {
    uVar2 = *(uint *)(lVar8 + 0xe64);
    memcpy(auStack_1d38,aiStack_ed4,0xe64);
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT((ulong)uVar2) * -2 + 0x7e;
    }
    FUN__text__001ff590(lVar8,lVar8 + (ulong)uVar2 * 4,auStack_1d38,lVar1,1);
    lVar8 = lVar8 + 0xe68;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FUN__text__001fc3c0(param_1);
  (**(code **)(*(long *)(lVar10 + 0x3b8) + 0x18))(lVar10 + 0x3b8);
  (**(code **)(*plVar9 + 0x18))();
  return;
}


