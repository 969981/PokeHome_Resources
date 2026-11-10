/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539e90; name: FUN_.text__00539e90
 */


void FUN__text__00539e90(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  ulong local_80;
  undefined4 local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (*(char *)(param_4 + 0x34) != '\0') {
    FUN__text__00538cd0(param_1,param_2,param_4);
    if (*(uint *)(param_3 + 1) != 0) {
      lVar6 = *param_3;
      lVar7 = lVar6 + (ulong)*(uint *)(param_3 + 1) * 0x50;
      do {
        uVar1 = *(uint *)(lVar6 + 0x40);
        if (uVar1 != 0) {
          if (*(long *)(*(long *)(lVar6 + 0x38) + 0x18) != 0) {
            plVar3 = (long *)(*(long *)(lVar6 + 0x38) + 0x40);
            uVar2 = 1;
            do {
              uVar4 = uVar2;
              if (uVar1 == uVar4) break;
              lVar5 = *plVar3;
              plVar3 = plVar3 + 5;
              uVar2 = uVar4 + 1;
            } while (lVar5 != 0);
            if (uVar1 <= uVar4) goto LAB__text__00539f10;
          }
          FUN__text__0053bdb0(param_1,param_2);
          param_1[1] = *(undefined8 *)(lVar6 + 0x30);
        }
LAB__text__00539f10:
        lVar6 = lVar6 + 0x50;
      } while (lVar6 != lVar7);
    }
  }
  if (((*(char *)((long)param_1 + 0x24) != '\0') && (*(char *)(param_4 + 0x35) != '\0')) &&
     (*(int *)((long)param_1 + 0x14) != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN__text__0053e430(&local_58,param_3 + 2);
    local_48 = (undefined4)param_3[4];
    FUN__text__0051cfa0(&local_58,*(long *)(param_4 + 0x18) + 0x10);
    FUN__text__0051cae0(*(long *)(param_4 + 0x18) + 0x10);
    local_98 = *param_1;
    local_78 = 0;
    local_88 = 0;
    local_80 = 0;
    local_60 = 0;
    uStack_90 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN__text__00518e80(*(undefined4 *)(param_4 + 0x30),&local_98,param_2,&local_58,
                        *(long *)(param_4 + 0x18) + 0x10,param_4,*(undefined8 *)(param_4 + 0x28),
                        *(undefined4 *)((long)param_1 + 0x14),8);
    if (local_70 != 0) {
      local_68 = local_68 & 0xffffffff00000000;
      FUN__text__00400fc0(9);
      local_70 = 0;
      local_68 = local_68 & 0xffffffff;
    }
    if (local_88 != 0) {
      local_80 = local_80 & 0xffffffff00000000;
      FUN__text__00400fc0(0xb);
    }
    FUN__text__0051cae0(&local_58);
  }
  return;
}


