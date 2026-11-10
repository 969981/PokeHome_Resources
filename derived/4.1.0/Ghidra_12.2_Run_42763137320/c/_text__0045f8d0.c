/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f8d0; name: FUN_.text__0045f8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045f8d0(float param_1,long param_2,int param_3,int param_4,undefined4 param_5,
                        uint param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *local_78;
  ulong uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar4 = (undefined8 *)0x0;
  if (param_6 == 0) {
    puVar4 = (undefined8 *)(param_2 + 0x148);
  }
  puVar1 = (undefined8 *)(param_2 + 0x170);
  if (param_6 != 5) {
    puVar1 = puVar4;
  }
  uVar6 = (ulong)param_6;
  puVar4 = puVar1;
  do {
    puVar4 = (undefined8 *)*puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = puVar1;
      goto LAB__text__0045f960;
    }
  } while (*(int *)(puVar4 + 1) != param_3);
  puVar4 = puVar4 + 2;
  uVar2 = FUN__text__00466c24(param_2,*(undefined4 *)(_DAT_008a4ac8 + uVar6 * 4));
  goto joined_r0x0045fa10;
  while (*(int *)(puVar4 + 1) != param_3) {
LAB__text__0045f960:
    puVar4 = (undefined8 *)*puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puVar1[2];
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN__text__00400f80(0,0x30);
        if (puVar4 == (undefined8 *)0x0) {
          return;
        }
        puVar4[2] = 0x88da68;
        *puVar4 = puVar1[2];
        puVar1[2] = puVar4;
        puVar5 = (undefined8 *)puVar1[1];
        if (puVar5 != (undefined8 *)0x0) goto LAB__text__0045f988;
LAB__text__0045f9c4:
        *puVar1 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)puVar1[1];
        if (puVar5 == (undefined8 *)0x0) goto LAB__text__0045f9c4;
LAB__text__0045f988:
        *puVar5 = puVar4;
        puVar4 = (undefined8 *)puVar1[2];
      }
      puVar1[1] = puVar4;
      puVar1[2] = *puVar4;
      *puVar4 = 0;
      *(int *)((long)puVar1 + 0x24) = *(int *)((long)puVar1 + 0x24) + 1;
      puVar4 = (undefined8 *)puVar1[1];
      *(int *)(puVar4 + 1) = param_3;
      break;
    }
  }
  puVar4 = puVar4 + 2;
  FUN__text__004cfe04(puVar4,param_2);
  uVar2 = FUN__text__00466c24(param_2,*(undefined4 *)(_DAT_008a4ac8 + uVar6 * 4));
joined_r0x0045fa10:
  if (((uVar2 & 1) != 0) && (*(undefined1 *)((long)puVar4 + 0x1c) = 0, DAT_00ae9a60 != 0)) {
    if (puVar4[2] != 0) {
      FUN__text__0042f65c(param_1,DAT_00ae9a60,puVar4[2],uVar6,param_4,param_5,2);
      return;
    }
    if ((param_4 == 0) || (local_68 = *(float *)(puVar4 + 3), local_68 == param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0045fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(param_1,puVar4,uVar6,1);
      return;
    }
    local_58 = 0x11;
    local_54 = 0x101;
    local_52 = 0;
    local_78 = puVar4;
    uStack_70 = uVar6;
    fStack_64 = param_1;
    local_60 = param_4;
    uStack_5c = param_5;
    lVar3 = FUN__text__0042f18c(DAT_00ae9a60,&local_78,0);
    puVar4[2] = lVar3;
    if (lVar3 == 0) {
      (**(code **)*puVar4)(param_1,puVar4,uVar6,1);
    }
  }
  return;
}


