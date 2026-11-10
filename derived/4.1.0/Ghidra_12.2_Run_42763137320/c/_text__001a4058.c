/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a4058; name: FUN_.text__001a4058
 */


void FUN__text__001a4058(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float local_38;
  float fStack_34;
  float local_18;
  float fStack_14;
  
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar7 + 0x1e8) == 4) {
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      lVar7 = *(long *)(param_1 + 0x20);
    }
    lVar8 = *(long *)(lVar7 + 0x128);
    uVar3 = *param_2;
    uVar5 = param_2[1];
    uVar4 = *(uint *)(lVar8 + 0x34);
    uVar6 = *(uint *)(lVar8 + 0x38);
    uVar1 = uVar3 - uVar4;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar1 = uVar4 - uVar3;
    }
    local_18 = -819.0;
    uVar2 = uVar5 - uVar6;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      uVar2 = uVar6 - uVar5;
    }
    if (*(int *)(lVar7 + 0x1b4) == *(int *)(lVar8 + 0x24) &&
        *(int *)(lVar7 + 0x1b0) != *(int *)(lVar8 + 0x24)) {
      local_18 = 127.0;
    }
    local_18 = local_18 + (float)(uVar3 + uVar4) * 0.5 * 138.0;
    fStack_14 = (float)(uVar5 + uVar6) * -0.5 * 114.0 + 297.0;
    local_38 = (float)uVar1 * 138.0 + 138.0;
    fStack_34 = (float)uVar2 * 114.0 + 138.0;
    FUN__text__003c7960(lVar9,param_1 + 0x30,&local_18);
    FUN__text__003c7b30(lVar9,param_1 + 0x198,&local_38);
    FUN__text__003c7b30(lVar9,param_1 + 0x1a0,&local_38);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


