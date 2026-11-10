/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f8110; name: FUN_.text__003f8110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN__text__003f8110(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5,
                   undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,long *param_10,
                   undefined1 *param_11)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_68;
  
  *param_10 = 0;
  *param_11 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d));
  uVar4 = 0;
  plVar1 = param_1 + 0x55;
  local_68 = 0;
  if ((param_3 != -1) && ((char)param_1[0xc0] != '\0')) {
    uVar4 = FUN__text__003fecb0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68
                               );
  }
  if ((param_8 & 1) == 0) {
LAB__text__003f81d0:
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
    if (puVar8 == (undefined8 *)0x0) goto LAB__text__003f836c;
    if (local_68 == 0) {
      FUN__text__003fe960(plVar1,*param_9,param_6,&local_68);
      if (local_68 == 0) {
        lVar6 = puVar8[1];
        puVar8[1] = 0;
        if (lVar6 != 0) {
          FUN__text__003fe878(plVar1);
        }
        FUN__text__00400fc0(7,puVar8);
        goto LAB__text__003f8364;
      }
      lVar6 = *(long *)(local_68 + 8);
      uVar4 = *(undefined4 *)(local_68 + 0x1c);
      uVar2 = *param_9;
      plVar5 = (long *)param_1[200];
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          param_1[199] = 0;
        }
        param_1[200] = lVar7;
        *plVar5 = 0;
        *(int *)(param_1 + 0xc6) = (int)param_1[0xc6] + -1;
      }
      uVar3 = *(uint *)(param_2 + 0x60);
      lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 8);
      *(undefined4 *)(plVar5 + 2) = uVar4;
      *(undefined4 *)((long)plVar5 + 0x14) = uVar2;
      plVar5[1] = param_4 + lVar7 * (ulong)uVar3;
      lVar7 = _DAT_008a4400;
      plVar5[5] = (long)plVar5;
      plVar5[6] = 0;
      plVar5[8] = param_2;
      plVar5[3] = lVar6;
      plVar5[4] = lVar7;
      *(byte *)(plVar5 + 9) = *(byte *)(plVar5 + 9) & 0xfc;
      *param_10 = (long)plVar5;
      FUN__text__003fef00(plVar1,local_68,plVar5,param_3,param_4,*param_9);
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8[1] = local_68;
      *(byte *)((long)puVar8 + 0x14) = *(byte *)((long)puVar8 + 0x14) & 0xf8;
      lVar6 = *param_10;
      if (*(long *)(lVar6 + 0x38) == 0) {
        *(undefined8 **)(lVar6 + 0x38) = puVar8;
        puVar8[3] = 0;
      }
      else {
        puVar8[3] = *(long *)(lVar6 + 0x38);
        *(undefined8 **)(lVar6 + 0x38) = puVar8;
      }
    }
    else {
      puVar8[1] = local_68;
      *(undefined4 *)(puVar8 + 2) = uVar4;
      *(byte *)((long)puVar8 + 0x14) = *(byte *)((long)puVar8 + 0x14) & 0xf8;
      lVar6 = *(long *)(local_68 + 0x10);
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x38) == 0) {
          *(undefined8 **)(lVar6 + 0x38) = puVar8;
          puVar8[3] = 0;
        }
        else {
          puVar8[3] = *(long *)(lVar6 + 0x38);
          *(undefined8 **)(lVar6 + 0x38) = puVar8;
        }
        *param_11 = 1;
      }
    }
    *puVar8 = 0;
    plVar1 = (long *)(param_2 + 0xd0);
    if (*(long *)(param_2 + 0xd0) != 0) {
      plVar1 = *(long **)(param_2 + 200);
    }
    *plVar1 = (long)puVar8;
    *(undefined8 **)(param_2 + 200) = puVar8;
    puVar8[4] = param_2;
  }
  else {
    if (local_68 != 0) {
      if (*(long *)(local_68 + 0x10) == 0) goto LAB__text__003f81d0;
      FUN__text__003fe878(plVar1);
    }
LAB__text__003f8364:
    puVar8 = (undefined8 *)0x0;
  }
LAB__text__003f836c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d));
  return puVar8;
}


