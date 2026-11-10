/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040007c; name: FUN_.text__0040007c
 */


long FUN__text__0040007c(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5,
                        undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,
                        long *param_10)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long local_68;
  
  *param_10 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d));
  uVar5 = 0;
  plVar1 = param_1 + 0x55;
  local_68 = 0;
  if ((param_3 != -1) && ((char)param_1[0xc0] != '\0')) {
    uVar5 = FUN__text__003fecb0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68
                               );
  }
  if ((param_8 & 1) == 0) {
LAB__text__00400124:
    lVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    if (lVar6 != 0) {
      if (local_68 == 0) {
        FUN__text__003fe960(plVar1,*param_9,param_6,&local_68);
        if (local_68 == 0) {
          lVar7 = *(long *)(lVar6 + 8);
          *(undefined8 *)(lVar6 + 8) = 0;
          if (lVar7 != 0) {
            FUN__text__003fe878(plVar1);
          }
          FUN__text__00400fc0(7,lVar6);
          goto LAB__text__004001d0;
        }
        uVar2 = *(undefined4 *)(local_68 + 0x1c);
        uVar3 = *param_9;
        uVar4 = *(uint *)(param_2 + 0x60);
        lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 8);
        param_1[200] = *(long *)(local_68 + 8);
        *(undefined4 *)(param_1 + 199) = uVar2;
        *(undefined4 *)((long)param_1 + 0x63c) = uVar3;
        param_1[0xc6] = param_4 + lVar7 * (ulong)uVar4;
        *param_10 = (long)(param_1 + 0xc6);
        FUN__text__003fef00(plVar1,local_68,param_1 + 0xc6,param_3,param_4,*param_9);
      }
      *(long *)(lVar6 + 8) = local_68;
      *(undefined4 *)(lVar6 + 0x10) = uVar5;
      *(byte *)(lVar6 + 0x14) = *(byte *)(lVar6 + 0x14) & 0xf8;
      goto LAB__text__004001d4;
    }
    if (local_68 != 0) goto LAB__text__004001c8;
  }
  else if (local_68 != 0) {
    if (*(long *)(local_68 + 0x10) == 0) goto LAB__text__00400124;
LAB__text__004001c8:
    FUN__text__003fe878(plVar1);
  }
LAB__text__004001d0:
  lVar6 = 0;
LAB__text__004001d4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d));
  return lVar6;
}


