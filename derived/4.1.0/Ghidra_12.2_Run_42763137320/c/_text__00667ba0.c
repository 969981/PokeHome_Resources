/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667ba0; name: FUN_.text__00667ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00667ba0(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  
  if (param_2 < 0x2711) {
    if (param_2 - 3U < 0x11b) {
                    /* WARNING: Could not emulate address calculation at 0x00667c30 */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__00667c40 +
                        (ulong)*(ushort *)((ulong)(param_2 - 3U) * 2 + 0x760652) * 4))();
      return uVar3;
    }
    if (param_2 - 500U < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00667e2c */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__00667e38 +
                        (ulong)*(ushort *)((ulong)(param_2 - 500U) * 2 + 0x760888) * 4))();
      return uVar3;
    }
    if (param_2 == 900) {
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        plVar5 = (long *)*param_3;
        *param_3 = (long)(plVar5 + 1);
      }
      *(bool *)(param_1 + 0x6c1) = *plVar5 != 0;
      return 0;
    }
  }
  else if (param_2 < 0x27a3) {
    if (0x2785 < param_2) {
      if (param_2 < 0x2796) {
        if (param_2 != 0x2786) {
          if (param_2 != 0x2793) {
            return 0x30;
          }
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0x7a0) = *puVar7;
          return 0;
        }
        param_1 = param_1 + 0xd20;
      }
      else {
        if (param_2 != 0x2796) {
          if (param_2 != 0x2797) {
            return 0x30;
          }
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            plVar5 = (long *)*param_3;
            *param_3 = (long)(plVar5 + 1);
          }
          lVar9 = *plVar5;
          if (lVar9 != 0) {
            iVar2 = FUN__text__0066c234(lVar9,0x71eb22);
            if (iVar2 == 0) {
              iVar2 = FUN__text__0066c234(lVar9,0x7140a1);
              if (iVar2 == 0) {
                iVar2 = FUN__text__0066c234(lVar9,0x721229);
                if (iVar2 != 0) {
                  FUN__text__006532b4(param_1,0);
                  return 0;
                }
                iVar2 = FUN__text__0066c234(lVar9,0x7140a6);
                if (iVar2 != 0) {
                  FUN__text__006519f0(param_1);
                  return 0;
                }
                if (*(long *)(param_1 + 0xf70) == 0) {
                  uVar3 = FUN__text__00651a90(param_1,0,0,1);
                  *(undefined8 *)(param_1 + 0xf70) = uVar3;
                }
                lVar9 = FUN__text__00678404(lVar9);
                if ((lVar9 == 0) || (*(long *)(param_1 + 0xf70) == 0)) {
                  FUN__text__006783e4(lVar9);
                  return 0x1b;
                }
                FUN__text__00667a44(param_1,2,2);
                iVar2 = thunk_FUN__text__0066c2d8(0x70b1f4,lVar9,0xb);
                if (iVar2 == 0) {
                  lVar4 = lVar9;
                }
                else {
                  lVar4 = lVar9 + 0xb;
                }
                FUN__text__00651c70(param_1,*(undefined8 *)(param_1 + 0xf70),iVar2 != 0,0,lVar4,0,0,
                                    1);
                FUN__text__00667a8c(param_1,2);
                FUN__text__006783e4(lVar9);
                return 0;
              }
              FUN__text__00667a44(param_1,2,2);
              FUN__text__0065313c(*(undefined8 *)(param_1 + 0xf70));
            }
            else {
              FUN__text__00667a44(param_1,2,2);
              FUN__text__006530e4(*(undefined8 *)(param_1 + 0xf70));
            }
            FUN__text__00667a8c(param_1,2);
          }
          return 0;
        }
        param_1 = param_1 + 0xcd0;
      }
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      uVar3 = FUN__text__00667ad4(param_1,*puVar7);
      return uVar3;
    }
    if (param_2 - 0x2711U < 0x6d) {
                    /* WARNING: Could not emulate address calculation at 0x00667c8c */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__00667c98 +
                        (ulong)*(ushort *)((ulong)(param_2 - 0x2711U) * 2 + 0x760898) * 4))();
      return uVar3;
    }
  }
  else if (param_2 < 0x4e2b) {
    if (param_2 - 0x27a3U < 0x8a) {
                    /* WARNING: Could not emulate address calculation at 0x00667c04 */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__00667c10 +
                        (ulong)*(ushort *)((ulong)(param_2 - 0x27a3U) * 2 + 0x760972) * 4))();
      return uVar3;
    }
    if (param_2 == 0x2906) {
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      *(undefined8 *)(param_1 + 0xa98) = *puVar7;
      return 0;
    }
    if (param_2 == 0x2909) {
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      *(undefined8 *)(param_1 + 0xab8) = *puVar7;
      return 0;
    }
  }
  else if (param_2 < 0x4ee4) {
    if (param_2 < 0x4eae) {
      if (param_2 < 0x4e6f) {
        if (param_2 == 0x4e2b) {
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            plVar5 = (long *)*param_3;
            *param_3 = (long)(plVar5 + 1);
          }
          lVar9 = *plVar5;
          *(long *)(param_1 + 0x708) = lVar9;
          if (lVar9 == 0) {
            *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffffd;
            *(undefined1 **)(param_1 + 0x708) = &LAB__text__0066bc68;
            return 0;
          }
          uVar6 = *(ulong *)(param_1 + 0xf40) | 2;
        }
        else {
          if (param_2 != 0x4e2c) {
            if (param_2 != 0x4e58) {
              return 0x30;
            }
            uVar1 = *(uint *)(param_3 + 3);
            if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
              plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
            }
            else {
              plVar5 = (long *)*param_3;
              *param_3 = (long)(plVar5 + 1);
            }
            lVar9 = *plVar5;
            *(long *)(param_1 + 0x728) = lVar9;
            goto LAB__text__00669df4;
          }
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            plVar5 = (long *)*param_3;
            *param_3 = (long)(plVar5 + 1);
          }
          lVar9 = *plVar5;
          *(long *)(param_1 + 0x720) = lVar9;
          if (lVar9 == 0) {
            *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffffffffffe;
            *(code **)(param_1 + 0x720) = fread;
            return 0;
          }
          uVar6 = *(ulong *)(param_1 + 0xf40) | 1;
        }
        *(ulong *)(param_1 + 0xf40) = uVar6;
        return 0;
      }
      if (param_2 < 0x4e8c) {
        if (param_2 == 0x4e6f) {
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0x710) = *puVar7;
          return 0;
        }
        if (param_2 == 0x4e7e) {
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0x738) = *puVar7;
          return 0;
        }
      }
      else {
        if (param_2 == 0x4e8c) {
          if ((*(byte *)(_DAT_008b4668 + 0x10) >> 3 & 1) == 0) {
            return 4;
          }
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0xae0) = *puVar7;
          return 0;
        }
        if (param_2 == 0x4ea2) {
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0x740) = *puVar7;
          return 0;
        }
      }
    }
    else {
      if (param_2 - 0x4eaeU < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00667de4 */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK__text__00667df0 +
                          (ulong)*(ushort *)((ulong)(param_2 - 0x4eaeU) * 2 + 0x760a86) * 4))();
        return uVar3;
      }
      if (param_2 == 0x4ec3) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        *(undefined8 *)(param_1 + 0x758) = *puVar7;
        return 0;
      }
      if (param_2 == 0x4ec7) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        *(undefined8 *)(param_1 + 0x6f0) = *puVar7;
        return 0;
      }
    }
  }
  else if (param_2 < 0x5017) {
    if (param_2 < 0x4ef0) {
      if (param_2 - 0x4ee4U < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00667d98 */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK__text__00667da4 +
                          (ulong)*(ushort *)((ulong)(param_2 - 0x4ee4U) * 2 + 0x760a94) * 4))();
        return uVar3;
      }
    }
    else if (param_2 < 0x4f30) {
      if (param_2 == 0x4ef0) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        *(undefined8 *)(param_1 + 0x768) = *puVar7;
        return 0;
      }
      if (param_2 == 0x4efb) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          plVar5 = (long *)*param_3;
          *param_3 = (long)(plVar5 + 1);
        }
        lVar9 = *plVar5;
        *(long *)(param_1 + 0x730) = lVar9;
LAB__text__00669df4:
        bVar8 = *(byte *)(param_1 + 0x10fc);
        if (lVar9 == 0) {
          bVar8 = bVar8 & 0xfe;
        }
        else {
          bVar8 = bVar8 | 1;
        }
        *(byte *)(param_1 + 0x10fc) = bVar8;
        return 0;
      }
    }
    else {
      if (param_2 == 0x4f30) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        *(undefined8 *)(param_1 + 0xf00) = *puVar7;
        return 0;
      }
      if (param_2 == 0x4f3b) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        *(undefined8 *)(param_1 + 0xf38) = *puVar7;
        return 0;
      }
    }
  }
  else {
    if (0x75c0 < param_2) {
      if (param_2 == 0x75c1) {
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          plVar5 = (long *)*param_3;
          *param_3 = (long)(plVar5 + 1);
        }
        if (-1 < *plVar5) {
          *(long *)(param_1 + 0x7f0) = *plVar5;
          return 0;
        }
      }
      else {
        if (param_2 != 0x75c2) {
          if (param_2 != 0x763e) {
            return 0x30;
          }
          uVar1 = *(uint *)(param_3 + 3);
          if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
          }
          else {
            puVar7 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar7 + 1);
          }
          *(undefined8 *)(param_1 + 0xa30) = *puVar7;
          return 0;
        }
        uVar1 = *(uint *)(param_3 + 3);
        if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
          plVar5 = (long *)(param_3[1] + (long)(int)uVar1);
        }
        else {
          plVar5 = (long *)*param_3;
          *param_3 = (long)(plVar5 + 1);
        }
        if (-1 < *plVar5) {
          *(long *)(param_1 + 0x7f8) = *plVar5;
          return 0;
        }
      }
      return 0x2b;
    }
    if (param_2 - 0x75a3U < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00667ce0 */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__00667cec +
                        (ulong)*(ushort *)((ulong)(param_2 - 0x75a3U) * 2 + 0x760a9e) * 4))();
      return uVar3;
    }
    if (param_2 == 0x5017) {
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      *(undefined8 *)(param_1 + 0xaa8) = *puVar7;
      return 0;
    }
    if (param_2 == 0x5018) {
      uVar1 = *(uint *)(param_3 + 3);
      if (((int)uVar1 < 0) && (*(uint *)(param_3 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)(int)uVar1);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      *(undefined8 *)(param_1 + 0xab0) = *puVar7;
      return 0;
    }
  }
  return 0x30;
}


