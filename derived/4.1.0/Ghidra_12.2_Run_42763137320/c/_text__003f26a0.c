/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f26a0; name: FUN_.text__003f26a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003f26a0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uStack_351;
  undefined1 auStack_350 [36];
  undefined8 local_32c;
  undefined1 local_324;
  undefined4 local_320;
  undefined1 auStack_2a0 [232];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [80];
  undefined1 auStack_98 [4];
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 local_70;
  
  local_320 = 0;
  local_32c = 0;
  local_324 = 0;
  local_94 = 0x3f80000000000008;
  local_8c = 0x100000064;
  local_84 = 0x200000008;
  local_7c = 0x461c4000;
  local_74 = 1;
  local_70 = 0x101;
  (**(code **)(*(long *)param_1[0xc] + 0x28))((long *)param_1[0xc],auStack_350);
  (**(code **)(*(long *)param_1[0xc] + 0x30))();
  (**(code **)(*(long *)param_1[0x14] + 0x28))();
  (**(code **)(*(long *)param_1[0x14] + 0x20))((long *)param_1[0x14],auStack_f0);
  (**(code **)(*(long *)param_1[8] + 0x18))();
  (**(code **)(*(long *)param_1[4] + 0x28))((long *)param_1[4],&local_1b8);
  local_7c = 0x461c4000;
  local_94 = 0x3f80000000000008;
  local_8c = 0x100000064;
  local_84 = 0x200000008;
  local_74 = 1;
  local_70 = 0x101;
  local_1b8 = _DAT_008a5438;
  uStack_1b0 = _DAT_008a5440;
  local_1a8 = _DAT_008a5448;
  uStack_1a0 = _DAT_008a5450;
  local_198 = _DAT_008a5458;
  uStack_190 = _DAT_008a5460;
  local_188 = _DAT_008a5468;
  uStack_180 = _DAT_008a5470;
  local_178 = _DAT_008a5478;
  uVar3 = FUN__text__005f52b0();
  FUN__text__005f559c(&uStack_351,uVar3,0,1);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,auStack_350);
  }
  uVar4 = (**(code **)(*(long *)param_1[4] + 0x10))();
  if (((uVar4 & 1) != 0) ||
     (iVar2 = (**(code **)(*(long *)param_1[4] + 0x20))((long *)param_1[4],&local_1b8), iVar2 == 1))
  {
    if (*(char *)((long)param_1 + 0xe2) == '\0') {
      lVar5 = (**(code **)(*(long *)param_1[0x14] + 0x18))((long *)param_1[0x14],auStack_f0);
      if (lVar5 == 0) goto LAB__text__003f2984;
      iVar2 = (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,auStack_e8,0);
      uVar3 = 0;
      if (iVar2 != 1) goto LAB__text__003f2988;
      *(undefined1 *)((long)param_1 + 0xe2) = 1;
      uVar4 = (**(code **)(*(long *)param_1[0xc] + 0x18))();
    }
    else {
      uVar4 = (**(code **)(*(long *)param_1[0xc] + 0x18))();
    }
    if (((uVar4 & 1) != 0) ||
       (iVar2 = (**(code **)(*(long *)param_1[0xc] + 0x20))
                          ((long *)param_1[0xc],auStack_350,auStack_2a0), iVar2 == 1)) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar2 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],auStack_98);
        if (iVar2 != 1) goto LAB__text__003f2984;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        cVar1 = *(char *)((long)param_1 + 0xe1);
      }
      else {
        cVar1 = *(char *)((long)param_1 + 0xe1);
      }
      if (cVar1 != '\0') {
        uVar3 = 1;
        goto LAB__text__003f2988;
      }
      iVar2 = (**(code **)(*(long *)param_1[0x10] + 0x10))((long *)param_1[0x10],&local_94);
      if (iVar2 == 1) {
        uVar3 = 1;
        *(undefined1 *)((long)param_1 + 0xe1) = 1;
        goto LAB__text__003f2988;
      }
    }
  }
LAB__text__003f2984:
  uVar3 = 0;
LAB__text__003f2988:
  FUN__text__005f5690(&uStack_351);
  return uVar3;
}


