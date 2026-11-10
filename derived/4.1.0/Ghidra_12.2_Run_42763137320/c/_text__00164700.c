/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164700; name: FUN_.text__00164700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00164700(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                        uint param_5)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  undefined8 uVar10;
  short sVar11;
  
  uVar4 = FUN__text__005f37f0(param_3,0);
  uVar4 = uVar4 & 0xffff;
  if (uVar4 < *(uint *)(param_1 + 0x1a0)) {
    if (*(short *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10) != 0) {
      FUN__text__005f335c(param_2,0x10);
      FUN__text__005f335c(param_2,2);
      uVar5 = FUN__text__0015a530(0xbd,7);
      FUN__text__005f335c(param_2,uVar5);
      FUN__text__005f335c(param_2,*(undefined2 *)
                                   (*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10));
    }
    uVar7 = FUN__text__0015a320(param_3);
    if ((uVar7 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        *(uint *)(param_1 + 0x234) = uVar4;
        lVar9 = (ulong)uVar4 * 0x18;
        FUN__text__00164020(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar9));
        uVar7 = FUN__text__0015a210(param_3);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar9);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN__text__005f3254(uVar10);
          FUN__text__005f325c(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18),
                              *(undefined8 *)(param_1 + 0x1e8),uVar5);
          FUN__text__00158a14(*_DAT_0089f538,*(undefined8 *)(param_1 + 0x1e8),uVar5);
          FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e8));
          uVar10 = *(undefined8 *)(param_1 + 0x188);
        }
        FUN__text__001643f0(param_1,param_2,uVar10,1,param_5 & 1);
      }
      else {
        if ((param_5 & 1) == 0) {
          uVar7 = FUN__text__0015a210(param_3);
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18);
          if ((uVar7 & 1) != 0) {
            uVar5 = FUN__text__005f3254(uVar10);
            FUN__text__005f325c(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18),
                                *(undefined8 *)(param_1 + 0x1e8),uVar5);
            FUN__text__00158a14(*_DAT_0089f538,*(undefined8 *)(param_1 + 0x1e8),uVar5);
            FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e8));
            uVar10 = *(undefined8 *)(param_1 + 0x188);
          }
        }
        else {
          psVar8 = *(short **)(param_1 + 0x1e8);
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18);
          uVar5 = FUN__text__005f3254(uVar10);
          FUN__text__005f325c(uVar10,psVar8,uVar5);
          do {
            while( true ) {
              sVar11 = *psVar8;
              if (sVar11 == 0) goto LAB__text__00164974;
              if (sVar11 != 0x10) break;
              psVar8 = (short *)FUN__text__005f3780(psVar8);
            }
            uVar7 = FUN__text__00157130(sVar11,1);
          } while ((uVar7 & 1) != 0);
          FUN__text__001589c8(*_DAT_0089f538,psVar8);
LAB__text__00164974:
          FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x170),psVar8);
          uVar10 = *(undefined8 *)(param_1 + 0x170);
        }
        FUN__text__005f3304(param_2,uVar10);
      }
    }
    else {
      uVar3 = FUN__text__005f37c0(param_3);
      if (uVar3 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN__text__005f37f0(param_3,1);
      }
      FUN__text__00164dd0(param_1,param_2,uVar4,uVar5);
    }
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18);
    psVar8 = (short *)FUN__text__005f3244(uVar10);
    uVar6 = FUN__text__005f324c(uVar10);
    sVar11 = 0;
    if (uVar6 != 0) {
      psVar1 = psVar8 + uVar6;
      do {
        while( true ) {
          sVar2 = *psVar8;
          if (sVar2 != 0x10) break;
          psVar8 = (short *)FUN__text__005f3780(psVar8);
          if (psVar1 <= psVar8) goto LAB__text__00164a00;
        }
        uVar7 = FUN__text__00157130(sVar2,1);
        psVar8 = psVar8 + 1;
        if ((uVar7 & 1) == 0) {
          sVar11 = sVar2;
        }
      } while (psVar8 < psVar1);
    }
LAB__text__00164a00:
    *(short *)(param_1 + 0x238) = sVar11;
    if (*(short *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10) != 0) {
      FUN__text__005f335c(param_2,0x10);
      FUN__text__005f335c(param_2,1);
      uVar5 = FUN__text__0015a530(0xbd,9);
      FUN__text__005f335c(param_2,uVar5);
    }
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  FUN__text__005f3780(param_3);
  return;
}


