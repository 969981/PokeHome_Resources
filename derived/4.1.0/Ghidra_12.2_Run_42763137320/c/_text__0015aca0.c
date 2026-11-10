/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015aca0; name: FUN_.text__0015aca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0015aca0(float param_1,ushort *param_2,long *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar1 = _DAT_0089f4d0;
  uVar14 = *_DAT_0089f4d0;
  uVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  uVar5 = FUN__text__00161218(uVar14,uVar5);
  puVar2 = _DAT_0089f560;
  uVar14 = *puVar1;
  uVar6 = FUN__text__0016ae08(*_DAT_0089f560);
  plVar11 = (long *)FUN__text__0016085c(uVar14,uVar5,uVar6);
  iVar7 = (**(code **)(*plVar11 + 0x20))();
  if (*param_2 == 0) {
    iVar15 = 0;
    fVar18 = 0.0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = 0.0;
    fVar18 = 0.0;
    iVar15 = 0;
    do {
      uVar12 = FUN__text__00157154();
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN__text__00157130(*param_2,0);
        if ((uVar12 & 1) == 0) {
          if (*param_2 == 0x10) {
            uVar8 = FUN__text__005f37a0(param_2);
            uVar12 = FUN__text__005f37a0(param_2);
            bVar3 = (uVar8 >> 8 & 0xff) == 0xbe;
            bVar4 = (uVar12 & 0xfe) == 0;
            uVar8 = (uint)(bVar3 && bVar4);
            fVar16 = 0.0;
            if (uVar8 == 0) {
              fVar16 = fVar18;
            }
            iVar15 = iVar15 + uVar8;
            if ((!bVar3 || !bVar4) || fVar18 <= fVar17) {
              fVar18 = fVar17;
            }
            fVar17 = fVar18;
            puVar13 = (ushort *)FUN__text__005f3780(param_2);
            fVar18 = fVar16;
          }
          else if (*param_2 == 10) {
            iVar15 = iVar15 + 1;
            puVar13 = param_2 + 1;
            if (fVar18 <= fVar17) {
              fVar18 = fVar17;
            }
            fVar17 = fVar18;
            fVar18 = 0.0;
          }
          else {
            iVar9 = (**(code **)(*plVar11 + 0x80))(plVar11);
            fVar16 = 0.0;
            puVar13 = param_2 + 1;
            if ((*puVar13 | 0x10) != 0x10) {
              iVar10 = (**(code **)(*plVar11 + 0xb8))(plVar11,*param_2);
              fVar16 = (param_1 / (float)iVar7) * (float)iVar10;
            }
            fVar18 = fVar18 + (param_1 / (float)iVar7) * (float)iVar9 + fVar16;
          }
        }
        else {
          puVar13 = param_2 + 1;
          uVar14 = *puVar1;
          uVar6 = FUN__text__0015711c(*param_2);
          plVar11 = (long *)FUN__text__0016085c(uVar14,uVar5,uVar6);
        }
      }
      else {
        uVar14 = *puVar1;
        uVar6 = FUN__text__0016ae08(*puVar2);
        plVar11 = (long *)FUN__text__0016085c(uVar14,uVar5,uVar6);
        puVar13 = param_2 + 1;
      }
      param_2 = puVar13;
    } while (*puVar13 != 0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar15 + 1;
  }
  if (fVar18 <= fVar17) {
    fVar18 = fVar17;
  }
  return (int)fVar18;
}


