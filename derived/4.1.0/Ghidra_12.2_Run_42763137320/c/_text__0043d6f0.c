/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d6f0; name: FUN_.text__0043d6f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0043d6f0(undefined4 param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 extraout_s0;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_48;
  undefined4 local_44;
  
  puVar1 = _DAT_008a45f0;
  if ((int)param_2[1] == 0) {
    bVar3 = *(byte *)(param_2 + 2);
  }
  else {
    puVar5 = (undefined8 *)*param_2;
    do {
      if (*(char *)(puVar5 + 1) != *(char *)((long)param_2 + 0x11)) {
        plVar4 = (long *)*puVar5;
        *(char *)(puVar5 + 1) = *(char *)((long)param_2 + 0x11);
        puVar2 = (undefined8 *)(**(code **)*plVar4)(param_1,plVar4);
        if (param_3 == 0) {
          local_48 = *(int *)(param_4 + 0x70);
          lVar6 = *(long *)(param_4 + 0x20);
          param_1 = extraout_s0;
          if (lVar6 != 0) goto LAB__text__0043d7d0;
LAB__text__0043d89c:
          local_94 = *(int *)(param_4 + 0x70);
          if (local_48 == local_94) goto LAB__text__0043d864;
        }
        else {
          local_90 = *puVar2;
          uStack_88 = puVar2[1];
          local_44 = 0;
          local_80 = puVar2[2];
          uStack_78 = puVar2[3];
          local_70 = puVar2[4];
          uStack_68 = puVar2[5];
          FUN__text__00434be0(*puVar1,*(undefined8 *)(param_3 + 0x28),&local_90,&local_44,0);
          local_48 = 0;
          param_1 = local_44;
          if (*(long *)(param_3 + 8) != 0) {
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_3 + 0x18));
            param_1 = FUN__text__0041a060(param_3 + 8,&local_90,&local_48);
            *(undefined4 *)(param_3 + 0x18) = (undefined4)local_90;
          }
          lVar6 = *(long *)(param_4 + 0x20);
          if (lVar6 == 0) goto LAB__text__0043d89c;
LAB__text__0043d7d0:
          local_90 = *puVar2;
          uStack_88 = puVar2[1];
          local_44 = 0;
          local_80 = puVar2[2];
          uStack_78 = puVar2[3];
          local_70 = puVar2[4];
          uStack_68 = puVar2[5];
          FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar6 + 0x28),&local_90,&local_44,0);
          local_94 = 0;
          param_1 = local_44;
          if (*(long *)(lVar6 + 8) != 0) {
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(lVar6 + 0x18));
            param_1 = FUN__text__0041a060((long *)(lVar6 + 8),&local_90,&local_94);
            *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_90;
          }
          if (local_48 == local_94) goto LAB__text__0043d864;
        }
        param_1 = (**(code **)(*plVar4 + 8))
                            (plVar4,*(undefined8 *)(param_4 + 8),puVar2,&local_48,&local_94);
      }
LAB__text__0043d864:
      bVar3 = *(byte *)(param_2 + 2);
    } while (((bVar3 & 3) == 0) &&
            (puVar5 = puVar5 + 2,
            puVar5 != (undefined8 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x10)));
  }
  if ((bVar3 & 3) == 1) {
    *(byte *)(param_2 + 2) = bVar3 & 0xfe;
    FUN__text__0043d6f0(param_2,param_3,param_4);
  }
  return;
}


