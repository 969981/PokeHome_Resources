/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00247850; name: FUN_.text__00247850
 */


void FUN__text__00247850(long *param_1,long *param_2,undefined8 *param_3,long *param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long local_70;
  undefined8 local_68;
  
  puVar12 = (undefined8 *)*param_2;
  puVar11 = (undefined8 *)*param_3;
  if (puVar12 == puVar11) {
    *param_1 = *param_4;
  }
  else {
    uVar13 = (long)puVar11 - (long)puVar12;
    local_70 = (long)uVar13 >> 3;
    if ((8 < (long)uVar13) && (0xf < uVar13)) {
      puVar11 = param_5 + 4;
      uVar9 = local_70 - 2U >> 1;
      uVar13 = uVar9;
      do {
        if ((long)uVar13 <= (long)uVar9) {
          uVar1 = uVar13 << 1 | 1;
          uVar4 = uVar13 * 2 + 2;
          puVar6 = puVar12 + uVar1;
          uVar5 = uVar1;
          if ((long)uVar4 < local_70) {
            uVar3 = (*(code *)*param_5)(puVar11,puVar6,puVar6 + 1);
            uVar5 = uVar4;
            puVar7 = puVar6 + 1;
            if ((uVar3 & 1) == 0) {
              uVar5 = uVar1;
              puVar7 = puVar6;
            }
            puVar6 = puVar7;
          }
          puVar7 = puVar12 + uVar13;
          uVar4 = (*(code *)*param_5)(puVar11,puVar6,puVar7);
          if ((uVar4 & 1) == 0) {
            local_68 = *puVar7;
            do {
              puVar10 = puVar6;
              *puVar7 = *puVar10;
              if ((long)uVar9 < (long)uVar5) break;
              uVar1 = uVar5 << 1 | 1;
              uVar4 = uVar5 * 2 + 2;
              puVar6 = puVar12 + uVar1;
              uVar5 = uVar1;
              if ((long)uVar4 < local_70) {
                uVar3 = (*(code *)*param_5)(puVar11,puVar6,puVar6 + 1);
                uVar5 = uVar4;
                puVar7 = puVar6 + 1;
                if ((uVar3 & 1) == 0) {
                  uVar5 = uVar1;
                  puVar7 = puVar6;
                }
                puVar6 = puVar7;
              }
              uVar4 = (*(code *)*param_5)(puVar11,puVar6,&local_68);
              puVar7 = puVar10;
            } while ((uVar4 & 1) == 0);
            *puVar10 = local_68;
          }
        }
        bVar2 = 0 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar2);
      puVar11 = (undefined8 *)*param_3;
      uVar13 = (long)puVar11 - *param_2;
      local_70 = (long)uVar13 >> 3;
    }
    puVar12 = (undefined8 *)*param_4;
    *param_1 = (long)puVar11;
    if (puVar11 != puVar12) {
      puVar12 = param_5 + 4;
      if ((long)uVar13 < 0x10) {
        do {
          uVar13 = (*(code *)*param_5)(puVar12,puVar11,*param_2);
          if ((uVar13 & 1) != 0) {
            puVar6 = (undefined8 *)*param_2;
            uVar8 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar8;
          }
          puVar6 = (undefined8 *)*param_4;
          puVar11 = puVar11 + 1;
          *param_1 = (long)puVar11;
        } while (puVar11 != puVar6);
      }
      else {
        do {
          uVar9 = (*(code *)*param_5)(puVar12,puVar11,*param_2);
          if ((uVar9 & 1) != 0) {
            uVar8 = *puVar11;
            puVar6 = (undefined8 *)*param_2;
            *puVar11 = *puVar6;
            *puVar6 = uVar8;
            puVar6 = (undefined8 *)*param_2;
            puVar11 = puVar6 + 1;
            if (uVar13 == 0x10) {
              uVar9 = 1;
              uVar4 = (*(code *)*param_5)(puVar12,puVar11,puVar6);
            }
            else {
              uVar9 = (*(code *)*param_5)(puVar12,puVar11,puVar6 + 2);
              bVar2 = (uVar9 & 1) == 0;
              puVar7 = puVar6 + 2;
              if (bVar2) {
                puVar7 = puVar11;
              }
              uVar9 = 1;
              if (!bVar2) {
                uVar9 = 2;
              }
              uVar4 = (*(code *)*param_5)(puVar12,puVar7,puVar6);
              puVar11 = puVar7;
            }
            if ((uVar4 & 1) == 0) {
              local_68 = *puVar6;
              puVar7 = puVar6;
              do {
                puVar10 = puVar11;
                *puVar7 = *puVar10;
                if ((long)(local_70 - 2U >> 1) < (long)uVar9) break;
                uVar1 = uVar9 << 1 | 1;
                uVar4 = uVar9 * 2 + 2;
                puVar11 = puVar6 + uVar1;
                uVar9 = uVar1;
                if ((long)uVar4 < local_70) {
                  uVar5 = (*(code *)*param_5)(puVar12,puVar11,puVar11 + 1);
                  uVar9 = uVar4;
                  puVar7 = puVar11 + 1;
                  if ((uVar5 & 1) == 0) {
                    uVar9 = uVar1;
                    puVar7 = puVar11;
                  }
                  puVar11 = puVar7;
                }
                uVar4 = (*(code *)*param_5)(puVar12,puVar11,&local_68);
                puVar7 = puVar10;
              } while ((uVar4 & 1) == 0);
              *puVar10 = local_68;
            }
          }
          puVar11 = (undefined8 *)(*param_1 + 8);
          puVar6 = (undefined8 *)*param_4;
          *param_1 = (long)puVar11;
        } while (puVar11 != puVar6);
      }
    }
    puVar11 = (undefined8 *)*param_2;
    param_3 = (undefined8 *)*param_3;
    if (8 < (long)param_3 - (long)puVar11) {
      puVar12 = param_5 + 4;
      uVar13 = (ulong)((long)param_3 - (long)puVar11) >> 3;
      do {
        uVar8 = *puVar11;
        uVar9 = 0;
        puVar6 = puVar11;
        do {
          puVar7 = puVar6 + uVar9 + 1;
          uVar1 = uVar9 << 1 | 1;
          uVar4 = uVar9 * 2 + 2;
          if ((long)uVar4 < (long)uVar13) {
            uVar5 = (*(code *)*param_5)(puVar12,puVar7,puVar6 + uVar9 + 2);
            puVar10 = puVar6 + uVar9 + 2;
            if ((uVar5 & 1) == 0) {
              uVar4 = uVar1;
              puVar10 = puVar7;
            }
            puVar7 = puVar10;
            uVar1 = uVar4;
          }
          uVar9 = uVar1;
          *puVar6 = *puVar7;
          puVar6 = puVar7;
        } while ((long)uVar9 <= (long)(uVar13 - 2 >> 1));
        param_3 = param_3 + -1;
        if (puVar7 == param_3) {
          *puVar7 = uVar8;
        }
        else {
          *puVar7 = *param_3;
          *param_3 = uVar8;
          uVar9 = (long)puVar7 + (8 - (long)puVar11);
          if (8 < (long)uVar9) {
            uVar4 = (uVar9 >> 3) - 2 >> 1;
            uVar9 = (*(code *)*param_5)(puVar12,puVar11 + uVar4,puVar7);
            if ((uVar9 & 1) != 0) {
              local_68 = *puVar7;
              puVar6 = puVar11 + uVar4;
              do {
                puVar10 = puVar6;
                *puVar7 = *puVar10;
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1 >> 1;
                uVar9 = (*(code *)*param_5)(puVar12,puVar11 + uVar4,&local_68);
                puVar7 = puVar10;
                puVar6 = puVar11 + uVar4;
              } while ((uVar9 & 1) != 0);
              *puVar10 = local_68;
            }
          }
        }
        bVar2 = 2 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar2);
    }
  }
  return;
}


