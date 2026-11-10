/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006557a8; name: FUN_.text__006557a8
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN__text__006557a8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  char *__s;
  long lVar20;
  undefined4 local_338;
  uint local_334;
  int local_330;
  undefined4 local_32c;
  uint local_150;
  undefined8 auStack_140 [11];
  undefined1 auStack_e8 [10];
  char acStack_de [126];
  
  lVar19 = *param_1;
  *param_2 = 0;
  if ((*(long *)(lVar19 + 0x1f8) == 0) && (*(long *)(lVar19 + 0x420) == 0)) {
    FUN__text__0066713c(lVar19,0x7134ad,param_1[0xa2]);
    uVar13 = 5;
    if ((*(byte *)((long)param_1 + 0x3fc) & 0x10) == 0) {
      uVar13 = 6;
    }
    return uVar13;
  }
  if (*(int *)(lVar19 + 0x648) != 0) {
    return 0;
  }
  FUN__text__0065a2b8(*(undefined8 *)(lVar19 + 0xd8));
  FUN__text__0066fef4(*(undefined8 *)(lVar19 + 0x1f8));
  FUN__text__0065a2b8(*(undefined8 *)(lVar19 + 0xd8),*(undefined8 *)(lVar19 + 0x420));
  FUN__text__0066fef4(*(undefined8 *)(lVar19 + 0x420));
  memset(&local_338,0,0x250);
  local_338 = 0x7fffffff;
  uVar5 = FUN__text__00655ca4(*(undefined8 *)(lVar19 + 0x410),*(undefined8 *)(lVar19 + 0x418),
                              *(undefined4 *)(lVar19 + 0x200),&local_338);
  FUN__text__006783e4(*(undefined8 *)(lVar19 + 0x410));
  if (uVar5 != 0) {
    if (uVar5 < 0xd) {
      uVar12 = *(undefined8 *)((ulong)uVar5 * 8 + 0x899cc8);
    }
    else {
      uVar12 = 0x70c98a;
    }
    uVar1 = 0x712b8b;
    if (*(int *)(lVar19 + 0x200) != 1) {
      uVar1 = 0x70e8ba;
    }
    FUN__text__00666f74(lVar19,0x715454,uVar12,uVar1,*(undefined8 *)(lVar19 + 0x650));
  }
  uVar6 = FUN__text__00655ca4(*(undefined8 *)(lVar19 + 0x638),*(undefined8 *)(lVar19 + 0x640),
                              *(undefined4 *)(lVar19 + 0x428),&local_338);
  FUN__text__006783e4(*(undefined8 *)(lVar19 + 0x638));
  if (uVar6 == 0) {
LAB__text__00655968:
    FUN__text__00666f74(lVar19,0x7175dc,*(undefined8 *)(lVar19 + 0x650));
    FUN__text__00666f74(lVar19,0x70ddfe,local_338);
    uVar14 = (ulong)local_334;
    if (0 < (int)local_334) {
      uVar17 = 0;
      puVar16 = &local_338;
      do {
        if ((&local_330)[uVar17 * 5] == 0x1c) {
          memset(auStack_e8,0,0x80);
          FUN__text__006599c0(auStack_e8,0x80,0x71d2ef);
          uVar15 = 0;
          lVar11 = 0x76;
          __s = acStack_de;
          do {
            uVar12 = 0x70f683;
            if (uVar15 != 0) {
              uVar12 = 0x7161d9;
            }
            FUN__text__006599c0(__s,lVar11,0x711277,uVar12,
                                *(undefined1 *)((long)puVar16 + uVar15 + 0xc),
                                *(undefined1 *)((long)puVar16 + uVar15 + 0xd));
            sVar7 = strlen(__s);
            lVar11 = lVar11 - sVar7;
            __s = __s + sVar7;
            bVar3 = uVar15 < 0xe;
            uVar15 = uVar15 + 2;
          } while (bVar3);
          FUN__text__00666f74(lVar19,0x70e891,auStack_e8);
        }
        else if ((&local_330)[uVar17 * 5] == 1) {
          lVar11 = uVar17 * 0x14;
          FUN__text__00666f74(lVar19,0x720638,*(undefined1 *)((long)&local_32c + uVar17 * 0x14),
                              *(undefined1 *)((long)&local_32c + lVar11 + 1U),
                              *(undefined1 *)((long)&local_32c + lVar11 + 2U),
                              *(undefined1 *)((long)&local_32c + lVar11 + 3U));
        }
        uVar17 = uVar17 + 1;
        puVar16 = puVar16 + 5;
      } while (uVar17 != uVar14);
    }
    uVar17 = (ulong)local_150;
    if (0 < (int)local_150) {
      puVar18 = auStack_140;
      do {
        FUN__text__00666f74(lVar19,0x70d4f6,*puVar18);
        uVar17 = uVar17 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar17 != 0);
    }
    if (0 < (int)local_334) {
      uVar12 = *(undefined8 *)(lVar19 + 0x650);
      uVar13 = *(undefined4 *)(lVar19 + 0x658);
      puVar16 = &local_32c;
      lVar11 = 0;
      lVar20 = 0;
      do {
        lVar9 = lVar11;
        lVar8 = lVar20;
        if (puVar16[-1] != 0x1c) {
          lVar8 = FUN__text__00678414(1,0x30);
          if (lVar8 != 0) {
            lVar9 = FUN__text__00678404(uVar12);
            *(long *)(lVar8 + 0x18) = lVar9;
            if (lVar9 != 0) {
              lVar10 = FUN__text__00678414(1,0x10);
              *(long *)(lVar8 + 0x20) = lVar10;
              if (lVar10 != 0) {
                lVar9 = lVar8;
                if (lVar11 != 0) {
                  lVar9 = lVar11;
                }
                if (lVar20 != 0) {
                  *(long *)(lVar20 + 0x28) = lVar8;
                  lVar10 = *(long *)(lVar8 + 0x20);
                }
                *(undefined8 *)(lVar8 + 4) = 0x100000002;
                *(undefined4 *)(lVar8 + 0x10) = 0x10;
                uVar2 = *puVar16;
                *(undefined1 *)(lVar10 + 1) = 2;
                *(undefined4 *)(lVar10 + 4) = uVar2;
                uVar4 = nnsocketInetHtons(uVar13);
                *(undefined2 *)(lVar10 + 2) = uVar4;
                goto LAB__text__00655b98;
              }
              FUN__text__006783e4(*(undefined8 *)(lVar8 + 0x18));
            }
            FUN__text__006783e4(lVar8);
          }
          FUN__text__00651770(lVar11);
          goto LAB__text__00655c44;
        }
LAB__text__00655b98:
        uVar14 = uVar14 - 1;
        puVar16 = puVar16 + 5;
        lVar11 = lVar9;
        lVar20 = lVar8;
      } while (uVar14 != 0);
      if (lVar9 != 0) {
        if (*(long *)(lVar19 + 0xe8) != 0) {
          FUN__text__00667a44(lVar19,3,2);
        }
        lVar11 = FUN__text__00654728(lVar19,lVar9,*(undefined8 *)(lVar19 + 0x650),
                                     *(undefined4 *)(lVar19 + 0x658));
        if (*(long *)(lVar19 + 0xe8) != 0) {
          FUN__text__00667a8c(lVar19,3);
        }
        uVar14 = (ulong)local_150;
        if (0 < (int)local_150) {
          puVar18 = auStack_140;
          do {
            FUN__text__006783e4(*puVar18);
            uVar14 = uVar14 - 1;
            puVar18 = puVar18 + 3;
          } while (uVar14 != 0);
        }
        if (lVar11 != 0) {
          param_1[0xa4] = lVar11;
          *param_2 = lVar11;
          return 0;
        }
        FUN__text__00651770(lVar9);
        goto LAB__text__0065593c;
      }
    }
LAB__text__00655c44:
    uVar14 = (ulong)local_150;
    if ((int)local_150 < 1) {
      uVar13 = 0x1b;
    }
    else {
      uVar13 = 0x1b;
      puVar18 = auStack_140;
      do {
        FUN__text__006783e4(*puVar18);
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar14 != 0);
    }
  }
  else {
    if (uVar6 < 0xd) {
      uVar12 = *(undefined8 *)((ulong)uVar6 * 8 + 0x899cc8);
    }
    else {
      uVar12 = 0x70c98a;
    }
    uVar1 = 0x712b8b;
    if (*(int *)(lVar19 + 0x428) != 1) {
      uVar1 = 0x70e8ba;
    }
    FUN__text__00666f74(lVar19,0x715454,uVar12,uVar1,*(undefined8 *)(lVar19 + 0x650));
    if (uVar5 == 0) goto LAB__text__00655968;
LAB__text__0065593c:
    if (0 < (int)local_150) {
      uVar14 = (ulong)local_150;
      puVar18 = auStack_140;
      do {
        FUN__text__006783e4(*puVar18);
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar14 != 0);
    }
    uVar13 = 6;
  }
  return uVar13;
}


