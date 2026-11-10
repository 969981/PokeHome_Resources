/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00409460; name: FUN_.text__00409460
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00409460(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  char *__s;
  uint uVar12;
  uint uVar13;
  ulong auStack_90 [2];
  ulong *local_80;
  undefined8 local_78;
  undefined4 local_64;
  
  FUN__text__004881d0(*(undefined4 *)(param_1 + 0x60),auStack_90,&local_64);
  iVar6 = FUN__text__004892a0(local_64,param_1 + 200,auStack_90,3);
  lVar3 = DAT_00ae99f8;
  if (iVar6 == 1) {
    for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(lVar3 + 100) == *(int *)(param_1 + 100)) {
        if (*(char *)(lVar3 + 0x556) == '\0') {
          uVar12 = *(uint *)(lVar3 + 0x58);
          if (uVar12 == 0) {
            return 0x61;
          }
          if (*(int *)(param_2 + 0x18) == 0) {
            return 0x61;
          }
          local_80 = (ulong *)0x0;
          local_78 = 0;
          uVar7 = FUN__text__0040b2e0(auStack_90,uVar12);
          if ((uVar7 & 1) == 0) {
LAB__text__00409584:
            uVar12 = (uint)local_78;
            if ((uint)local_78 == 0) {
              uVar13 = 0;
              goto joined_r0x00409680;
            }
          }
          else {
LAB__text__0040954c:
            local_78 = CONCAT44(local_78._4_4_,uVar12);
            if (*(int *)(lVar3 + 0x58) != 0) {
              uVar7 = 0;
              do {
                uVar1 = uVar7 + 1;
                local_80[uVar7] = *(ulong *)(*(long *)(lVar3 + 0x50) + uVar7 * 8);
                uVar7 = uVar1;
              } while (uVar1 < *(uint *)(lVar3 + 0x58));
              goto LAB__text__00409584;
            }
          }
          puVar10 = *(ulong **)(param_2 + 0x10);
          puVar9 = local_80;
          puVar11 = local_80;
          do {
            while( true ) {
              if (puVar10 ==
                  (ulong *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8))
              goto LAB__text__0040960c;
              uVar7 = *puVar11;
              if (uVar7 != *puVar10) break;
              if (puVar9 != puVar11) {
                *puVar9 = uVar7;
                uVar12 = (uint)local_78;
              }
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
              puVar10 = puVar10 + 1;
              if (puVar11 == local_80 + uVar12) goto LAB__text__0040960c;
            }
            puVar5 = puVar10 + 1;
            if (uVar7 < *puVar10) {
              puVar11 = puVar11 + 1;
              puVar5 = puVar10;
            }
            puVar10 = puVar5;
          } while (puVar11 != local_80 + uVar12);
LAB__text__0040960c:
          uVar13 = (uint)((ulong)((long)puVar9 - (long)local_80) >> 3);
          if (uVar12 <= uVar13) {
            if (local_78._4_4_ <= uVar13 && uVar13 - local_78._4_4_ != 0) {
              uVar7 = FUN__text__0040b2e0(auStack_90,uVar13 - local_78._4_4_);
              if ((uVar7 & 1) == 0) {
                uVar13 = (uint)local_78;
              }
            }
          }
        }
        else {
          if (*(int *)(param_2 + 0x18) == 0) {
            return 0x61;
          }
          uVar12 = *(uint *)(lVar3 + 0x58);
          local_80 = (ulong *)0x0;
          local_78 = 0;
          if (uVar12 != 0) {
            uVar7 = FUN__text__0040b2e0(auStack_90,uVar12);
            if ((uVar7 & 1) != 0) goto LAB__text__0040954c;
            goto LAB__text__00409584;
          }
          uVar13 = 0;
        }
joined_r0x00409680:
        if ((local_80 != (ulong *)0x0) &&
           (local_78 = local_78 & 0xffffffff00000000, local_80 != auStack_90)) {
          FUN__text__00400fc0(4);
        }
        if (uVar13 != 0) {
          return 0x61;
        }
        *(undefined1 *)(lVar3 + 0x556) = 1;
        *(undefined1 *)(param_1 + 0x556) = 1;
      }
    }
    if (*(char *)(param_1 + 0x555) == '\0') {
      *(undefined8 *)(param_1 + 0x20) = 0;
      plVar2 = &DAT_00ae99f8;
      if (DAT_00ae99f8 != 0) {
        plVar2 = (long *)(DAT_00ae99f0 + 0x20);
      }
      DAT_00ae99f0 = param_1;
      *plVar2 = param_1;
    }
    else if (DAT_00ae99f8 == 0) {
      DAT_00ae99f0 = param_1;
      DAT_00ae99f8 = param_1;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      *(long *)(param_1 + 0x20) = DAT_00ae99f8;
      DAT_00ae99f8 = param_1;
    }
    puVar4 = _DAT_008a4a20;
    DAT_00ae99e8 = DAT_00ae99e8 + 1;
    __s = (char *)*_DAT_008a4a20;
    if (__s != (char *)0x0) {
      sVar8 = strlen(__s);
      __s[sVar8 - 5] = __s[sVar8 - 5] + '\x01';
      FUN__text__00407180(param_1,*puVar4);
    }
    iVar6 = 1;
  }
  return iVar6;
}


