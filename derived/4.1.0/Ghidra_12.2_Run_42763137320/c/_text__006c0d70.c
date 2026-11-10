/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0d70; name: thunk_FUN_.text__006b1010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__006b1010
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               long param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char acStack_80 [32];
  
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffffff0f | param_8 << 4;
  uVar4 = FUN__text__006ebc20(param_3);
  *param_1 = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar6 = FUN__text__006c16f0();
  if ((uVar6 & 1) == 0) {
    if (param_5 == 0) {
      param_5 = 0;
      lVar8 = 0;
      param_7 = 0;
    }
    else {
      lVar8 = (param_6 - param_3) + lVar5;
    }
    FUN__text__006f2f70(lVar5,param_2,param_5,lVar8,param_7);
  }
  uVar2 = FUN__text__006c1830(param_2,*(undefined8 *)(lVar5 + 0x20));
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffff8 | uVar2;
  lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
  lVar8 = _DAT_008a5970;
  uVar1 = *(uint *)(lVar7 + 0x1c);
  if (1 < (int)uVar1) {
    lVar7 = 0x40;
    do {
      lVar9 = *(long *)(lVar5 + 0x20);
      uVar6 = FUN__text__006c1720(*(undefined8 *)
                                   (lVar9 + *(long *)(lVar8 + (ulong)uVar2 * 8) + lVar7));
      if ((uVar6 & 1) == 0) {
        FUN__text__006f32b0(*(undefined8 *)
                             (*(long *)(lVar9 + *(long *)(lVar8 + (ulong)uVar2 * 8) + lVar7) + 0x68)
                            ,param_2);
      }
      lVar7 = lVar7 + 0x40;
    } while ((ulong)uVar1 * 0x40 != lVar7);
  }
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar5 + 0x1c);
  lVar5 = FUN__text__006a0f04((long)(int)uVar1 << 5);
  if ((0 < (int)uVar1) && (lVar5 != 0)) {
    uVar6 = (ulong)uVar1;
    lVar7 = lVar5;
    do {
      FUN__text__006f4a74(lVar7);
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar6 != 0);
  }
  param_1[2] = lVar5;
  lVar5 = (long)(int)uVar1 * 4;
  uVar4 = FUN__text__006a0f04(lVar5);
  param_1[3] = uVar4;
  uVar4 = FUN__text__006a0f04(lVar5);
  param_1[4] = uVar4;
  uVar4 = FUN__text__006a0f04(lVar5);
  param_1[5] = uVar4;
  uVar4 = FUN__text__006a0f04(lVar5 * (int)param_8);
  param_1[6] = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar5 + 0x1c);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
      lVar9 = uVar6 * 0x40;
      uVar11 = *(undefined8 *)
                (*(long *)(*(long *)(lVar7 + 0x20) + lVar9 +
                          *(long *)(lVar8 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar4 = *(undefined8 *)
               (*(long *)(*(long *)(lVar7 + 0x20) + lVar9 +
                         *(long *)(lVar8 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar10 = *(undefined8 *)
                (*(long *)(*(long *)(lVar7 + 0x20) + lVar9 +
                          *(long *)(lVar8 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      uVar3 = FUN__text__006f3f40(uVar11,0,3,0x71ed43);
      lVar7 = uVar6 * 4;
      *(undefined4 *)(param_1[3] + lVar7) = uVar3;
      uVar3 = FUN__text__006f3f40(uVar4,3,3,0x712d70);
      *(undefined4 *)(param_1[4] + lVar7) = uVar3;
      uVar3 = FUN__text__006f3f40(uVar10,4,3,0x715942);
      *(undefined4 *)(param_1[5] + lVar7) = uVar3;
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      acStack_80[0x18] = '\0';
      acStack_80[0x19] = '\0';
      acStack_80[0x1a] = '\0';
      acStack_80[0x1b] = '\0';
      acStack_80[0x1c] = '\0';
      acStack_80[0x1d] = '\0';
      acStack_80[0x1e] = '\0';
      acStack_80[0x1f] = '\0';
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      if (0 < (int)param_8) {
        uVar12 = 0;
        do {
          nn::util::SNPrintf(acStack_80,0x20,(char *)0x71a6da,uVar12 & 0xffffffff);
          uVar3 = FUN__text__006f3f40(uVar10,4,2,acStack_80);
          *(undefined4 *)(param_1[6] + lVar5 + uVar12 * 4) = uVar3;
          uVar12 = uVar12 + 1;
        } while (param_8 != uVar12);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + (long)(int)param_8 * 4;
    } while (uVar6 != uVar1);
  }
  FUN__text__006b1440(param_1,param_2);
  param_1[7] = param_4;
  return;
}


