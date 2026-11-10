/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ee50; name: FUN_.text__0068ee50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068ee50(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5,
                        undefined8 param_6)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ScalableFontEngine *this;
  undefined1 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  void *pvVar25;
  long lVar26;
  ulong uVar27;
  size_t __n;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined1 uStack_9c7;
  undefined2 uStack_9c6;
  short sStack_9c4;
  short sStack_9c2;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined2 uStack_9b0;
  short local_9ae;
  undefined2 local_9ac;
  short sStack_9aa;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  long local_998;
  undefined8 uStack_990;
  ushort local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*param_3 & *param_3 - 1) == 0) && (*(long *)(param_3 + 2) != 0)) {
    puVar1 = param_3 + 0x5a86;
    uVar13 = *puVar1;
    uVar17 = (ulong)uVar13;
    if (0xffffffdf < uVar13 - 0x21) {
      uVar22 = 0;
      lVar19 = 0x16a1c;
      do {
        if (*(int *)((long)param_3 + lVar19) - 0x11U < 0xfffffff0) {
          uVar22 = 0;
          goto LAB__text__0068efa8;
        }
        uVar22 = (ulong)(uint)(*(int *)((long)param_3 + lVar19) + (int)uVar22);
        uVar17 = uVar17 - 1;
        lVar19 = lVar19 + 4;
      } while (uVar17 != 0);
      uVar17 = 0;
      iVar24 = 0;
      lVar19 = param_1 + 0x18a8;
      do {
        while (*puVar1 <= uVar17) {
          *(undefined1 *)(lVar19 + uVar17 + -0x20) = 0;
          *(undefined8 *)(lVar19 + uVar17 * 8) = 0;
          uVar17 = uVar17 + 1;
          if (uVar17 == 0x20) goto LAB__text__0068ef64;
        }
        *(char *)(lVar19 + uVar17 + -0x20) = (char)param_3[uVar17 + 0x5a87];
        *(ulong *)(lVar19 + uVar17 * 8) = param_1 + (ulong)(byte)iVar24 + 0x19a8;
        iVar24 = iVar24 + param_3[uVar17 + 0x5a87];
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x20);
LAB__text__0068ef64:
      lVar19 = 0;
      do {
        pcVar20 = (char *)(param_1 + 0x19a9 + lVar19);
        cVar11 = (char)lVar19;
        pcVar20[-1] = cVar11;
        *pcVar20 = cVar11 + '\x01';
        lVar19 = lVar19 + 4;
        pcVar20[1] = cVar11 + '\x02';
        pcVar20[2] = cVar11 + '\x03';
      } while (lVar19 != 0x200);
      uVar13 = *puVar1;
LAB__text__0068efa8:
      *(uint *)(param_1 + 0x1884) = uVar13;
      *(char *)(param_1 + 0x1bd1) = (char)param_3[0x5cae];
      *(uint *)(param_1 + 0x1bd4) = param_3[0x5caf];
      lVar19 = _DAT_008a3820;
      if (*(long *)(param_3 + 0x5cb0) != 0) {
        lVar19 = *(long *)(param_3 + 0x5cb0);
      }
      *(long *)(param_1 + 0x1bd8) = lVar19;
      puVar4 = &LAB__text__00691a18;
      if (*(undefined1 **)(param_3 + 0x5cb2) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(param_3 + 0x5cb2);
      }
      *(undefined1 **)(param_1 + 0x1be0) = puVar4;
      puVar4 = &LAB__text__00691a98;
      if (*(undefined1 **)(param_3 + 0x5cb4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(param_3 + 0x5cb4);
      }
      *(undefined1 **)(param_1 + 0x1be8) = puVar4;
      uVar15 = (**(code **)(param_3 + 2))((long)((int)uVar22 * 0x32),4,*(undefined8 *)(param_3 + 4))
      ;
      *(undefined8 *)(param_1 + 0x18) = uVar15;
      uVar27 = -(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2;
      lVar26 = (long)(int)uVar22;
      uVar15 = (**(code **)(param_3 + 2))
                         ((-(uVar22 >> 0x1f) & 0xffffffe000000000 | uVar22 << 5) - uVar27,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf0) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar27,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf8) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c00) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c08) = uVar15;
      uVar17 = -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c10) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c18) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c20) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c28) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar27,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c30) = uVar15;
      uVar17 = -(uVar22 >> 0x1f) & 0xffffffc000000000 | uVar22 << 6;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c38) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c40) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))
                         (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c48) = uVar15;
      *(uint *)(param_1 + 0x28) = *param_3;
      uVar13 = param_3[1];
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1bcc) = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 0;
      *(uint *)(param_1 + 0x2c) = uVar13;
      *(undefined4 *)(param_1 + 0x1ba8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x1bbc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bac) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bb4) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x1c50) = *(undefined1 *)((long)param_3 + 0x172d9);
      this = (ScalableFontEngine *)(**(code **)(param_3 + 2))(0xb8,4,*(undefined8 *)(param_3 + 4));
      *(ScalableFontEngine **)(param_1 + 8) = this;
      nn::fontll::ScalableFontEngine::ScalableFontEngine(this);
      lVar19 = 0xb8;
      if (*(char *)(param_1 + 0x1bd1) != '\0') {
        lVar19 = (ulong)*(uint *)(param_1 + 0x1bd4) * 0xb8;
      }
      uVar15 = (**(code **)(param_3 + 2))(lVar19,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x10) = uVar15;
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
        lVar19 = 0;
        uVar17 = 1;
        do {
          nn::fontll::ScalableFontEngine::ScalableFontEngine
                    ((ScalableFontEngine *)(*(long *)(param_1 + 0x10) + lVar19));
          if (*(char *)(param_1 + 0x1bd1) == '\0') break;
          lVar19 = lVar19 + 0xb8;
          bVar12 = uVar17 < *(uint *)(param_1 + 0x1bd4);
          uVar17 = uVar17 + 1;
        } while (bVar12);
      }
      pvVar25 = *(void **)(param_1 + 8);
      uVar13 = (**(code **)(param_3 + 2))
                         (*(undefined8 *)(param_3 + 0x5aa8),4,*(undefined8 *)(param_3 + 4));
      nn::fontll::ScalableFontEngine::Initialize(pvVar25,uVar13);
      nn::fontll::ScalableFontEngine::GetError();
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
        lVar19 = 0;
        uVar17 = 1;
        do {
          lVar18 = *(long *)(param_1 + 0x10);
          if ((char)param_3[0x5aac] == '\0') {
            uVar13 = (**(code **)(param_3 + 2))
                               (*(long *)(param_3 + 0x5aaa) * lVar26,4,*(undefined8 *)(param_3 + 4))
            ;
          }
          else {
            uVar13 = (**(code **)(param_3 + 2))
                               (*(long *)(param_3 + 0x5aaa),4,*(undefined8 *)(param_3 + 4));
          }
          nn::fontll::ScalableFontEngine::Initialize((void *)(lVar18 + lVar19),uVar13);
          nn::fontll::ScalableFontEngine::GetError();
          if (*(char *)(param_1 + 0x1bd1) == '\0') break;
          lVar19 = lVar19 + 0xb8;
          bVar12 = uVar17 < *(uint *)(param_1 + 0x1bd4);
          uVar17 = uVar17 + 1;
        } while (bVar12);
      }
      uVar17 = (ulong)*(uint *)(param_1 + 0x1884);
      if (*(uint *)(param_1 + 0x1884) != 0) {
        uVar22 = 0;
        uVar27 = 0;
        do {
          pbVar2 = (byte *)(param_1 + uVar22 + 0x1888);
          if (*pbVar2 != 0) {
            uVar17 = 0;
            uVar27 = (ulong)(int)uVar27;
            do {
              pvVar25 = *(void **)(param_3 + uVar22 * 0x20 + uVar17 * 2 + 6);
              if ((param_3[uVar22 * 0x10 + uVar17 + 0xe86] & 0xfffffffe) == 2) {
                pvVar25 = (void *)nn::fontll::ScalableFontEngineHelper::Decode
                                            (pvVar25,param_3[uVar22 * 0x20 + uVar17 * 2 + 0x406],
                                             (_func_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong
                                              *)0x0,(uchar *)0x0);
              }
              iVar24 = (int)uVar27;
              *(int *)(*(long *)(param_1 + 0x1bf8) + uVar27 * 4) =
                   (int)((float)param_3[uVar22 * 0x10 + uVar17 + 0x806] * 65536.0);
              lVar19 = uVar17 + uVar22 * 0x10;
              *(undefined1 *)(*(long *)(param_1 + 0x1c00) + uVar27) =
                   *(undefined1 *)((long)param_3 + lVar19 + 0x2818);
              pcVar20 = (char *)((long)param_3 + lVar19 + 0x4418);
              *(char *)(*(long *)(param_1 + 0x1c08) + uVar27) = *pcVar20;
              lVar26 = uVar17 * 2 + uVar22 * 0x20;
              *(undefined2 *)(*(long *)(param_1 + 0x1c10) + uVar27 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4618);
              pcVar3 = (char *)((long)param_3 + lVar19 + 0x4a18);
              *(char *)(*(long *)(param_1 + 0x1c18) + uVar27) = *pcVar3;
              *(undefined1 *)(*(long *)(param_1 + 0x1c20) + uVar27) =
                   *(undefined1 *)((long)param_3 + lVar19 + 0x4c18);
              *(undefined2 *)(*(long *)(param_1 + 0x1c28) + uVar27 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4e18);
              *(uint *)(*(long *)(param_1 + 0x1c30) + uVar27 * 4) =
                   param_3[uVar22 * 0x10 + uVar17 + 0x1886];
              lVar19 = uVar27 * 0x40;
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a86];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a86];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 4) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a87];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 4) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a87];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 8) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a88];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 8) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a88];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0xc) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a89];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0xc) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a89];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8a];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8a];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8b];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8b];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8c];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8c];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x1c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8d];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x1c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8d];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x20) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8e];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x20) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8e];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x24) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8f];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x24) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8f];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x28) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a90];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x28) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a90];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x2c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a91];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x2c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a91];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x30) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a92];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x30) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a92];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x34) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a93];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x34) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a93];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x38) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a94];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x38) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a94];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x3c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a95];
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x3c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a95];
              nn::fontll::ScalableFontEngine::LoadFont
                        (*(char **)(param_1 + 8),
                         (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar24 * 0x32)),
                         (uint)pvVar25,param_3[uVar22 * 0x10 + uVar17 + 0x5aae]);
              nn::fontll::ScalableFontEngine::GetError();
              if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
                lVar19 = 0;
                uVar23 = 1;
                do {
                  nn::fontll::ScalableFontEngine::LoadFont
                            ((char *)(*(long *)(param_1 + 0x10) + lVar19),
                             (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar24 * 0x32)),
                             (uint)pvVar25,param_3[uVar22 * 0x10 + uVar17 + 0x5aae]);
                  nn::fontll::ScalableFontEngine::GetError();
                  if (*(char *)(param_1 + 0x1bd1) == '\0') break;
                  lVar19 = lVar19 + 0xb8;
                  bVar12 = uVar23 < *(uint *)(param_1 + 0x1bd4);
                  uVar23 = uVar23 + 1;
                } while (bVar12);
              }
              if (*(int *)(param_1 + 0x1ba8) != iVar24) {
                nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8));
                nn::fontll::ScalableFontEngine::GetError();
                nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8));
                nn::fontll::ScalableFontEngine::GetError();
                uVar15 = *(undefined8 *)(param_1 + 8);
                uVar16 = 0;
                if (*(char *)(*(long *)(param_1 + 0x1c00) + (uVar27 & 0xffffffff)) != '\0') {
                  nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar15);
                  uVar15 = *(undefined8 *)(param_1 + 8);
                  uVar16 = 2;
                }
                nn::fontll::ScalableFontEngine::SetFlags(uVar15,uVar16);
                nn::fontll::ScalableFontEngine::GetError();
                *(int *)(param_1 + 0x1ba8) = iVar24;
              }
              memset(&local_9c8,0,0x93c);
              nn::fontll::ScalableFontEngine::GetFontMetrics(*(Metrics **)(param_1 + 8));
              nn::fontll::ScalableFontEngine::GetError();
              sVar10 = *(short *)((long)param_3 + lVar26 + 0x5a18);
              if (sVar10 != 0) {
                sStack_9c4 = sVar10;
                sStack_9aa = sVar10;
              }
              sVar10 = *(short *)((long)param_3 + lVar26 + 0x5e18);
              if (sVar10 != 0) {
                local_9ae = -sVar10;
                sStack_9c2 = sVar10;
              }
              lVar19 = uVar27 * 0x1c;
              fVar29 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 8) = (float)(int)sStack_9aa / fVar29
              ;
              fVar29 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0xc) =
                   (float)((int)sStack_9aa - (int)local_9ae) / fVar29;
              fVar29 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19) = (float)(int)sStack_9c4 / fVar29;
              fVar29 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 4) =
                   (float)((int)sStack_9c2 + (int)sStack_9c4) / fVar29;
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x10 + uVar17 + 0xa86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x10 + uVar17 + 0xc86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x10 + uVar17 + 0x1486];
              if ((((param_3[uVar22 * 0x10 + uVar17 + 0xe86] | 2) == 3) && (*pcVar20 == '\0')) &&
                 (*pcVar3 == '\0')) {
                uVar15 = nn::fontll::ScalableFontEngine::InitializeOtfKerningTable
                                   (*(_func_void_ptr_ulong_ulong_void_ptr **)(param_1 + 8),
                                    *(void **)(param_3 + 2),SUB81(*(undefined8 *)(param_3 + 4),0));
              }
              else {
                uVar15 = 0;
              }
              uVar17 = uVar17 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x1c48) + uVar27 * 8) = uVar15;
              uVar27 = uVar27 + 1;
            } while (uVar17 < *pbVar2);
            uVar17 = (ulong)*(uint *)(param_1 + 0x1884);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar17);
        if (uVar17 != 0) {
          uVar22 = 0;
          lVar19 = 0;
          do {
            pbVar2 = (byte *)(param_1 + uVar22 + 0x1888);
            bVar9 = *pbVar2;
            uVar27 = (ulong)bVar9;
            uVar23 = 0;
            if (uVar27 != 0) {
              uVar28 = 0;
              lVar26 = lVar19 * 0x1c;
              uVar31 = 0;
              fVar29 = 0.0;
              uVar30 = 0;
              puVar21 = (undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 8);
              pcVar20 = (char *)(*(long *)(param_1 + 0x1c20) + lVar19);
              do {
                if ((*pcVar20 == '\0') && (fVar29 < (float)puVar21[1])) {
                  uVar28 = puVar21[-1];
                  uVar30 = *puVar21;
                  uVar31 = puVar21[-2];
                  fVar29 = (float)puVar21[1];
                }
                uVar27 = uVar27 - 1;
                puVar21 = puVar21 + 7;
                pcVar20 = pcVar20 + 1;
              } while (uVar27 != 0);
              if (bVar9 == 0) {
                uVar23 = 0;
              }
              else {
                uVar17 = 0;
                do {
                  uVar17 = uVar17 + 1;
                  *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 8) = uVar30;
                  *(float *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 0xc) = fVar29;
                  *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26) = uVar31;
                  lVar18 = *(long *)(param_1 + 0x1bf0) + lVar26;
                  lVar26 = lVar26 + 0x1c;
                  *(undefined4 *)(lVar18 + 4) = uVar28;
                  uVar23 = (ulong)*pbVar2;
                } while (uVar17 < uVar23);
                uVar17 = (ulong)*(uint *)(param_1 + 0x1884);
              }
            }
            uVar22 = uVar22 + 1;
            lVar19 = lVar19 + uVar23;
          } while (uVar22 < uVar17);
        }
      }
      iVar24 = *(int *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0x2c);
      FUN__text__0068d4cc(param_1 + 0x1ea8,*(undefined8 *)(param_1 + 0x20),8,iVar24,iVar6,1,1);
      uVar28 = *(undefined4 *)(param_1 + 0x28);
      uVar31 = *(undefined4 *)(param_1 + 0x2c);
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_9e8 = 0;
      uStack_9e4 = 0;
      uStack_9e0 = 0;
      local_9f8 = 0;
      uStack_9f4 = 0;
      uStack_9f0 = 0;
      uStack_9ec = 0;
      local_a08 = 0;
      uStack_a00 = 0;
      uStack_9fc = 0;
      FUN__text__006ebe40(&local_a08);
      uVar15 = local_a08;
      uVar30 = *(undefined4 *)(param_1 + 0x28);
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
      uStack_9ec = 1;
      local_9e8 = 1;
      uStack_9fc = 0x201;
      local_9f8 = 0x20;
      local_a08._4_4_ = SUB84(uVar15,4);
      local_a08._0_4_ = CONCAT22(1,CONCAT11(2,(undefined1)local_a08));
      local_a08 = CONCAT26(1,(undefined6)local_a08);
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      uStack_9f4 = uVar28;
      uStack_9f0 = uVar31;
      FUN__text__006ebe40(&local_9c8);
      uStack_9b0 = (undefined2)uVar7;
      local_9ae = (short)((uint)uVar7 >> 0x10);
      local_9ac = 1;
      sStack_9aa = 0;
      uStack_9a8 = 1;
      uStack_9c7 = 2;
      uStack_9bc = 0x201;
      local_9b8 = 0x20;
      uStack_9c6 = 1;
      sStack_9c2 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_9b4 = uVar30;
      FUN__text__006ebc14(&local_88);
      local_88 = CONCAT44(local_88._4_4_,0x22);
      uVar17 = FUN__text__006f5764(param_2,&local_9c8);
      uVar22 = FUN__text__006ee660(param_2,&local_88);
      iVar5 = *(int *)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x2c);
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN__text__006ebc14(&local_9c8);
      local_9c8 = 0x22;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      iVar14 = FUN__text__006ee668(param_2,&local_9c8);
      uVar13 = (iVar14 + iVar8 * iVar5) - 1U & -iVar14;
      __n = (size_t)(int)uVar13;
      if (param_4 == 0) {
        if (uVar17 <= uVar22) {
          uVar17 = uVar22;
        }
        pvVar25 = (void *)(**(code **)(param_3 + 2))(__n,uVar17,*(undefined8 *)(param_3 + 4));
        *(void **)(param_1 + 0x20) = pvVar25;
        memset(pvVar25,0,__n);
        local_9b8 = 0;
        uStack_9b4 = 0;
        uStack_9b0 = 0;
        local_9ae = 0;
        local_9ac = 0;
        sStack_9aa = 0;
        local_9c8 = 0;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = 0;
        sStack_9c2 = 0;
        local_9c0 = 0;
        uStack_9bc = 0;
        FUN__text__006ebc14(&local_9c8);
        local_9c8 = 0x22;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = (short)uVar13;
        sStack_9c2 = (short)(uVar13 >> 0x10);
        local_9c0 = (undefined4)*(undefined8 *)(param_1 + 0x20);
        uStack_9bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
        param_4 = param_1 + 0x1d78;
        FUN__text__006ee680(param_4,param_2,&local_9c8);
        FUN__text__006f5944(param_1 + 0x1c58,param_2,&local_a08,param_4,0,iVar6 * iVar24);
        param_5 = 0;
      }
      else {
        lVar19 = FUN__text__006ee750(param_4);
        *(void **)(param_1 + 0x20) = (void *)(lVar19 + param_5);
        memset((void *)(lVar19 + param_5),0,__n);
        FUN__text__006ee764(param_4);
        FUN__text__006f5944(param_1 + 0x1c58,param_2,&local_a08,param_4,param_5,param_6);
      }
      *(long *)(param_1 + 0x1e98) = param_4;
      *(long *)(param_1 + 0x1ea0) = param_5;
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN__text__006ebe70(&local_9c8);
      local_9c8 = 1;
      sStack_9c4 = 0x201;
      sStack_9c2 = 0;
      local_9c0 = 0x2010101;
      local_998 = param_1 + 0x1c58;
      FUN__text__006f5a88(param_1 + 0x1d30,param_2,&local_9c8);
      FUN__text__00691ac0(param_1 + 0x30,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),
                          param_3[0x5aad]);
      if ((char)param_3[0x5cb6] != '\0') {
        nn::fontll::ScalableFontEngine::SetAutoHint(SUB81(*(undefined8 *)(param_1 + 8),0));
      }
    }
  }
  return;
}


