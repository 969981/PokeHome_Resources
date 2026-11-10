/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00409744; name: FUN_.text__00409744
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00409744(undefined8 param_1,int *param_2,undefined8 *param_3,uint param_4,
                        uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *local_48;
  
  puVar4 = (undefined8 *)FUN__text__00400f80(0,0x560);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0x34;
    if (((param_4 & 1) != 0) && (DAT_00ae9a28 == 0)) {
      puVar8 = (undefined8 *)0x0;
LAB__text__00409894:
      *_DAT_008a4a30 = 2;
      goto LAB__text__004098a4;
    }
LAB__text__0040994c:
    pcVar7 = DAT_00ae9a20;
    if (DAT_00ae9a20 == (code *)0x0) {
      return uVar3;
    }
    uVar5 = FUN__text__0040dc30();
    iVar1 = *param_2;
    iVar2 = param_2[1];
  }
  else {
    FUN__text__0040632c(puVar4,param_2,param_1,param_4 & 1,param_5 & 1);
    local_48 = puVar4;
    uVar3 = FUN__text__00408c50(&local_48);
    puVar8 = local_48;
    if (uVar3 == 1) {
      uVar3 = FUN__text__00409460(local_48,param_3);
      if (uVar3 != 1) {
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8);
          FUN__text__00400fc0(0,puVar8);
        }
        goto LAB__text__00409848;
      }
      if (((param_4 & 1) != 0) && (DAT_00ae9a28 == 0)) {
LAB__text__00409864:
        uVar3 = 1;
        if (*(int *)(*(long *)(_DAT_008a49d0 + 0x10) + 100) != *param_2) goto LAB__text__00409894;
        DAT_00ae9a28 = 1;
      }
    }
    else {
      (**(code **)*puVar4)(puVar4);
      FUN__text__00400fc0(0,puVar4);
      puVar8 = local_48;
LAB__text__00409848:
      if (((param_4 & 1) != 0) && (DAT_00ae9a28 == 0)) {
        if (uVar3 == 1) goto LAB__text__00409864;
        goto LAB__text__00409894;
      }
LAB__text__004098a4:
      if ((uVar3 & 0xfffffffd) != 1) goto LAB__text__0040994c;
    }
    puVar4 = puVar8 + 8;
    if ((undefined8 *)puVar8[10] != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 0xb) = 0;
      if ((undefined8 *)puVar8[10] != puVar4) {
        FUN__text__00400fc0(4);
      }
      puVar8[10] = 0;
      *(undefined4 *)((long)puVar8 + 0x5c) = 0;
    }
    puVar6 = (undefined8 *)param_3[2];
    if (puVar6 == param_3) {
      *puVar4 = *param_3;
      puVar6 = puVar4;
    }
    puVar8[10] = puVar6;
    *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)((long)puVar8 + 0x5c) = *(undefined4 *)((long)param_3 + 0x1c);
    param_3[2] = 0;
    param_3[3] = 0;
    FUN__text__0040a5b0(_DAT_008a4a28,puVar4);
    FUN__text__0041595c(0);
    pcVar7 = DAT_00ae9a20;
    if (DAT_00ae9a20 == (code *)0x0) {
      return 1;
    }
    uVar5 = FUN__text__0040dc30();
    iVar1 = *(int *)((long)puVar8 + 100);
    iVar2 = *(int *)(puVar8 + 0xd);
    uVar3 = 1;
  }
  (*pcVar7)(uVar5,iVar1,iVar2,0,uVar3);
  return uVar3;
}


