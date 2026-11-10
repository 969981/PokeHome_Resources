/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b02d0; name: FUN_.text__003b02d0
 */


void FUN__text__003b02d0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 *local_50;
  long local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if (*(code **)(param_1 + 0x3c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c0))(param_1 + 0x3e0);
  }
  lVar5 = *(long *)(param_1 + 0x800);
  uVar1 = FUN__text__003b7414(lVar5,*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x10));
  local_50 = (undefined8 *)FUN__text__003b7494(lVar5,uVar1);
  iVar2 = FUN__text__003b7340(lVar5,&local_50);
  uVar6 = *(undefined8 *)(param_1 + 0x800);
  uVar1 = FUN__text__003b73b4(uVar6,param_1 + 0x7ac);
  local_50 = (undefined8 *)FUN__text__003b7494(uVar6,uVar1);
  iVar3 = FUN__text__003b7340(uVar6,&local_50);
  fVar7 = (float)((iVar3 - iVar2) + *(int *)(*(long *)(param_1 + 0x800) + 0x10));
  FUN__text__003b6b04(fVar7,*(undefined8 *)(param_1 + 0x7e0));
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),0);
  if ((*(int *)(param_1 + 0x868) != -1) &&
     (plVar4 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar4 != (long *)0x0)) {
    local_48 = *plVar4;
    local_50 = &local_40;
    local_40 = 0;
    FUN__text__003aa1c0(param_1,&local_50,0);
    FUN__text__003a14e8(local_40,0);
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
      local_50 = (undefined8 *)*plVar4;
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(param_1 + 0x868));
      local_34 = (undefined4)plVar4[2];
      (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_40,&local_50,&local_34);
    }
  }
  FUN__text__003b9248(fVar7,*(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a8));
  if (*(char *)(param_1 + 0x852) == '\0') {
    FUN__text__003a1590(param_1);
  }
  FUN__text__003a1648(param_1,1);
  *(undefined1 *)(param_1 + 0x85) = 0;
  return;
}


