/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015d480; name: FUN_.text__0015d480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN__text__0015d480(float param_1,long param_2,short *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  undefined8 uVar9;
  int iVar10;
  
  puVar3 = _DAT_0089f560;
  puVar2 = _DAT_0089f4d0;
  if (*param_3 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    do {
      uVar7 = FUN__text__00157154();
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN__text__00157130(*param_3,0);
        if ((uVar7 & 1) == 0) {
          if (*param_3 != 0x10) {
            iVar6 = (**(code **)(*param_4 + 0x80))(param_4);
            iVar10 = iVar6 + iVar10;
            goto LAB__text__0015d528;
          }
          cVar4 = FUN__text__0015a510(param_3);
          if (cVar4 == -0x43) {
            cVar4 = FUN__text__0015a010(param_3);
            if (cVar4 == '\t') break;
          }
          psVar8 = (short *)FUN__text__005f3780(param_3);
        }
        else {
          psVar8 = param_3 + 1;
          uVar9 = *puVar2;
          uVar1 = *(undefined4 *)(param_2 + 0x24);
          uVar5 = FUN__text__0015711c(*param_3);
          param_4 = (long *)FUN__text__0016085c(uVar9,uVar1,uVar5);
        }
      }
      else {
        uVar9 = *puVar2;
        uVar1 = *(undefined4 *)(param_2 + 0x24);
        uVar5 = FUN__text__0016ae08(*puVar3);
        param_4 = (long *)FUN__text__0016085c(uVar9,uVar1,uVar5);
LAB__text__0015d528:
        psVar8 = param_3 + 1;
      }
      param_3 = psVar8;
    } while (*psVar8 != 0);
  }
  iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
  return (param_1 / (float)iVar6) * (float)iVar10;
}


