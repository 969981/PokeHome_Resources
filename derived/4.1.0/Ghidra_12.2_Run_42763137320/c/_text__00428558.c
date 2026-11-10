/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428558; name: FUN_.text__00428558
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00428558(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    fVar6 = (float)(**(code **)(*param_1 + 0x88))(param_1);
  }
  lVar5 = param_1[3];
  plVar4 = (long *)(lVar5 + 0x18);
  if ((*(ushort *)(lVar5 + 0x220) & 1) == 0) {
    (**(code **)(*plVar4 + 0x70))(plVar4,0);
  }
  else {
    (**(code **)(*plVar4 + 0x78))(plVar4);
    if ((*(ushort *)(lVar5 + 0x220) >> 4 & 1) != 0) {
      (**(code **)(*plVar4 + 0x80))(plVar4);
    }
  }
  lVar5 = param_1[3];
  fVar7 = exp2f(*(float *)(lVar5 + 0xa4) * -0.00083333335);
  FUN__text__00475a58(fVar7 * fVar6,lVar5);
  uVar2 = DAT_00ae9a80;
  uVar1 = *(undefined4 *)(param_1[3] + 0x280);
  uVar3 = FUN__text__00478e4c(param_1[3] + 0x18);
  FUN__text__0048d3a0(fVar6,fVar7 * fVar6,uVar2,uVar1,uVar3,**(undefined4 **)(param_1[3] + 0x2a0),
                      (*(ushort *)(*(undefined4 **)(param_1[3] + 0x2a0) + 3) & 0x7c) == 4);
  if ((*(byte *)(param_1[3] + 10) >> 4 & 1) == 0) {
    return;
  }
  FUN__text__0048e7a0(*_DAT_008a4638,*(undefined4 *)(param_1[3] + 0x280),param_1);
  return;
}


