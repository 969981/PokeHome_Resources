/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031e400; name: FUN_.text__0031e400
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0031e400(byte *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  ulong uVar2;
  char *__s;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  char *local_70;
  size_t sStack_68;
  
  lVar7 = _DAT_008a2a58;
  if (*param_2 != 0x2f) {
    return 0x54;
  }
  pbVar3 = param_2 + param_3;
  __s = (char *)(param_4 + 1);
  bVar5 = *param_1;
  do {
    while( true ) {
      pbVar10 = param_2 + 1;
      if ((bVar5 & 0x7f) != 8) break;
      if (pbVar10 == pbVar3) {
        lVar11 = 0;
LAB__text__0031e780:
        __s[lVar11] = '\0';
        *param_4 = param_1;
        param_4[0x21] = lVar11;
        param_4[0x22] = 0;
        return 0;
      }
      lVar11 = 0;
      while (bVar5 = *pbVar10, bVar5 != 0x2f) {
        if (bVar5 == 0x7e) {
          if (pbVar10 + 1 == pbVar3) {
            return 0x54;
          }
          bVar5 = pbVar10[1];
          if (bVar5 == 0x30) {
            uVar12 = 0x7e;
          }
          else {
            if (bVar5 != 0x31) {
              return 0x54;
            }
            uVar12 = 0x2f;
          }
          pbVar10 = pbVar10 + 2;
          *(undefined1 *)((long)param_4 + lVar11 + 8) = uVar12;
        }
        else {
          pbVar10 = pbVar10 + 1;
          *(byte *)((long)param_4 + lVar11 + 8) = bVar5;
        }
        if (pbVar10 == pbVar3) {
          lVar11 = lVar11 + 1;
          goto LAB__text__0031e780;
        }
        bVar5 = *pbVar10;
        if (bVar5 == 0x2f) {
          lVar11 = lVar11 + 1;
          break;
        }
        if (lVar11 == 0xfe) {
          return 0x54;
        }
        if (bVar5 == 0x7e) {
          if (pbVar10 + 1 == pbVar3) {
            return 0x54;
          }
          bVar5 = pbVar10[1];
          if (bVar5 == 0x30) {
            uVar12 = 0x7e;
          }
          else {
            if (bVar5 != 0x31) {
              return 0x54;
            }
            uVar12 = 0x2f;
          }
          *(undefined1 *)((long)param_4 + lVar11 + 9) = uVar12;
          pbVar10 = pbVar10 + 2;
        }
        else {
          *(byte *)((long)param_4 + lVar11 + 9) = bVar5;
          pbVar10 = pbVar10 + 1;
        }
        lVar11 = lVar11 + 2;
        if (pbVar10 == pbVar3) goto LAB__text__0031e780;
      }
      __s[lVar11] = '\0';
      lVar11 = *(long *)(param_1 + 1);
      sStack_68 = strlen(__s);
      local_70 = __s;
      auVar13 = FUN__text__0031e7e0(lVar11,0,lVar11,*(undefined4 *)(lVar11 + 4),&local_70);
      puVar9 = auVar13._0_8_;
      if (auVar13._8_8_ == (ulong)*(uint *)(lVar11 + 4)) {
        return 2;
      }
      uVar4 = *puVar9;
      if ((ulong)uVar4 <= auVar13._8_8_) {
        iVar6 = auVar13._8_4_ - uVar4;
        lVar11 = LZCOUNT(iVar6 + 0x10);
        auVar13._8_4_ = iVar6 - *(int *)(lVar7 + (0x1c - lVar11) * 4);
        auVar13._0_8_ = *(long *)(puVar9 + 4) + (0x1b - lVar11) * 8;
        auVar13._12_4_ = 0;
      }
      param_1 = (byte *)(*(long *)(auVar13._0_8_ + 8) + auVar13._8_8_ * 0x20 + 0x10);
      bVar5 = *param_1;
      param_2 = pbVar10;
    }
    if ((bVar5 & 0x7f) != 7) {
      return 2;
    }
    if (pbVar10 == pbVar3) {
      *param_4 = param_1;
      *(undefined1 *)(param_4 + 1) = 0;
      param_4[0x21] = 0;
      param_4[0x22] = 0;
      return 0;
    }
    if (*pbVar10 == 0x2d) {
      uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 1) + 4);
      if (param_2 + 2 == pbVar3) goto LAB__text__0031e798;
      if (param_2[2] != 0x2f) {
        return 2;
      }
joined_r0x0031e4e4:
      pbVar10 = param_2 + 2;
    }
    else {
      if (*pbVar10 == 0x30) {
        if (param_2 + 2 == pbVar3) {
          uVar8 = 0;
          goto LAB__text__0031e798;
        }
        if (param_2[2] != 0x2f) {
          return 2;
        }
        uVar8 = 0;
        goto joined_r0x0031e4e4;
      }
      uVar8 = 0;
      while( true ) {
        if (pbVar10 == pbVar3) goto LAB__text__0031e798;
        if (*pbVar10 == 0x2f) break;
        uVar4 = *pbVar10 - 0x30;
        if (9 < uVar4) {
          return 2;
        }
        pbVar10 = pbVar10 + 1;
        uVar2 = uVar8 * 10 + (ulong)uVar4;
        bVar1 = uVar2 <= uVar8;
        uVar8 = uVar2;
        if (bVar1) {
          return 2;
        }
      }
    }
    if (pbVar10 == pbVar3) {
LAB__text__0031e798:
      *param_4 = param_1;
      *(undefined1 *)(param_4 + 1) = 0;
      param_4[0x21] = 0;
      param_4[0x22] = uVar8;
      return 0;
    }
    puVar9 = *(uint **)(param_1 + 1);
    if (puVar9[1] <= uVar8) {
      return 2;
    }
    if (*puVar9 <= uVar8) {
      iVar6 = (int)uVar8 - *puVar9;
      lVar11 = LZCOUNT(iVar6 + 0x10);
      puVar9 = (uint *)(*(long *)(puVar9 + 4) + (0x1b - lVar11) * 8);
      uVar8 = (ulong)(uint)(iVar6 - *(int *)(lVar7 + (0x1c - lVar11) * 4));
    }
    param_1 = (byte *)(*(long *)(puVar9 + 2) + uVar8 * 0x10);
    bVar5 = *param_1;
    param_2 = pbVar10;
  } while( true );
}


