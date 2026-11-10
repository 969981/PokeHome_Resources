/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e400; name: FUN_.text__0057e400
 */


void FUN__text__0057e400(int *param_1,undefined1 (*param_2) [12],uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_3 != 0) {
    iVar5 = param_1[4];
    iVar6 = *param_1;
    pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)(uint)(iVar5 << 1) * 4);
    do {
      uVar1 = param_3;
      if ((uint)(iVar6 - iVar5) <= param_3) {
        uVar1 = iVar6 - iVar5;
      }
      param_1[4] = uVar1 + iVar5;
      if (uVar1 < 4) {
        pauVar3 = param_2;
        uVar7 = uVar1;
        if (uVar1 != 0) goto LAB__text__0057e498;
LAB__text__0057e510:
        iVar5 = param_1[4];
        iVar6 = *param_1;
        if (iVar5 == iVar6) {
LAB__text__0057e520:
          pauVar4 = *(undefined1 (**) [12])(param_1 + 2);
          iVar5 = 0;
          param_1[4] = 0;
        }
      }
      else {
        uVar7 = uVar1 >> 2;
        fVar8 = (float)param_1[5];
        pauVar3 = param_2;
        do {
          uVar7 = uVar7 - 1;
          fVar11 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
          auVar2 = *pauVar3;
          fVar9 = (float)*(undefined8 *)*pauVar3;
          fVar10 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
          fVar12 = SUB124(*pauVar4,0) + (fVar9 - SUB124(*pauVar4,4)) * fVar8;
          fVar13 = SUB124(*pauVar4,8) +
                   (fVar10 - (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20)) * fVar8;
          fVar14 = (float)*(undefined8 *)(pauVar4[1] + 4) +
                   ((float)*(undefined8 *)(*pauVar3 + 8) -
                   (float)((ulong)*(undefined8 *)(pauVar4[1] + 4) >> 0x20)) * fVar8;
          fVar15 = (float)*(undefined8 *)pauVar4[2] +
                   (fVar11 - (float)((ulong)*(undefined8 *)pauVar4[2] >> 0x20)) * fVar8;
          param_2 = (undefined1 (*) [12])(pauVar3[1] + 4);
          *(ulong *)(*pauVar3 + 8) = CONCAT44(fVar15,fVar14);
          *(ulong *)*pauVar3 = CONCAT44(fVar13,fVar12);
          *(float *)*pauVar4 = fVar9;
          *(float *)(*pauVar4 + 4) = fVar12;
          *(float *)(*pauVar4 + 8) = fVar10;
          *(float *)pauVar4[1] = fVar13;
          *(ulong *)pauVar4[2] = CONCAT44(fVar15,fVar11);
          *(ulong *)(pauVar4[1] + 4) = CONCAT44(fVar14,auVar2._8_4_);
          pauVar4 = (undefined1 (*) [12])(pauVar4[2] + 8);
          pauVar3 = param_2;
        } while (uVar7 != 0);
        uVar7 = uVar1 & 3;
        if ((uVar1 & 3) == 0) goto LAB__text__0057e510;
LAB__text__0057e498:
        fVar8 = *(float *)*pauVar4 +
                (*(float *)*pauVar3 - *(float *)(*pauVar4 + 4)) * (float)param_1[5];
        *(float *)*pauVar4 = *(float *)*pauVar3;
        *(float *)(*pauVar4 + 4) = fVar8;
        param_2 = (undefined1 (*) [12])(*pauVar3 + 4);
        *(float *)*pauVar3 = fVar8;
        if (uVar7 == 1) {
          pauVar4 = (undefined1 (*) [12])(*pauVar4 + 8);
          iVar5 = param_1[4];
          iVar6 = *param_1;
          if (iVar5 != iVar6) goto LAB__text__0057e420;
          goto LAB__text__0057e520;
        }
        fVar8 = *(float *)(*pauVar4 + 8) +
                (*(float *)(*pauVar3 + 4) - *(float *)pauVar4[1]) * (float)param_1[5];
        *(float *)(*pauVar4 + 8) = *(float *)(*pauVar3 + 4);
        *(float *)pauVar4[1] = fVar8;
        *(float *)(*pauVar3 + 4) = fVar8;
        if (uVar7 == 2) {
          param_2 = (undefined1 (*) [12])(*pauVar3 + 8);
          pauVar4 = (undefined1 (*) [12])(pauVar4[1] + 4);
          goto LAB__text__0057e510;
        }
        fVar8 = *(float *)(pauVar4[1] + 4) +
                (*(float *)(*pauVar3 + 8) - *(float *)(pauVar4[1] + 8)) * (float)param_1[5];
        *(float *)(pauVar4[1] + 4) = *(float *)(*pauVar3 + 8);
        *(float *)(pauVar4[1] + 8) = fVar8;
        *(float *)(*pauVar3 + 8) = fVar8;
        param_2 = pauVar3 + 1;
        pauVar4 = pauVar4 + 2;
        iVar5 = param_1[4];
        iVar6 = *param_1;
        if (iVar5 == iVar6) goto LAB__text__0057e520;
      }
LAB__text__0057e420:
      param_3 = param_3 - uVar1;
    } while (param_3 != 0);
  }
  return;
}


