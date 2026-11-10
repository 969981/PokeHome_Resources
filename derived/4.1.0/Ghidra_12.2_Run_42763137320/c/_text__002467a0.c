/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002467a0; name: FUN_.text__002467a0
 */


void FUN__text__002467a0(ulong *param_1,ulong *param_2,undefined8 *param_3,long param_4,uint param_5
                        )

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint local_c4;
  undefined8 *local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar1 = param_3 + 4;
  local_c4 = param_5;
LAB__text__002467dc:
  do {
    puVar12 = (undefined8 *)*param_2;
    puVar9 = (undefined8 *)*param_1;
    uVar3 = (long)puVar12 - (long)puVar9;
    uVar5 = (long)uVar3 >> 3;
    if (uVar5 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00246f88 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__00246f94 + (ulong)*(byte *)(uVar5 + 0x72bbf4) * 4))();
      return;
    }
    if ((long)uVar3 < 0xc0) {
      puVar13 = puVar9 + 1;
      if ((local_c4 & 1) == 0) {
        if (puVar9 != puVar12 && puVar13 != puVar12) {
          puVar7 = puVar9 + -1;
          do {
            puVar11 = puVar13;
            uVar3 = (*(code *)*param_3)(puVar1,puVar11,puVar9);
            if ((uVar3 & 1) != 0) {
              local_68 = (undefined8 *)*puVar11;
              puVar9 = puVar7;
              do {
                puVar13 = puVar9;
                puVar13[2] = puVar13[1];
                uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar13);
                puVar9 = puVar13 + -1;
              } while ((uVar3 & 1) != 0);
              puVar13[1] = local_68;
            }
            puVar7 = puVar7 + 1;
            puVar13 = puVar11 + 1;
            puVar9 = puVar11;
          } while (puVar11 + 1 != puVar12);
        }
      }
      else if (puVar9 != puVar12 && puVar13 != puVar12) {
        lVar6 = 0;
        puVar7 = puVar9;
        do {
          puVar11 = puVar13;
          uVar3 = (*(code *)*param_3)(puVar1,puVar11,puVar7);
          if ((uVar3 & 1) != 0) {
            local_68 = (undefined8 *)*puVar11;
            lVar10 = lVar6;
            do {
              lVar8 = lVar10;
              ((undefined8 *)((long)puVar9 + lVar8))[1] = *(undefined8 *)((long)puVar9 + lVar8);
              if (lVar8 == 0) {
                puVar13 = puVar9;
                goto LAB__text__00247124;
              }
              uVar3 = (*(code *)*param_3)(puVar1,&local_68,lVar8 + -8 + (long)puVar9);
              lVar10 = lVar8 + -8;
            } while ((uVar3 & 1) != 0);
            puVar13 = (undefined8 *)((long)puVar9 + lVar8);
LAB__text__00247124:
            *puVar13 = local_68;
          }
          lVar6 = lVar6 + 8;
          puVar13 = puVar11 + 1;
          puVar7 = puVar11;
        } while (puVar11 + 1 != puVar12);
      }
      return;
    }
    if (param_4 == 0) {
      if (puVar9 == puVar12) {
        return;
      }
      local_78 = puVar12;
      local_70 = puVar12;
      local_68 = puVar9;
      FUN__text__00247850(auStack_80,&local_68,&local_70,&local_78,param_3);
      return;
    }
    uVar5 = uVar5 >> 1;
    puVar13 = puVar9 + uVar5;
    puVar12 = puVar12 + -1;
    if (uVar3 < 0x401) {
      uVar3 = (*(code *)*param_3)(puVar1,puVar9,puVar13);
      uVar5 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
      if ((uVar3 & 1) == 0) {
        if ((uVar5 & 1) != 0) {
          uVar4 = *puVar9;
          *puVar9 = *puVar12;
          *puVar12 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar9,puVar13);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar13;
            *puVar13 = *puVar9;
            *puVar9 = uVar4;
          }
        }
      }
      else {
        uVar4 = *puVar13;
        if ((uVar5 & 1) == 0) {
          *puVar13 = *puVar9;
          *puVar9 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar9;
            *puVar9 = *puVar12;
            *puVar12 = uVar4;
          }
        }
        else {
          *puVar13 = *puVar12;
          *puVar12 = uVar4;
        }
      }
      if ((local_c4 & 1) != 0) goto LAB__text__00246c94;
LAB__text__00246c7c:
      uVar3 = (*(code *)*param_3)(puVar1,*param_1 - 8);
      if ((uVar3 & 1) != 0) goto LAB__text__00246c94;
      puVar9 = (undefined8 *)*param_1;
      puVar12 = (undefined8 *)*param_2;
      local_68 = (undefined8 *)*puVar9;
      uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar12 + -1);
      puVar7 = puVar9;
      if ((uVar3 & 1) == 0) {
        do {
          puVar7 = puVar7 + 1;
          if (puVar12 <= puVar7) break;
          uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar7);
        } while ((uVar3 & 1) == 0);
      }
      else {
        do {
          puVar7 = puVar7 + 1;
          uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar7);
        } while ((uVar3 & 1) == 0);
      }
      if (puVar7 < puVar12) {
        do {
          puVar12 = puVar12 + -1;
          uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar12);
        } while ((uVar3 & 1) != 0);
      }
      while (puVar7 < puVar12) {
        uVar4 = *puVar7;
        *puVar7 = *puVar12;
        *puVar12 = uVar4;
        do {
          puVar7 = puVar7 + 1;
          uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar7);
        } while ((uVar3 & 1) == 0);
        do {
          puVar12 = puVar12 + -1;
          uVar3 = (*(code *)*param_3)(puVar1,&local_68,puVar12);
        } while ((uVar3 & 1) != 0);
      }
      puVar12 = puVar7 + -1;
      if (puVar9 != puVar12) {
        *puVar9 = *puVar12;
      }
      *puVar12 = local_68;
    }
    else {
      uVar3 = (*(code *)*param_3)(puVar1,puVar13,puVar9);
      uVar2 = (*(code *)*param_3)(puVar1,puVar12,puVar13);
      if ((uVar3 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          uVar4 = *puVar13;
          *puVar13 = *puVar12;
          *puVar12 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar13,puVar9);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar9;
            *puVar9 = *puVar13;
            *puVar13 = uVar4;
          }
        }
      }
      else {
        uVar4 = *puVar9;
        if ((uVar2 & 1) == 0) {
          *puVar9 = *puVar13;
          *puVar13 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar13);
          if ((uVar3 & 1) == 0) goto LAB__text__00246980;
          uVar4 = *puVar13;
          *puVar13 = *puVar12;
        }
        else {
          *puVar9 = *puVar12;
        }
        *puVar12 = uVar4;
      }
LAB__text__00246980:
      puVar9 = (undefined8 *)(*param_1 + 8);
      puVar12 = (undefined8 *)(*param_1 + (uVar5 - 1) * 8);
      puVar13 = (undefined8 *)(*param_2 - 0x10);
      uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
      uVar2 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
      if ((uVar3 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
          *puVar13 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar9;
            *puVar9 = *puVar12;
            *puVar12 = uVar4;
          }
        }
      }
      else {
        uVar4 = *puVar9;
        if ((uVar2 & 1) == 0) {
          *puVar9 = *puVar12;
          *puVar12 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
          if ((uVar3 & 1) == 0) goto LAB__text__00246aac;
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
        }
        else {
          *puVar9 = *puVar13;
        }
        *puVar13 = uVar4;
      }
LAB__text__00246aac:
      puVar9 = (undefined8 *)(*param_1 + 0x10);
      puVar12 = (undefined8 *)(*param_1 + (uVar5 + 1) * 8);
      puVar13 = (undefined8 *)(*param_2 - 0x18);
      uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
      uVar2 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
      if ((uVar3 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
          *puVar13 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar9;
            *puVar9 = *puVar12;
            *puVar12 = uVar4;
          }
        }
      }
      else {
        uVar4 = *puVar9;
        if ((uVar2 & 1) == 0) {
          *puVar9 = *puVar12;
          *puVar12 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
          if ((uVar3 & 1) == 0) goto LAB__text__00246b7c;
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
        }
        else {
          *puVar9 = *puVar13;
        }
        *puVar13 = uVar4;
      }
LAB__text__00246b7c:
      uVar3 = *param_1;
      puVar9 = (undefined8 *)(uVar3 + (uVar5 - 1) * 8);
      puVar12 = (undefined8 *)(uVar3 + uVar5 * 8);
      puVar13 = (undefined8 *)(uVar3 + (uVar5 + 1) * 8);
      uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
      uVar2 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
      if ((uVar3 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
          *puVar13 = uVar4;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,puVar9);
          if ((uVar3 & 1) != 0) {
            uVar4 = *puVar9;
            *puVar9 = *puVar12;
            *puVar12 = uVar4;
          }
        }
      }
      else if ((uVar2 & 1) == 0) {
        uVar4 = *puVar12;
        *puVar12 = *puVar9;
        *puVar9 = uVar4;
        uVar3 = (*(code *)*param_3)(puVar1,puVar13,puVar12);
        if ((uVar3 & 1) != 0) {
          uVar4 = *puVar12;
          *puVar12 = *puVar13;
          *puVar13 = uVar4;
        }
      }
      else {
        uVar4 = *puVar13;
        *puVar13 = *puVar9;
        *puVar9 = uVar4;
      }
      puVar9 = (undefined8 *)*param_1;
      uVar4 = *puVar9;
      *puVar9 = puVar9[uVar5];
      puVar9[uVar5] = uVar4;
      if ((local_c4 & 1) == 0) goto LAB__text__00246c7c;
LAB__text__00246c94:
      lVar10 = param_4 + -1;
      puVar9 = (undefined8 *)*param_1;
      lVar6 = 0;
      puVar12 = (undefined8 *)*param_2;
      local_68 = (undefined8 *)*puVar9;
      do {
        lVar6 = lVar6 + 8;
        uVar3 = (*(code *)*param_3)(puVar1,lVar6 + (long)puVar9,&local_68);
      } while ((uVar3 & 1) != 0);
      puVar13 = (undefined8 *)((long)puVar9 + lVar6);
      if (lVar6 == 8) {
        do {
          if (puVar12 <= puVar13) break;
          puVar12 = puVar12 + -1;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,&local_68);
        } while ((uVar3 & 1) == 0);
      }
      else {
        do {
          puVar12 = puVar12 + -1;
          uVar3 = (*(code *)*param_3)(puVar1,puVar12,&local_68);
        } while ((uVar3 & 1) == 0);
      }
      if (puVar13 < puVar12) {
        puVar11 = puVar13;
        puVar14 = puVar12;
        do {
          uVar4 = *puVar11;
          *puVar11 = *puVar14;
          *puVar14 = uVar4;
          do {
            puVar7 = puVar11;
            puVar11 = puVar7 + 1;
            uVar3 = (*(code *)*param_3)(puVar1,puVar11,&local_68);
          } while ((uVar3 & 1) != 0);
          do {
            puVar14 = puVar14 + -1;
            uVar3 = (*(code *)*param_3)(puVar1,puVar14,&local_68);
          } while ((uVar3 & 1) == 0);
        } while (puVar11 < puVar14);
      }
      else {
        puVar7 = puVar13 + -1;
      }
      if (puVar9 != puVar7) {
        *puVar9 = *puVar7;
      }
      *puVar7 = local_68;
      if (puVar12 <= puVar13) {
        uStack_88 = *param_1;
        local_90 = puVar7;
        uVar3 = FUN__text__002472d0(&uStack_88,&local_90,param_3);
        local_a0 = *param_2;
        puStack_98 = puVar7 + 1;
        uVar5 = FUN__text__002472d0(&puStack_98,&local_a0,param_3);
        if ((uVar5 & 1) != 0) {
          if ((uVar3 & 1) != 0) {
            return;
          }
          *param_2 = (ulong)puVar7;
          param_4 = lVar10;
          goto LAB__text__002467dc;
        }
        if ((uVar3 & 1) != 0) {
          *param_1 = (ulong)(puVar7 + 1);
          param_4 = lVar10;
          goto LAB__text__002467dc;
        }
      }
      uStack_a8 = *param_1;
      local_b0 = puVar7;
      FUN__text__002467a0(&uStack_a8,&local_b0,param_3,lVar10,local_c4 & 1);
      puVar7 = puVar7 + 1;
    }
    param_4 = param_4 + -1;
    local_c4 = 0;
    *param_1 = (ulong)puVar7;
  } while( true );
}


